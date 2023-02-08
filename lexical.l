%{
/*definition en language C */
#include "syntaxique.tab.h"
extern  nb_ligne;
extern Col;
extern YYSTYPE yylval;
#include "fonctions.h"
%}
/*Les définitions des expressions régulière*/
lettreM [A-Z]
lettre [a-z]
chiffre [0-9]
espace ""
idf {lettreM}({lettre}|{chiffre})*
string ({lettre}({lettre}|{lettreM}|{chiffre}|" ")+)
chaine_commentaire #(.*)!
entier {chiffre}*
entier_sign (\([+-]{chiffre}{chiffre}*\))
reel (\([+-]{chiffre}+\,{chiffre}*\)|{chiffre}+\,{chiffre}*)
caractere (\'[^ \n\t]\')

%%
"IDENTIFICATION DIVISION." {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_ident; }
"PROGRAM-ID."              {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_prog;}
"DATA DIVISION."           {rechercher(yytext,"Mot cle",0,0, 1);  Col= Col + strlen(yytext); return mc_data;}
"WORKING-STORAGE SECTION." {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_working;}
"PROCEDURE DIVISION."      {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_procedure;}
"STOP RUN"                 {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_stop;}
LINE                       {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_line;}
SIZE                       {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);return mc_size;}
INTEGER                    {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);yylval.str=strdup("INTEGER"); return mc_entier;}
FLOAT                      {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);yylval.str=strdup("FLOAT");return mc_reel;}
CHAR                       {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);yylval.str=strdup("CHAR");return mc_char;}
STRING                     {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);yylval.str=strdup("STRING");return mc_chaine;}
CONST                      {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);yylval.str=strdup("CONST");return mc_const;}
MOVE                       {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_move;}
TO                         {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_to; }
END                        {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_end;}
ACCEPT                     {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_accept;}
DISPLAY                    {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_display;}
IF                         {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_if;}
ELSE                       {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_else;}
AND                        {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext);return mc_and;}
OR                         {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_or;}
NOT                        {rechercher(yytext,"Mot cle",0,0, 1); Col= Col + strlen(yytext); return mc_not;}
"+"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext);return plus;}
"-"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext); return moin;}
"*"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext); return mult;}
"/"                        {rechercher(yytext,"Separateurs",0,0,2); Col= Col + strlen(yytext);yylval.str=strdup(yytext); return division;}
"&"                        {rechercher(yytext,"Separateurs",0,0,2); Col= Col + strlen(yytext);yylval.str=strdup(yytext); return signe_char;}
"%"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext); return signe_float;}
"#"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext); return signe_chaine;}
"$"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); yylval.str=strdup(yytext); return signe_entier;}
"@"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return aroba;}
"|"                        {rechercher(yytext,"Separateurs",0,0,2); Col= Col + strlen(yytext); return sp;}
"."                        {rechercher(yytext,"Separateurs",0,0,2); Col= Col + strlen(yytext);return point; }
".G."                      {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return  G;}
".L."                      {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return  L;}
".GE."                     {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return GE;}
".LE."                     {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return LE;}
".EQ."                     {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return EQ;}
".DI."                     {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return DI;}
":"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return dpts;}
"("                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return par_ov;}
")"                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return par_fr;}
","                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return vrg;}
"="                        {rechercher(yytext,"Separateurs",0,0,2);Col= Col + strlen(yytext); return aff;}
"\""   return ap;
"'"    return p; 
{espace} return espace;
{idf} {  Col= Col + strlen(yytext);
       inserer(yytext,"idf");  
     if (yyleng<=20) {yylval.str=strdup(yytext);
                          return idf;
                          }
          else printf("erreur lexicale : idf trop long a la ligne %d sur %s\n",nb_ligne, yytext);
		 }


{chaine_commentaire} {Col= Col + strlen(yytext); nb_ligne=nb_ligne+nb_ligne_comment(yytext); return commentaire;} 
{entier} { Col= Col + strlen(yytext);
        if(atoi(yytext)> 32767){
        printf("erreur lexicale : entier trop long a la ligne %d \n",nb_ligne);
}else{
         
        yylval.entier=atoi(yytext); return cst;
}
   }
{reel} { Col= Col + strlen(yytext);
       yylval.str=strdup(yytext); return reel;}
{entier_sign}   {  Col= Col + strlen(yytext);
      yylval.str=strdup(yytext); return entier;}
{caractere} {Col= Col + strlen(yytext);
      yylval.str=strdup(yytext); return caracter;}
{string} {Col= Col + strlen(yytext);
      yylval.str=strdup(yytext); return string;}

[ \t]     Col= Col + strlen(yytext);
\n        {Col= 1; nb_ligne++;} 
. printf ("Entite lexicale non reconnue a ligne %d a la colonne %d \n", nb_ligne, Col);
