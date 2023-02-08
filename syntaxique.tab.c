
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"

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



/* Line 189 of yacc.c  */
#line 91 "syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     idf = 258,
     par_ov = 259,
     par_fr = 260,
     string = 261,
     commentaire = 262,
     cst = 263,
     mc_entier = 264,
     mc_reel = 265,
     mc_chaine = 266,
     p = 267,
     vrg = 268,
     aff = 269,
     mc_const = 270,
     plus = 271,
     moin = 272,
     mult = 273,
     division = 274,
     ap = 275,
     signe_entier = 276,
     signe_float = 277,
     signe_chaine = 278,
     espace = 279,
     mc_if = 280,
     mc_else = 281,
     mc_or = 282,
     mc_and = 283,
     dpts = 284,
     mc_end = 285,
     mc_move = 286,
     mc_to = 287,
     mc_ident = 288,
     mc_prog = 289,
     mc_data = 290,
     mc_working = 291,
     mc_procedure = 292,
     mc_stop = 293,
     mc_line = 294,
     mc_size = 295,
     entier = 296,
     reel = 297,
     point = 298,
     sp = 299,
     signe_char = 300,
     caracter = 301,
     mc_char = 302,
     mc_not = 303,
     G = 304,
     L = 305,
     GE = 306,
     LE = 307,
     DI = 308,
     EQ = 309,
     aroba = 310,
     mc_display = 311,
     mc_accept = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "syntaxique.y"

     int  entier;
     char* str;
     float ft;   



