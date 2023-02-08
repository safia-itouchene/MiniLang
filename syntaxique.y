%{
/*Définitions en langage C*/
int nb_ligne=1 ,Col=1;
int sauvConst;
int sauvChifr;
char sauvIdf[20];
char sauvSigne[20];
char sauvOpr[20];
char sauvType[20];
int nb_signe=0, nb_idf=0;
char Sig[25] , SIdf[25];
char svtyp[20], svidf[20];
char tab_OP[30],tab_EXP[60];
char expOP[1];

%}
/*Les définitions des terminaux et d’axiome*/
/* token + union */
%union {
     int  entier;
     char* str;
     float ft;   
}
%token 
<str>idf  par_ov par_fr
<str>string commentaire <entier>cst  <str>mc_entier <str>mc_reel <str>mc_chaine p
vrg  aff mc_const <str>plus 
<str>moin <str>mult <str>division ap <str>signe_entier <str>signe_float <str>signe_chaine
 espace 
mc_if mc_else    mc_or mc_and  dpts mc_end mc_move mc_to mc_ident mc_prog mc_data mc_working
mc_procedure mc_stop mc_line mc_size  <str>entier   <str>reel point sp signe_char <str>caracter <str>mc_char mc_not
G L  GE  LE  DI  EQ  aroba mc_display mc_accept
%left plus moin
%left mult division
%left mc_and
%left mc_or
/*Les règles de la grammaire*/
%%
S:mc_ident mc_prog  idf  CORP mc_stop 
     {printf("\n programme syntaxiquement correct ^_^\n");}
;
CORP: mc_data mc_working LISTE_DEC mc_procedure MAIN
;
LISTE_DEC:DEC LISTE_DEC 
         |commentaire LISTE_DEC 
         |
;
DEC:  DEC_VAR 
    | DEC_TAB 
    | DEC_CST
;
DEC_CST:  mc_const LISTE_CONST point
;
LISTE_CONST:idf aff cst
           {    
               if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,"INTEGER");affectertaille($1,1); affectconstante($1,"CONST INIT"); 
               char x[20];
               itoa($3,x,10);
               insererValeurConst($1,x);
           }
           | idf aff entier
          {    if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,"INTEGER");affectertaille($1,1); affectconstante($1,"CONST"); 
               insererValeurConst($1,$3);
          }
          | idf aff ap string ap
          {     
               if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,"STRING");affectertaille($1,1); affectconstante($1,"CONST"); 
               insererValeurConst($1,$4);
          } 
          | idf aff caracter
          {    
               if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,"CHAR");affectertaille($1,1); affectconstante($1,"CONST"); 
               insererValeurConst($1,$3);
          } 
          | idf aff reel
          {    
               if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,"FLOAT");affectertaille($1,1); affectconstante($1,"CONST"); 
               insererValeurConst($1,$3);
          } 
          | idf TYPE_VAR 
          {    
                if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
               insererType($1,sauvType);affectertaille($1,1); affectconstante($1,"IDF CONST"); 
          }
;
DEC_TAB: idf mc_line cst vrg mc_size cst TYPE_VAR  point
               {   
                    if(DoubleDeclaration($1)==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);
                    affectconstante($1,"NOT CONST");
                    insererType($1,sauvType);
                    affectertaille($1,$6);
                    if($3<=0) 
                    printf("erreur semantique: un tableau ne pas pas etre de taille negative ou nulle a la ligne %d\n", nb_ligne);
               }
;
TYPE_VAR: mc_entier
              {strcpy(sauvType,$1);}
         |mc_reel 
              {strcpy(sauvType,$1);}
         |mc_chaine 
              {strcpy(sauvType,$1);}
         |mc_char 
              {strcpy(sauvType,$1);}
;
DEC_VAR:  LISTE_IDF   point 
;
LISTE_IDF:idf  sp LISTE_IDF 
          { 
               affectconstante($1,"NOT CONST");
               affectertaille($1,1);
               if(DoubleDeclaration($1)==0)
               insererType($1,sauvType);
               else
               printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);							   
          }
          |idf TYPE_VAR
          {   
               affectconstante($1,"NOT CONST");
               affectertaille($1,1);
               if(DoubleDeclaration($1)==0)
               insererType($1,sauvType);
               else
               printf("erreur semantique: double declaration de  %s a la ligne %d\n",$1,nb_ligne);							   
          }
;
MAIN:  LISTE_INSTRUCTION 
          |
;
LISTE_INSTRUCTION: INSTRUCTION LISTE_INSTRUCTION 
                  |  commentaire LISTE_INSTRUCTION 
                  |
;
INSTRUCTION:INSTRUCTION_AFFECTATION  
              {
                     strcpy(svidf,"");
                     strcpy(svtyp,"");
                     clean(tab_EXP);
                     clean(tab_OP);
              }
          | INPUT 
          | OUTPUT 
          | BOUCLE 
          |IF_ELSE 
;
IF_ELSE:mc_if par_ov LISTE_CONDITION par_fr dpts LISTE_INSTRUCTION mc_end
       |mc_if par_ov LISTE_CONDITION par_fr dpts LISTE_INSTRUCTION mc_end mc_else  LISTE_INSTRUCTION mc_end
