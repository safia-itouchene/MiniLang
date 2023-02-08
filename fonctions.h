typedef struct
	{
	char NomEntite[20];
	char CodeEntite[20];
	char TypeEntite[20];
	char constante[20];
	int taille;
	char Valconst[30];
	} TypeTS;  
//***********************************************************************************
typedef struct
{
   int state;
   char name[50];
   char code[20];
   char type[20];
   float val;
 } element;
typedef struct
{ 
   int state; 
   char name[50];
   char type[20];
} elt;
element tab[1000];
elt tabs[200],tabm[200];
extern char sav[20];
/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/
void initialisation()
{
  int i;
  for (i=0;i<1000;i++)
  tab[i].state=0;
  for (i=0;i<200;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}
}
/***Step 3: insertion des entititées lexicales ***/
void insere(char entite[], char code[],char type[],float val,int i, int y)
{
  switch (y)
 { 
   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{
int j,i;

switch(y) 
  {
   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<200)&&(tabm[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(i<200)
          insere(entite,code,type,val,i,1); 
        break; 
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<200)&&(tabs[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(i<200)
         insere(entite,code,type,val,i,2);
        break;
  }
}
//***********************************************************************************              
//2-declarer la table
    TypeTS ts[100]; 
//3-initialiser le compteur de la table
	int CpTabSym=0;
	
//4-programmer la fonction recherche dans la table

	 int recherche(char entite[])
	{                                    
	int i=0;
	while(i<CpTabSym)
	{
	if (strcmp(entite,ts[i].NomEntite)==0) return i;
	i++;
	}
	return -1;
	}
//5- programmer la fonction inserer
	
	void inserer(char entite[], char code[])
	{

	if ( recherche(entite)==-1)
	{
	strcpy(ts[CpTabSym].NomEntite,entite); 
	strcpy(ts[CpTabSym].CodeEntite,code);
	CpTabSym++;
	}
	}
//6-programmer la fonction qui affiche la table
	void afficher ()
	{

	printf("\n /***************Table des symboles ******************/\n");
	printf("____________________________________________________________________________\n");
	printf("| NomEntite |  CodeEntite | TypeEntite | Taille    | Constante | Val        |\n");
	printf("____________________________________________________________________________\n");
	int i=0;
	  while(i<CpTabSym)
	  {
	printf("|%10s |%12s  |%10s |%10d |%10s | %10s |\n",ts[i].NomEntite,ts[i].CodeEntite,ts[i].TypeEntite,ts[i].taille,ts[i].constante,ts[i].Valconst);
		 i++;
	   }
	   printf("\n");

//******************************************************************************************************
	    printf("\n*************** Table des symboles MOTS CLES ***************\n");

printf("____________________________________________\n");
printf("  | NomEntite                  |CodeEntite | \n");
printf("____________________________________________\n");
  
for(i=0;i<200;i++)
    if(tabm[i].state==1)
      { 
        printf("  |%-28s|%10s| \n",tabm[i].name,tabm[i].type);      
      }
printf("\n*************** Table des symboles SEPARATEURS ***************\n");

printf("______________________________\n");
printf("  | NomEntite |  CodeEntite | \n");
printf("______________________________\n");
  
for(i=0;i<200;i++)
    if(tabs[i].state==1)
      { 
        printf("  |%-10s |%12s | \n",tabs[i].name,tabs[i].type );
        
      }

//****************************************************************************************
	}
	
 //7-programmer une fonction qui permet d'inserer le type
	void insererType(char entite[],char type[])
	{
		int pos;
		pos=recherche(entite);
		if(pos!=-1){
			strcpy(ts[pos].TypeEntite,type);
		}
	}
 //8-detecter la double declaration de la variable
	int DoubleDeclaration(char entite[]){
		int position;
		   position =recherche(entite);
		if(strcmp(ts[position].TypeEntite,"")==0) return 0;
		else return -1;
	}
//9-affecter taille
	void affectertaille(char entite[],int taille){
	int i=recherche(entite);
	ts[i].taille=taille;
	}

//10-affecter  CONST and NOT CONST
	void affectconstante(char entite[],char cnst[]){
	int i=recherche(entite); 
	strcpy(ts[i].constante,cnst);
	}

// verifier si un idf a deja une valeur 

	int consVal(char entite[]){
		int pos=recherche(entite);

		if(strcmp(ts[pos].constante,"CONST")==0) return 1;
		return -1;
	}

//inserer valeur pour chaque idf declarer const initialiser
	void insererValeurConst(char entite[],char s[]){
		int pos=recherche(entite);
		strcpy(ts[pos].Valconst,s);
	}

//depasserTabTaille

	int depassementTaille(char entite[],int x){
		int pos=recherche(entite);
		if(ts[pos].taille>x) return 1;
		return -1;
	}

// cas input

//verifier signe de formatage 
	int verifierSigne(char entite[],char signe[]){
		int pos=recherche(entite);
		if(strcmp(ts[pos].TypeEntite,"INTEGER")==0 && strcmp(signe,"$")==0) return 1;
		if(strcmp(ts[pos].TypeEntite,"FLOAT")==0 && strcmp(signe,"%")==0) return 1;
		if(strcmp(ts[pos].TypeEntite,"STRING")==0 && strcmp(signe,"#")==0) return 1;
		if(strcmp(ts[pos].TypeEntite,"CHAR")==0 && strcmp(signe,"&")==0) return 1;
		
		return -1;
	}
//cas output

//inserer tout les signes de formatage dune idf

	void insererSigneIdf(char tab[],char entite[]){
		int pos =recherche(entite);
		if(strcmp(ts[pos].TypeEntite,"INTEGER")==0) strcat(tab,"$");
		if(strcmp(ts[pos].TypeEntite,"FLOAT")==0)strcat(tab,"%");
		if(strcmp(ts[pos].TypeEntite,"STRING")==0) strcat(tab,"#");
		if(strcmp(ts[pos].TypeEntite,"CHAR")==0) strcat(tab,"&");
	}
//inserer tout les signes de formatage dun phrase
	void insererSignePhrase(char tab[],char sauvSigne[]){	
		strcat(tab,sauvSigne);
	}


//set table elements=vide
	void clean(char tab[]){
		int i;
		for(i=0;i<strlen(tab);i++){
				tab[i]='\0';}
	}
//verifier si un format correct
	int FormatCorrect(char tab[],char tab1[]){
		int i;

				if(strcmp(tab,tab1)!=0) {				
					clean(tab);
					clean(tab1);
					return -1;
					}

		clean(tab);
		clean(tab1);
				
		return 1;
	}


	void afficherTab(char tab[]){
		int i;
		for(i=0;i<strlen(tab);i++){
			printf("%c",tab[i]);
		}
	}

//nb_ligne_comment

	int nb_ligne_comment(char entite[]){
		int i,nb=0;
		for ( i = 0; i < strlen(entite); i++)
		{
			if(entite[i]=='\n') nb++;
		}
		return nb;
	}



//verifier la compatibility de type

//verifer exp simple 
int verifierTypeIdf(char idf[],char typaffecter[]){
	if(strcmp(idf,typaffecter)!=0){
		return -1;
	}
	return 1;
}

//copier le type d'un idf dans tp

void typeidf(char entite[],char tp[]){
	int i=recherche(entite);
	strcpy(tp,ts[i].TypeEntite);
}

//remplire les operations d'une expression

void RempTabOp(char tab[],char x[]){
	strcat(tab,x);
}
void RempTabTypeExp(char OP[],char x[]){
	strcat(OP,x);
}

//recherche si un type existe dans la table des types;
int substring(char c1[],char c2[]){
   int i,j;
   for(i=0;i<strlen(c1);i++){
      j=0;
      while(c1[i]==c2[j] && i<strlen(c1) && j<strlen(c2)){
         j++;i++;
      }
      if(j==strlen(c2)){
         return 1;
      }
   
   }
   return 0;
}

// 1  incorrect 0 correct;
int returnTypeExp(char exp[],char svtyp[],char op[]){
	if (strcmp(exp,svtyp)==0) return 0;
	if(strcmp(svtyp,"String")==0) 
		if(substring(exp,"Entier")==1 || substring(exp,"Reel")==1) return 1;
			else if(substring(op,"/")==1 && substring(op,"-")==1 && substring(op,"*")==1) return 1;
					else return 0;
		
	if(strcmp(svtyp,"Entier")==0) 
		if(substring(exp,"String")==1 || substring(exp,"Reel")==1) return 1;
			else if(substring(op,"/")==1) return 1;
					else return 0;

	if(strcmp(svtyp,"Reel")==0)
		if(substring(exp,"String")==1 ) return 1;
		 else return 0;				
}
//**************************************************************************************************************