/* Line 214 of yacc.c  */
#line 192 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "syntaxique.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    15,    18,    21,    22,    24,    26,
      28,    32,    36,    40,    46,    50,    54,    57,    66,    68,
      70,    72,    74,    77,    81,    84,    86,    87,    90,    93,
      94,    96,    98,   100,   102,   104,   112,   123,   125,   132,
     134,   136,   140,   142,   146,   149,   151,   153,   155,   157,
     159,   161,   163,   165,   174,   179,   180,   183,   186,   189,
     192,   195,   198,   199,   210,   212,   214,   216,   218,   223,
     227,   231,   235,   239,   243,   245,   247,   249,   251,   255,
     257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    33,    34,     3,    60,    38,    -1,    35,
      36,    61,    37,    69,    -1,    62,    61,    -1,     7,    61,
      -1,    -1,    67,    -1,    65,    -1,    63,    -1,    15,    64,
      43,    -1,     3,    14,     8,    -1,     3,    14,    41,    -1,
       3,    14,    20,     6,    20,    -1,     3,    14,    46,    -1,
       3,    14,    42,    -1,     3,    66,    -1,     3,    39,     8,
      13,    40,     8,    66,    43,    -1,     9,    -1,    10,    -1,
      11,    -1,    47,    -1,    68,    43,    -1,     3,    44,    68,
      -1,     3,    66,    -1,    70,    -1,    -1,    71,    70,    -1,
       7,    70,    -1,    -1,    85,    -1,    83,    -1,    80,    -1,
      73,    -1,    72,    -1,    25,     4,    76,     5,    29,    70,
      30,    -1,    25,     4,    76,     5,    29,    70,    30,    26,
      70,    30,    -1,    74,    -1,    31,    75,    32,    75,    70,
      30,    -1,     3,    -1,     8,    -1,    77,    78,    77,    -1,
      77,    -1,    86,    79,    86,    -1,    48,    86,    -1,    28,
      -1,    27,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    56,     4,    20,    82,    20,
      81,     5,    43,    -1,    29,    55,     3,    81,    -1,    -1,
       6,    82,    -1,    24,    82,    -1,    21,    82,    -1,    22,
      82,    -1,    23,    82,    -1,    45,    82,    -1,    -1,    57,
       4,    20,    84,    20,    29,    55,     3,     5,    43,    -1,
      23,    -1,    21,    -1,    22,    -1,    45,    -1,     3,    14,
      86,    43,    -1,    86,    16,    86,    -1,    86,    17,    86,
      -1,    86,    18,    86,    -1,    86,    19,    86,    -1,     4,
      86,     5,    -1,     3,    -1,    87,    -1,     8,    -1,    41,
      -1,    20,     6,    20,    -1,    42,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    42,    44,    45,    46,    48,    49,    50,
      52,    54,    62,    67,    73,    79,    85,    91,   101,   103,
     105,   107,   110,   112,   121,   131,   132,   134,   135,   136,
     138,   145,   146,   147,   148,   150,   151,   153,   155,   157,
     168,   170,   170,   172,   173,   175,   175,   177,   178,   179,
     180,   181,   182,   184,   197,   207,   209,   210,   211,   212,
     213,   214,   215,   217,   232,   234,   236,   238,   241,   256,
     257,   258,   259,   266,   267,   277,   280,   282,   285,   287,
     289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "idf", "par_ov", "par_fr", "string",
  "commentaire", "cst", "mc_entier", "mc_reel", "mc_chaine", "p", "vrg",
  "aff", "mc_const", "plus", "moin", "mult", "division", "ap",
  "signe_entier", "signe_float", "signe_chaine", "espace", "mc_if",
  "mc_else", "mc_or", "mc_and", "dpts", "mc_end", "mc_move", "mc_to",
  "mc_ident", "mc_prog", "mc_data", "mc_working", "mc_procedure",
  "mc_stop", "mc_line", "mc_size", "entier", "reel", "point", "sp",
  "signe_char", "caracter", "mc_char", "mc_not", "G", "L", "GE", "LE",
  "DI", "EQ", "aroba", "mc_display", "mc_accept", "$accept", "S", "CORP",
  "LISTE_DEC", "DEC", "DEC_CST", "LISTE_CONST", "DEC_TAB", "TYPE_VAR",
  "DEC_VAR", "LISTE_IDF", "MAIN", "LISTE_INSTRUCTION", "INSTRUCTION",
  "IF_ELSE", "BOUCLE", "MOVE", "A", "LISTE_CONDITION", "CONDITION",
  "OP_LOGIC", "OP_COMPARAISON", "OUTPUT", "Elements", "PHRASE", "INPUT",
  "SIGNE_FORMATAGE", "INSTRUCTION_AFFECTATION", "EXP", "IDF_CST", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    61,    61,    62,    62,    62,
      63,    64,    64,    64,    64,    64,    64,    65,    66,    66,
      66,    66,    67,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    83,    84,    84,    84,    84,    85,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     2,     2,     0,     1,     1,     1,
       3,     3,     3,     5,     3,     3,     2,     8,     1,     1,
       1,     1,     2,     3,     2,     1,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     7,    10,     1,     6,     1,
       1,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     4,     0,     2,     2,     2,     2,
       2,     2,     0,    10,     1,     1,     1,     1,     4,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     6,     2,
       0,     6,     0,     0,     6,     9,     8,     7,     0,    18,
      19,    20,     0,     0,    21,    24,     5,     0,     0,    26,
       4,    22,     0,     0,    23,     0,    16,    10,     0,    29,
       0,     0,     0,     0,     3,    25,    29,    34,    33,    37,
      32,    31,    30,     0,    11,     0,    12,    15,    14,     0,
      28,     0,    39,    40,     0,     0,     0,    27,     0,     0,
      74,     0,    76,     0,    77,    79,    80,     0,    75,     0,
       0,    42,     0,     0,    62,     0,     0,    13,     0,     0,
       0,     0,     0,     0,    68,    44,     0,    46,    45,     0,
      47,    48,    49,    50,    51,    52,     0,    29,    62,    62,
      62,    62,    62,    62,     0,    65,    66,    64,    67,     0,
       0,    73,    78,    69,    70,    71,    72,    29,    41,    43,
       0,    56,    58,    59,    60,    57,    61,    55,     0,    17,
       0,    38,     0,     0,     0,    35,     0,     0,     0,    29,
      55,    53,     0,     0,    54,     0,    36,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    13,    14,    15,    28,    16,    25,    17,
      18,    44,    45,    46,    47,    48,    49,    64,    80,    81,
      99,   106,    50,   143,   114,    51,   119,    52,    82,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
     -20,   -12,    25,    28,   -57,    -2,     9,    10,     5,   -57,
      42,     5,    64,    32,     5,   -57,   -57,   -57,    37,   -57,
     -57,   -57,    75,    84,   -57,   -57,   -57,    68,    51,    -1,
     -57,   -57,    96,    48,   -57,    76,   -57,   -57,    94,    -1,
     112,    11,   115,   116,   -57,   -57,    -1,   -57,   -57,   -57,
     -57,   -57,   -57,    83,   -57,   126,   -57,   -57,   -57,    24,
     -57,     1,   -57,   -57,    89,   113,   114,   -57,   127,   117,
     -57,    24,   -57,   130,   -57,   -57,   -57,    81,   -57,    24,
     133,   -17,    22,    11,    40,    80,     7,   -57,    88,   119,
      24,    24,    24,    24,   -57,    95,   111,   -57,   -57,     1,
     -57,   -57,   -57,   -57,   -57,   -57,    24,    -1,    40,    40,
      40,    40,    40,    40,   121,   -57,   -57,   -57,   -57,   122,
     100,   -57,   -57,    72,    72,   -57,   -57,    -1,   -57,    95,
     118,   -57,   -57,   -57,   -57,   -57,   -57,   120,   123,   -57,
     124,   -57,    90,   139,    91,   125,   144,   107,   150,    -1,
     120,   -57,   151,   128,   -57,   129,   -57,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   -57,    15,   -57,   -57,   -57,   -57,   -26,   -57,
     132,   -57,   -39,   -57,   -57,   -57,   -57,    74,   -57,    60,
     -57,   -57,   -57,    12,    18,   -57,   -57,   -57,   -56,   -57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      60,    36,    38,    77,    70,    71,    39,    67,    10,    72,
      97,    98,    11,     1,    62,    88,    19,    20,    21,    63,
      12,    73,     3,    95,    40,     4,    26,    70,    71,    30,
      41,     5,    72,     6,   123,   124,   125,   126,    90,    91,
      92,    93,    74,    75,    73,     8,   108,    76,     9,    79,
     129,    19,    20,    21,    24,    42,    43,    19,    20,    21,
     120,   109,   110,   111,   112,    74,    75,    27,   130,    29,
      76,   100,   101,   102,   103,   104,   105,    19,    20,    21,
      31,    22,    35,    32,    54,   113,    23,    33,   140,    24,
      92,    93,    23,   121,    37,    24,    55,    90,    91,    92,
      93,   115,   116,   117,    90,    91,    92,    93,    59,    53,
     153,    90,    91,    92,    93,    24,    61,    56,    57,    65,
      66,    83,    58,    68,    94,   118,   131,   132,   133,   134,
     135,   136,    69,    84,    85,    86,    89,    87,    96,   122,
     127,   137,   138,   139,   147,   146,   148,   150,   141,   142,
     151,   149,   144,   152,   145,    34,   155,   107,   156,   128,
       0,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157
};