;
BOUCLE: MOVE
;
MOVE:mc_move  A mc_to A LISTE_INSTRUCTION mc_end 
;
A: idf
   {
    strcpy(sauvIdf,$1);
               if(DoubleDeclaration($1)==0){
                    printf("erreur symentique idf %s undeclared a la ligne %d \n",$1,nb_ligne);
                    insererType($1,"Undeclared");
                    }
               affectertaille($1,1);
               typeidf($1,svidf);

   }
   |cst
;
LISTE_CONDITION: CONDITION OP_LOGIC CONDITION | CONDITION
;
CONDITION:      EXP OP_COMPARAISON EXP
               |mc_not EXP 
;
OP_LOGIC:mc_and | mc_or 
;                      
OP_COMPARAISON: G 
              | L 
              | GE 
              | LE 
              | DI 
              | EQ
;
OUTPUT:mc_display par_ov ap PHRASE ap Elements par_fr point
          {     
               if(nb_idf==nb_signe){
                        if(FormatCorrect(Sig,SIdf)==-1){
                  printf("erreur symentique: verifier idf et leur signe de formatage a la ligne %d\n",nb_ligne);
                               }
               }else{
                     printf("erreur symentique: verifier si chaque idf a un signe a la ligne %d\n",nb_ligne);
               }
               nb_idf=0;
               nb_signe=0;
          }
;
Elements: dpts aroba idf Elements 
               { 
                    nb_idf++; 
                    insererSigneIdf(SIdf,$3);
                      if(DoubleDeclaration($3)==0){
                         printf("erreur symentique : idf %s undeclared a la ligne %d \n",$3,nb_ligne);
                         insererType($3,"Undeclared");
                         affectertaille($3,1);
                    }
               }
          |
;
PHRASE: string PHRASE 
       |espace PHRASE
       |signe_entier PHRASE  {nb_signe++; insererSignePhrase(Sig,$1);}
       |signe_float  PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
       |signe_chaine PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
       |signe_char   PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
       |
;
INPUT: mc_accept par_ov ap SIGNE_FORMATAGE ap dpts aroba idf par_fr point
               {   
                      strcpy(sauvIdf,$8);
                   if(DoubleDeclaration($8)==0){
                          printf("erreur symentique idf %s undeclared a la ligne %d \n",$8,nb_ligne);
                           insererType($8,"Undeclared");
                    } else{
                            if(verifierSigne($8,sauvSigne)==-1) {
                         printf("erreur symentique : signe de formatage incompatible a la ligne %d\n",nb_ligne);
                    }
                    }
                              affectertaille($1,1);
                                 typeidf($1,svidf);
               }
;
SIGNE_FORMATAGE:    signe_chaine 
                          {strcpy(sauvSigne,$1);}
                    | signe_entier 
                          {strcpy(sauvSigne,$1); }
                    |signe_float  
                          {strcpy(sauvSigne,$1);}
                    |signe_char
                          {strcpy(sauvSigne,$1);}
;
INSTRUCTION_AFFECTATION:idf aff EXP point 
                    {     strcpy(sauvIdf,$1);
                       if(DoubleDeclaration($1)==0){
                                printf("erreur symentique idf %s undeclared a la ligne %d \n",$1,nb_ligne);
                                insererType($1,"Undeclared");
                    } else{
                            if(consVal(sauvIdf)==1) 
                              printf("erreur symentique :la const %s a deja une valeur a la ligne %d  \n",sauvIdf,nb_ligne);
                         if(returnTypeExp(tab_EXP,svidf,tab_OP)==1)
                               printf("erreur symentique :Non compatibilite de type a la ligne %d\n", nb_ligne); 
                    }
                               affectertaille($1,1);
                                typeidf($1,svidf);
                    }
;
EXP: EXP plus EXP
    |EXP moin EXP
    |EXP mult EXP
    |EXP division EXP
     {
        if((sauvConst==0))
           printf("erreur symentique : division sur zero a la ligne %d\n", nb_ligne);
               RempTabOp(tab_OP,expOP);
               RempTabTypeExp(tab_EXP,svtyp);
     }
    |par_ov EXP par_fr
    |idf 
    {
        strcpy(sauvIdf,$1);
               if(DoubleDeclaration($1)==0){
                    printf("erreur symentique idf %s undeclared a la ligne %d \n",$1,nb_ligne);
                    insererType($1,"Undeclared");
                    }
               affectertaille($1,1);
               typeidf($1,svidf);
    }
    |IDF_CST
 
;
IDF_CST:         cst  
                {sauvConst=$1; strcpy(svtyp,"INTEGER");} 
               |entier
                   {strcpy(svtyp,"INTEGER");}
               |
                ap string ap 
                    {strcpy(svtyp,"STRING");}
               | reel 
                    {strcpy(svtyp,"FLOAT");}
               |caracter
                  {strcpy(svtyp,"CHAR");}
;
%%
/*Redéfinitions
 des fonctions prédéfinies*/
main(){yyparse();afficher();}
yywrap()
{}
yyerror (char*msg)
{
     printf ("Erreur Syntaxique a ligne %d \n", nb_ligne);
}