static const yytype_int16 yycheck[] =
{
      39,    27,     3,    59,     3,     4,     7,    46,     3,     8,
      27,    28,     7,    33,     3,    71,     9,    10,    11,     8,
      15,    20,    34,    79,    25,     0,    11,     3,     4,    14,
      31,     3,     8,    35,    90,    91,    92,    93,    16,    17,
      18,    19,    41,    42,    20,    36,     6,    46,    38,    48,
     106,     9,    10,    11,    47,    56,    57,     9,    10,    11,
      86,    21,    22,    23,    24,    41,    42,     3,   107,    37,
      46,    49,    50,    51,    52,    53,    54,     9,    10,    11,
      43,    39,    14,     8,     8,    45,    44,     3,   127,    47,
      18,    19,    44,     5,    43,    47,    20,    16,    17,    18,
      19,    21,    22,    23,    16,    17,    18,    19,    14,    13,
     149,    16,    17,    18,    19,    47,     4,    41,    42,     4,
       4,    32,    46,    40,    43,    45,   108,   109,   110,   111,
     112,   113,     6,    20,    20,     8,     6,    20,     5,    20,
      29,    20,    20,    43,     5,    55,    55,     3,    30,    29,
      43,    26,    29,     3,    30,    23,     5,    83,    30,    99,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    59,    34,     0,     3,    35,    60,    36,    38,
       3,     7,    15,    61,    62,    63,    65,    67,    68,     9,
      10,    11,    39,    44,    47,    66,    61,     3,    64,    37,
      61,    43,     8,     3,    68,    14,    66,    43,     3,     7,
      25,    31,    56,    57,    69,    70,    71,    72,    73,    74,
      80,    83,    85,    13,     8,    20,    41,    42,    46,    14,
      70,     4,     3,     8,    75,     4,     4,    70,    40,     6,
       3,     4,     8,    20,    41,    42,    46,    86,    87,    48,
      76,    77,    86,    32,    20,    20,     8,    20,    86,     6,
      16,    17,    18,    19,    43,    86,     5,    27,    28,    78,
      49,    50,    51,    52,    53,    54,    79,    75,     6,    21,
      22,    23,    24,    45,    82,    21,    22,    23,    45,    84,
      66,     5,    20,    86,    86,    86,    86,    29,    77,    86,
      70,    82,    82,    82,    82,    82,    82,    20,    20,    43,
      70,    30,    29,    81,    29,    30,    55,     5,    55,    26,
       3,    43,     3,    70,    81,     5,    30,    43
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 40 "syntaxique.y"
    {printf("\n programme syntaxiquement correct ^_^\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 55 "syntaxique.y"
    {    
               if(DoubleDeclaration((yyvsp[(1) - (3)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               insererType((yyvsp[(1) - (3)].str),"INTEGER");affectertaille((yyvsp[(1) - (3)].str),1); affectconstante((yyvsp[(1) - (3)].str),"CONST INIT"); 
               char x[20];
               itoa((yyvsp[(3) - (3)].entier),x,10);
               insererValeurConst((yyvsp[(1) - (3)].str),x);
           ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 63 "syntaxique.y"
    {    if(DoubleDeclaration((yyvsp[(1) - (3)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               insererType((yyvsp[(1) - (3)].str),"INTEGER");affectertaille((yyvsp[(1) - (3)].str),1); affectconstante((yyvsp[(1) - (3)].str),"CONST"); 
               insererValeurConst((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));
          ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 68 "syntaxique.y"
    {     
               if(DoubleDeclaration((yyvsp[(1) - (5)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (5)].str),nb_ligne);
               insererType((yyvsp[(1) - (5)].str),"STRING");affectertaille((yyvsp[(1) - (5)].str),1); affectconstante((yyvsp[(1) - (5)].str),"CONST"); 
               insererValeurConst((yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].str));
          ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 74 "syntaxique.y"
    {    
               if(DoubleDeclaration((yyvsp[(1) - (3)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               insererType((yyvsp[(1) - (3)].str),"CHAR");affectertaille((yyvsp[(1) - (3)].str),1); affectconstante((yyvsp[(1) - (3)].str),"CONST"); 
               insererValeurConst((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));
          ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 80 "syntaxique.y"
    {    
               if(DoubleDeclaration((yyvsp[(1) - (3)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               insererType((yyvsp[(1) - (3)].str),"FLOAT");affectertaille((yyvsp[(1) - (3)].str),1); affectconstante((yyvsp[(1) - (3)].str),"CONST"); 
               insererValeurConst((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));
          ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 "syntaxique.y"
    {    
                if(DoubleDeclaration((yyvsp[(1) - (2)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (2)].str),nb_ligne);
               insererType((yyvsp[(1) - (2)].str),sauvType);affectertaille((yyvsp[(1) - (2)].str),1); affectconstante((yyvsp[(1) - (2)].str),"IDF CONST"); 
          ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 92 "syntaxique.y"
    {   
                    if(DoubleDeclaration((yyvsp[(1) - (8)].str))==-1) printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (8)].str),nb_ligne);
                    affectconstante((yyvsp[(1) - (8)].str),"NOT CONST");
                    insererType((yyvsp[(1) - (8)].str),sauvType);
                    affectertaille((yyvsp[(1) - (8)].str),(yyvsp[(6) - (8)].entier));
                    if((yyvsp[(3) - (8)].entier)<=0) 
                    printf("erreur semantique: un tableau ne pas pas etre de taille negative ou nulle a la ligne %d\n", nb_ligne);
               ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 102 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 104 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 106 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 108 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].str));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 113 "syntaxique.y"
    { 
               affectconstante((yyvsp[(1) - (3)].str),"NOT CONST");
               affectertaille((yyvsp[(1) - (3)].str),1);
               if(DoubleDeclaration((yyvsp[(1) - (3)].str))==0)
               insererType((yyvsp[(1) - (3)].str),sauvType);
               else
               printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);							   
          ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    {   
               affectconstante((yyvsp[(1) - (2)].str),"NOT CONST");
               affectertaille((yyvsp[(1) - (2)].str),1);
               if(DoubleDeclaration((yyvsp[(1) - (2)].str))==0)
               insererType((yyvsp[(1) - (2)].str),sauvType);
               else
               printf("erreur semantique: double declaration de  %s a la ligne %d\n",(yyvsp[(1) - (2)].str),nb_ligne);							   
          ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    {
                     strcpy(svidf,"");
                     strcpy(svtyp,"");
                     clean(tab_EXP);
                     clean(tab_OP);
              ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 158 "syntaxique.y"
    {
    strcpy(sauvIdf,(yyvsp[(1) - (1)].str));
               if(DoubleDeclaration((yyvsp[(1) - (1)].str))==0){
                    printf("erreur symentique idf %s undeclared a la ligne %d \n",(yyvsp[(1) - (1)].str),nb_ligne);
                    insererType((yyvsp[(1) - (1)].str),"Undeclared");
                    }
               affectertaille((yyvsp[(1) - (1)].str),1);
               typeidf((yyvsp[(1) - (1)].str),svidf);

   ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 185 "syntaxique.y"
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
          ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 198 "syntaxique.y"
    { 
                    nb_idf++; 
                    insererSigneIdf(SIdf,(yyvsp[(3) - (4)].str));
                      if(DoubleDeclaration((yyvsp[(3) - (4)].str))==0){
                         printf("erreur symentique : idf %s undeclared a la ligne %d \n",(yyvsp[(3) - (4)].str),nb_ligne);
                         insererType((yyvsp[(3) - (4)].str),"Undeclared");
                         affectertaille((yyvsp[(3) - (4)].str),1);
                    }
               ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 211 "syntaxique.y"
    {nb_signe++; insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 212 "syntaxique.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 213 "syntaxique.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 214 "syntaxique.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 218 "syntaxique.y"
    {   
                      strcpy(sauvIdf,(yyvsp[(8) - (10)].str));
                   if(DoubleDeclaration((yyvsp[(8) - (10)].str))==0){
                          printf("erreur symentique idf %s undeclared a la ligne %d \n",(yyvsp[(8) - (10)].str),nb_ligne);
                           insererType((yyvsp[(8) - (10)].str),"Undeclared");
                    } else{
                            if(verifierSigne((yyvsp[(8) - (10)].str),sauvSigne)==-1) {
                         printf("erreur symentique : signe de formatage incompatible a la ligne %d\n",nb_ligne);
                    }
                    }
                              affectertaille((yyvsp[(1) - (10)].str),1);
                                 typeidf((yyvsp[(1) - (10)].str),svidf);
               ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 233 "syntaxique.y"
    {strcpy(sauvSigne,(yyvsp[(1) - (1)].str));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 235 "syntaxique.y"
    {strcpy(sauvSigne,(yyvsp[(1) - (1)].str)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 237 "syntaxique.y"
    {strcpy(sauvSigne,(yyvsp[(1) - (1)].str));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 239 "syntaxique.y"
    {strcpy(sauvSigne,(yyvsp[(1) - (1)].str));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 242 "syntaxique.y"
    {     strcpy(sauvIdf,(yyvsp[(1) - (4)].str));
                       if(DoubleDeclaration((yyvsp[(1) - (4)].str))==0){
                                printf("erreur symentique idf %s undeclared a la ligne %d \n",(yyvsp[(1) - (4)].str),nb_ligne);
                                insererType((yyvsp[(1) - (4)].str),"Undeclared");
                    } else{
                            if(consVal(sauvIdf)==1) 
                              printf("erreur symentique :la const %s a deja une valeur a la ligne %d  \n",sauvIdf,nb_ligne);
                         if(returnTypeExp(tab_EXP,svidf,tab_OP)==1)
                               printf("erreur symentique :Non compatibilite de type a la ligne %d\n", nb_ligne); 
                    }
                               affectertaille((yyvsp[(1) - (4)].str),1);
                                typeidf((yyvsp[(1) - (4)].str),svidf);
                    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 260 "syntaxique.y"
    {
        if((sauvConst==0))
           printf("erreur symentique : division sur zero a la ligne %d\n", nb_ligne);
               RempTabOp(tab_OP,expOP);
               RempTabTypeExp(tab_EXP,svtyp);
     ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 268 "syntaxique.y"
    {
        strcpy(sauvIdf,(yyvsp[(1) - (1)].str));
               if(DoubleDeclaration((yyvsp[(1) - (1)].str))==0){
                    printf("erreur symentique idf %s undeclared a la ligne %d \n",(yyvsp[(1) - (1)].str),nb_ligne);
                    insererType((yyvsp[(1) - (1)].str),"Undeclared");
                    }
               affectertaille((yyvsp[(1) - (1)].str),1);
               typeidf((yyvsp[(1) - (1)].str),svidf);
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 281 "syntaxique.y"
    {sauvConst=(yyvsp[(1) - (1)].entier); strcpy(svtyp,"INTEGER");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 283 "syntaxique.y"
    {strcpy(svtyp,"INTEGER");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 286 "syntaxique.y"
    {strcpy(svtyp,"STRING");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 288 "syntaxique.y"
    {strcpy(svtyp,"FLOAT");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 290 "syntaxique.y"
    {strcpy(svtyp,"CHAR");;}
    break;



/* Line 1455 of yacc.c  */
#line 1903 "syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 292 "syntaxique.y"

/*Redéfinitions
 des fonctions prédéfinies*/
main(){yyparse();afficher();}
yywrap()
{}
yyerror (char*msg)
{
     printf ("Erreur Syntaxique a ligne %d \n", nb_ligne);
}
