/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CALL = 258,
     CHAR = 259,
     DO = 260,
     ELSE = 261,
     FALSE = 262,
     FLOAT = 263,
     FOR = 264,
     FUNCTION = 265,
     GLOBAL = 266,
     IF = 267,
     INIT = 268,
     INT = 269,
     LOCAL = 270,
     LOGIC = 271,
     MAIN = 272,
     NEW = 273,
     PROCEDURE = 274,
     PROGRAM = 275,
     READ = 276,
     REPEAT = 277,
     RETURN = 278,
     STATEMENTS = 279,
     THEN = 280,
     TRUE = 281,
     WHILE = 282,
     WRITE = 283,
     ID = 284,
     INTCT = 285,
     FLOATCT = 286,
     CHARCT = 287,
     STRING = 288,
     OR = 289,
     AND = 290,
     NOT = 291,
     RELOP = 292,
     ADOP = 293,
     MULTOP = 294,
     NEG = 295,
     OPPAR = 296,
     CLPAR = 297,
     OPBRAK = 298,
     CLBRAK = 299,
     OPBRACE = 300,
     CLBRACE = 301,
     OPTRIP = 302,
     CLTRIP = 303,
     SCOLON = 304,
     COMMA = 305,
     ASSIGN = 306,
     INVAL = 307
   };
#endif
/* Tokens.  */
#define CALL 258
#define CHAR 259
#define DO 260
#define ELSE 261
#define FALSE 262
#define FLOAT 263
#define FOR 264
#define FUNCTION 265
#define GLOBAL 266
#define IF 267
#define INIT 268
#define INT 269
#define LOCAL 270
#define LOGIC 271
#define MAIN 272
#define NEW 273
#define PROCEDURE 274
#define PROGRAM 275
#define READ 276
#define REPEAT 277
#define RETURN 278
#define STATEMENTS 279
#define THEN 280
#define TRUE 281
#define WHILE 282
#define WRITE 283
#define ID 284
#define INTCT 285
#define FLOATCT 286
#define CHARCT 287
#define STRING 288
#define OR 289
#define AND 290
#define NOT 291
#define RELOP 292
#define ADOP 293
#define MULTOP 294
#define NEG 295
#define OPPAR 296
#define CLPAR 297
#define OPBRAK 298
#define CLBRAK 299
#define OPBRACE 300
#define CLBRACE 301
#define OPTRIP 302
#define CLTRIP 303
#define SCOLON 304
#define COMMA 305
#define ASSIGN 306
#define INVAL 307




/* Copy the first part of user declarations.  */
#line 1 "lab04.y"

/* Inclusao de arquivos da biblioteca de C */

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

/* Definicao dos atributos dos atomos operadores */

#define     LT      1
#define     LE      2
#define     GT      3
#define     GE      4
#define     EQ      5
#define     NE      6

#define     PLUS    1
#define     MINUS   2

#define     TIMES   1
#define     DIVIDE  2
#define     MODULE  3

int tab = 0; // NOTE bota num lugar melhor

/*   Definicao dos tipos de identificadores   */

#define     IDGLOB      1
#define     IDVAR       2
#define     IDFUNC      3
#define     IDPROC      4
#define     IDPROG      5

/*  Definicao dos tipos de variaveis   */

#define     NAOVAR      0
#define     INTEIRO     1
#define     LOGICO      2
#define     REAL        3
#define     CARACTERE   4

/*   Definicao de outras constantes   */

#define NCLASSHASH  23
#define VERDADE     1
#define FALSO       0
#define MAXDIMS     10

/*  Strings para nomes dos tipos de identificadores  */

char *nometipid[6] = {" ", "IDGLOB", "IDVAR", "IDFUNC", "IDPROC", "IDPROG"};

/*  Strings para nomes dos tipos de variaveis  */

char *nometipvar[5] = {"NAOVAR",
    "INTEIRO", "LOGICO", "REAL", "CARACTERE"
};

/*    Declaracoes para a tabela de simbolos     */

typedef struct celsimb celsimb;
typedef celsimb *simbolo;
typedef struct elemlistsimb elemlistsimb;
typedef elemlistsimb *pontelemlistsimb;
typedef elemlistsimb *listsimb;

struct celsimb {
    char *cadeia;
    int tid, tvar, tparam, ndims, dims[MAXDIMS+1], param, nparam;
    char inic, ref, array, parametro;
    listsimb listvardecl, listparam, listfunc;
    simbolo escopo, prox;
};

/*  Lista de simbolos    */

struct elemlistsimb {
    simbolo simb;
    pontelemlistsimb prox;
};

/*  Variaveis globais para a tabela de simbolos e analise semantica */

simbolo tabsimb[NCLASSHASH];
simbolo simb;
int tipocorrente;
simbolo escopo, escaux;
int declparam = FALSO;
listsimb pontvardecl, pontparam, pontfunc;

/*
    Prototipos das funcoes para a tabela de simbolos e analise semantica
 */

void InicTabSimb (void);
void ImprimeTabSimb (void);
simbolo InsereSimb (char *, int, int, simbolo);
int hash (char *);
simbolo ProcuraSimbParaInstanciar (char *, simbolo);
simbolo ProcuraSimbParaUsar (char *, simbolo);
void DeclaracaoRepetida (char *);
void TipoInadequado (char *);
void NaoDeclarado (char *);
void VerificaInicRef (void);
void Incompatibilidade (char *);
void Esperado(char*);
void NaoEsperado(char*);
void InsereListSimb(simbolo, listsimb);



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 114 "lab04.y"
{
    char string[50];
    int atr, valor;
    float valreal;
    char carac;
    simbolo simb;
    int tipoexpr;
    int nsubscr;    
}
/* Line 193 of yacc.c.  */
#line 321 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 334 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    13,    14,    15,    21,    23,    24,
      28,    32,    34,    36,    38,    40,    42,    43,    48,    50,
      51,    57,    59,    63,    64,    67,    70,    72,    74,    75,
      76,    77,    86,    88,    89,    93,    94,    95,    96,   104,
     106,   107,   111,   113,   114,   119,   122,   125,   126,   127,
     128,   135,   136,   140,   141,   145,   146,   151,   152,   153,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   180,   181,   182,   191,   192,   193,   197,   198,
     199,   200,   208,   209,   210,   211,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   249,   250,   251,   252,
     261,   263,   264,   269,   270,   271,   272,   281,   283,   284,
     289,   291,   293,   294,   295,   296,   304,   307,   309,   310,
     314,   315,   319,   320,   321,   327,   328,   329,   336,   338,
     339,   344,   346,   347,   352,   354,   355,   360,   362,   363,
     367,   369,   370,   375,   377,   378,   383,   385,   386,   391,
     393,   395,   397,   399,   401,   403,   404,   408,   409,   414,
     416,   418,   419,   425,   427,   428,   433,   434,   435,   441,
     443
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      54,     0,    -1,    -1,    20,    29,    47,    55,    56,    67,
      89,    48,    -1,    -1,    -1,    11,    45,    57,    58,    46,
      -1,    60,    -1,    -1,    58,    59,    60,    -1,    61,    62,
      49,    -1,    14,    -1,     8,    -1,     4,    -1,    16,    -1,
      64,    -1,    -1,    62,    50,    63,    64,    -1,    29,    -1,
      -1,    29,    43,    65,    66,    44,    -1,    30,    -1,    66,
      50,    30,    -1,    -1,    67,    68,    -1,    69,    85,    -1,
      70,    -1,    76,    -1,    -1,    -1,    -1,    61,    10,    71,
      29,    72,    41,    73,    74,    -1,    42,    -1,    -1,    75,
      82,    42,    -1,    -1,    -1,    -1,    19,    77,    29,    78,
      41,    79,    80,    -1,    42,    -1,    -1,    81,    82,    42,
      -1,    84,    -1,    -1,    82,    50,    83,    84,    -1,    61,
      29,    -1,    86,    91,    -1,    -1,    -1,    -1,    15,    87,
      45,    88,    58,    46,    -1,    -1,    17,    90,    85,    -1,
      -1,    24,    92,    93,    -1,    -1,    45,    94,    95,    46,
      -1,    -1,    -1,    95,    96,    97,    -1,    93,    -1,    98,
      -1,   104,    -1,   108,    -1,   112,    -1,   122,    -1,   128,
      -1,   146,    -1,   135,    -1,   142,    -1,    49,    -1,    -1,
      -1,    -1,    12,    99,   151,   100,    25,   101,    97,   102,
      -1,    -1,    -1,     6,   103,    97,    -1,    -1,    -1,    -1,
      27,   105,   151,   106,     5,   107,    97,    -1,    -1,    -1,
      -1,    22,   109,    97,    27,   110,   151,   111,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
     113,   166,   114,    13,   115,   151,   116,    27,   117,   151,
     118,    18,   119,   151,   120,     5,   121,    97,    -1,    -1,
      -1,    -1,    21,   123,    41,   124,   126,    42,   125,    49,
      -1,   166,    -1,    -1,   126,    50,   127,   166,    -1,    -1,
      -1,    -1,    28,   129,    41,   130,   132,    42,   131,    49,
      -1,   134,    -1,    -1,   132,    50,   133,   134,    -1,    33,
      -1,   151,    -1,    -1,    -1,    -1,     3,   136,    29,   137,
      41,   138,   139,    -1,   149,   140,    -1,   140,    -1,    -1,
      42,   141,    49,    -1,    -1,    23,   143,    49,    -1,    -1,
      -1,    23,   144,   151,   145,    49,    -1,    -1,    -1,   166,
     147,    51,   148,   151,    49,    -1,   151,    -1,    -1,   149,
      50,   150,   151,    -1,   153,    -1,    -1,   151,    34,   152,
     153,    -1,   155,    -1,    -1,   153,    35,   154,   155,    -1,
     157,    -1,    -1,    36,   156,   157,    -1,   159,    -1,    -1,
     159,    37,   158,   159,    -1,   161,    -1,    -1,   159,    38,
     160,   161,    -1,   163,    -1,    -1,   161,    39,   162,   163,
      -1,   166,    -1,    30,    -1,    31,    -1,    32,    -1,    26,
      -1,     7,    -1,    -1,    40,   164,   163,    -1,    -1,    41,
     165,   151,    42,    -1,   170,    -1,    29,    -1,    -1,    29,
      43,   167,   168,    44,    -1,   159,    -1,    -1,   168,    50,
     169,   159,    -1,    -1,    -1,    29,   171,    41,   172,   173,
      -1,    42,    -1,   149,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   195,   195,   193,   208,   210,   209,   214,   215,   215,
     217,   219,   220,   221,   222,   224,   226,   225,   229,   234,
     234,   240,   243,   247,   248,   250,   252,   253,   256,   257,
     264,   255,   267,   268,   268,   270,   271,   278,   270,   281,
     282,   282,   284,   286,   285,   289,   297,   300,   301,   302,
     301,   306,   306,   314,   314,   317,   317,   321,   322,   322,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   336,   337,   341,   336,   345,   346,   346,   349,   350,
     354,   349,   357,   359,   360,   357,   366,   367,   371,   372,
     377,   378,   382,   383,   387,   366,   390,   391,   393,   390,
     396,   400,   399,   403,   404,   406,   403,   409,   411,   410,
     414,   415,   417,   418,   419,   417,   422,   423,   425,   425,
     428,   428,   433,   434,   433,   444,   447,   444,   458,   460,
     459,   463,   464,   464,   470,   471,   471,   477,   478,   478,
     484,   485,   485,   508,   509,   509,   521,   522,   522,   544,
     550,   551,   552,   553,   554,   555,   555,   561,   561,   563,
     565,   577,   576,   595,   600,   600,   606,   613,   606,   618,
     619
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CALL", "CHAR", "DO", "ELSE", "FALSE",
  "FLOAT", "FOR", "FUNCTION", "GLOBAL", "IF", "INIT", "INT", "LOCAL",
  "LOGIC", "MAIN", "NEW", "PROCEDURE", "PROGRAM", "READ", "REPEAT",
  "RETURN", "STATEMENTS", "THEN", "TRUE", "WHILE", "WRITE", "ID", "INTCT",
  "FLOATCT", "CHARCT", "STRING", "OR", "AND", "NOT", "RELOP", "ADOP",
  "MULTOP", "NEG", "OPPAR", "CLPAR", "OPBRAK", "CLBRAK", "OPBRACE",
  "CLBRACE", "OPTRIP", "CLTRIP", "SCOLON", "COMMA", "ASSIGN", "INVAL",
  "$accept", "Prog", "@1", "GlobDecls", "@2", "DeclList", "@3",
  "Declaration", "Type", "ElemList", "@4", "Elem", "@5", "DimList",
  "ModList", "Module", "ModHeader", "FuncHeader", "@6", "@7", "@8",
  "FuncHd", "@9", "ProcHeader", "@10", "@11", "@12", "ProcEnd", "@13",
  "ParamList", "@14", "Parameter", "ModBody", "LocDecls", "@15", "@16",
  "MainMod", "@17", "Stats", "@18", "CompStat", "@19", "StatList", "@20",
  "Statement", "IfStat", "@21", "@22", "@23", "ElseStat", "@24",
  "WhileStat", "@25", "@26", "@27", "RepeatStat", "@28", "@29", "@30",
  "ForStat", "@31", "@32", "@33", "@34", "@35", "@36", "@37", "@38", "@39",
  "ReadStat", "@40", "@41", "@42", "ReadList", "@43", "WriteStat", "@44",
  "@45", "@46", "WriteList", "@47", "WriteElem", "CallStat", "@48", "@49",
  "@50", "CallCompl", "CallFinish", "@51", "ReturnStat", "@52", "@53",
  "@54", "AssignStat", "@55", "@56", "ExprList", "@57", "Expression",
  "@58", "AuxExpr1", "@59", "AuxExpr2", "@60", "AuxExpr3", "@61",
  "AuxExpr4", "@62", "Term", "@63", "Factor", "@64", "@65", "Variable",
  "@66", "SubscrList", "@67", "FuncCall", "@68", "@69", "FuncTerm", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    57,    56,    58,    59,    58,
      60,    61,    61,    61,    61,    62,    63,    62,    64,    65,
      64,    66,    66,    67,    67,    68,    69,    69,    71,    72,
      73,    70,    74,    75,    74,    77,    78,    79,    76,    80,
      81,    80,    82,    83,    82,    84,    85,    86,    87,    88,
      86,    90,    89,    92,    91,    94,    93,    95,    96,    95,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    99,   100,   101,    98,   102,   103,   102,   105,   106,
     107,   104,   109,   110,   111,   108,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   112,   123,   124,   125,   122,
     126,   127,   126,   129,   130,   131,   128,   132,   133,   132,
     134,   134,   136,   137,   138,   135,   139,   139,   141,   140,
     143,   142,   144,   145,   142,   147,   148,   146,   149,   150,
     149,   151,   152,   151,   153,   154,   153,   155,   156,   155,
     157,   158,   157,   159,   160,   159,   161,   162,   161,   163,
     163,   163,   163,   163,   163,   164,   163,   165,   163,   163,
     166,   167,   166,   168,   169,   168,   171,   172,   170,   173,
     173
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     0,     5,     1,     0,     3,
       3,     1,     1,     1,     1,     1,     0,     4,     1,     0,
       5,     1,     3,     0,     2,     2,     1,     1,     0,     0,
       0,     8,     1,     0,     3,     0,     0,     0,     7,     1,
       0,     3,     1,     0,     4,     2,     2,     0,     0,     0,
       6,     0,     3,     0,     3,     0,     4,     0,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     8,     0,     0,     3,     0,     0,
       0,     7,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     8,
       1,     0,     4,     0,     0,     0,     8,     1,     0,     4,
       1,     1,     0,     0,     0,     7,     2,     1,     0,     3,
       0,     3,     0,     0,     5,     0,     0,     6,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     0,     3,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     4,     1,
       1,     0,     5,     1,     0,     4,     0,     0,     5,     1,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     4,     0,    23,     5,
       0,     0,    13,    12,    11,    14,    51,    35,     0,    24,
      47,    26,    27,     0,     8,     7,     0,    47,     0,    28,
      48,    25,     0,     3,     6,     0,    18,     0,    15,    52,
      36,     0,     0,    53,    46,     9,    19,    10,    16,     0,
      29,    49,     0,     0,     0,    37,     0,     0,    55,    54,
      21,     0,    17,    40,    30,     8,    57,    20,     0,    39,
      38,     0,    33,    50,    58,    22,     0,     0,    42,    32,
      31,     0,    56,     0,    45,    41,    43,     0,   112,    86,
      71,    96,    82,   122,    78,   103,   160,    70,    60,    59,
      61,    62,    63,    64,    65,    66,    68,    69,    67,   125,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,    44,   113,    87,   154,   153,   160,   150,
     151,   152,   138,   155,   157,    72,   131,   134,   137,   140,
     143,   146,   149,   159,    97,     0,   121,   123,    79,   104,
       0,   126,     0,     0,     0,     0,     0,     0,   132,     0,
     135,   141,   144,   147,     0,    83,     0,     0,     0,   163,
       0,     0,   114,    88,   167,   139,   156,     0,     0,    73,
       0,     0,     0,     0,     0,   100,     0,   124,    80,   110,
       0,   107,   111,   162,   164,     0,     0,     0,     0,   158,
     133,     0,   136,   142,   145,   148,    98,   101,    84,     0,
     105,   108,     0,   127,   118,   115,   117,     0,   128,    89,
     169,     0,   168,    75,     0,     0,     0,    81,     0,     0,
     165,     0,   129,   116,     0,   170,    76,    74,    99,   102,
      85,   106,   109,   119,     0,    90,     0,   130,     0,    77,
      91,     0,    92,     0,    93,     0,    94,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     8,    11,    24,    35,    25,    26,    37,
      54,    38,    53,    61,    10,    19,    20,    21,    41,    56,
      72,    80,    81,    22,    28,    49,    63,    70,    71,    77,
     110,    78,    31,    32,    42,    57,    23,    27,    44,    52,
      98,    66,    74,    83,    99,   100,   114,   159,   201,   237,
     246,   101,   119,   167,   209,   102,   116,   186,   226,   103,
     113,   153,   197,   234,   248,   251,   253,   255,   257,   104,
     115,   164,   224,   184,   225,   105,   120,   168,   228,   190,
     229,   191,   106,   112,   152,   196,   215,   216,   231,   107,
     117,   118,   166,   108,   122,   171,   217,   244,   192,   178,
     136,   180,   137,   155,   138,   181,   139,   182,   140,   183,
     141,   156,   157,   142,   150,   170,   212,   143,   154,   198,
     222
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
      -5,    21,    52,    25,  -150,  -150,    29,     9,  -150,  -150,
       5,     4,  -150,  -150,  -150,  -150,  -150,  -150,    65,  -150,
      64,  -150,  -150,    32,    36,  -150,    68,    64,    70,  -150,
    -150,  -150,    69,  -150,  -150,     4,    51,   -23,  -150,  -150,
    -150,    75,    63,  -150,  -150,  -150,  -150,  -150,  -150,    73,
    -150,  -150,    71,    79,    68,  -150,    74,     4,  -150,  -150,
    -150,   -33,  -150,    77,  -150,    87,  -150,  -150,    90,  -150,
    -150,     4,    94,  -150,    91,  -150,   112,   -14,  -150,  -150,
    -150,     4,  -150,    20,  -150,  -150,  -150,   -11,  -150,  -150,
    -150,  -150,  -150,    96,  -150,  -150,   103,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
       4,  -150,   123,   124,    98,   114,    20,   107,    98,    98,
     116,  -150,   109,  -150,  -150,  -150,  -150,  -150,   -27,  -150,
    -150,  -150,  -150,  -150,  -150,   127,   129,  -150,  -150,    40,
     126,  -150,  -150,  -150,  -150,   135,  -150,   127,   127,  -150,
      30,  -150,   125,   154,   128,    30,    30,    98,  -150,   143,
    -150,  -150,  -150,  -150,   124,  -150,   121,   166,   118,   134,
       7,    98,  -150,  -150,  -150,  -150,  -150,    11,    98,  -150,
      98,    30,    30,    30,    -4,  -150,    98,  -150,  -150,  -150,
      13,  -150,   127,  -150,  -150,   -24,    60,    98,    81,  -150,
     129,    20,  -150,   134,   126,  -150,  -150,  -150,   127,    20,
    -150,  -150,    30,  -150,  -150,  -150,  -150,    26,   127,   127,
    -150,    56,  -150,   167,   130,   124,   131,  -150,   132,   118,
     134,   133,  -150,  -150,   148,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,    98,  -150,    20,   127,    98,  -150,
     127,   158,  -150,    98,   127,   172,  -150,    20,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,   136,  -150,   149,    -7,  -150,
    -150,   137,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,    97,
    -150,    76,   156,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     138,  -150,  -150,  -150,  -114,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   -44,  -150,  -150,  -150,  -150,  -150,   -30,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,   -10,  -150,  -113,  -150,
      14,  -150,    15,  -150,    34,  -150,  -146,  -150,    12,  -150,
    -149,  -150,  -150,   -83,  -150,  -150,  -150,  -150,  -150,  -150,
    -150
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -167
static const yytype_int16 yytable[] =
{
     109,   135,   145,    18,   169,   147,   148,   176,    12,    12,
     158,    67,    13,    13,  -166,     1,   121,    68,    14,    14,
      15,    15,    16,    88,    17,   213,    47,    48,    85,    89,
     125,   111,    90,   109,   205,   203,    86,   126,   206,    86,
       7,    91,    92,    93,   177,   158,   207,    94,    95,    96,
       3,   193,     4,   199,     9,   210,   127,   194,   195,   128,
     129,   130,   131,   211,    76,    58,   230,   126,   214,    97,
     133,   134,     5,   208,    76,    29,   232,   161,   162,    30,
      33,   185,    34,   218,   219,   218,   127,   223,   126,   128,
     129,   130,   131,    43,    46,   227,   132,    36,   235,    40,
     133,   134,   214,    76,    50,   126,   232,   127,    51,    60,
     128,   129,   130,   131,    55,    64,    58,   132,   109,    69,
      75,   133,   134,   220,   127,   126,   109,   128,   129,   130,
     131,   247,   249,    73,   132,   250,    79,    82,   133,   134,
     254,    84,   239,   258,   127,  -120,   121,   128,   129,   130,
     131,   189,   124,    96,   132,   144,   146,   149,   133,   134,
     151,   158,   165,   109,   160,   163,   172,   173,   179,   174,
     187,   188,   162,   236,   109,   245,   252,   256,    87,   238,
     240,   241,   243,    39,    45,   242,   123,   233,   221,   175,
      59,    62,   200,    65,   204,   202
};

static const yytype_uint16 yycheck[] =
{
      83,   114,   116,    10,   150,   118,   119,   156,     4,     4,
      34,    44,     8,     8,    41,    20,    43,    50,    14,    14,
      16,    16,    17,     3,    19,    49,    49,    50,    42,     9,
     113,    42,    12,   116,   183,   181,    50,     7,    42,    50,
      11,    21,    22,    23,   157,    34,    50,    27,    28,    29,
      29,    44,     0,    42,    45,    42,    26,    50,   171,    29,
      30,    31,    32,    50,    71,    45,   212,     7,    42,    49,
      40,    41,    47,   186,    81,    10,    50,    37,    38,    15,
      48,   164,    46,   196,   197,   198,    26,   201,     7,    29,
      30,    31,    32,    24,    43,   209,    36,    29,    42,    29,
      40,    41,    42,   110,    29,     7,    50,    26,    45,    30,
      29,    30,    31,    32,    41,    41,    45,    36,   201,    42,
      30,    40,    41,    42,    26,     7,   209,    29,    30,    31,
      32,   244,   246,    46,    36,   248,    42,    46,    40,    41,
     253,    29,   225,   257,    26,    49,    43,    29,    30,    31,
      32,    33,    29,    29,    36,    41,    49,    41,    40,    41,
      51,    34,    27,   246,    35,    39,    41,    13,    25,    41,
      49,     5,    38,     6,   257,    27,    18,     5,    81,    49,
      49,    49,    49,    27,    35,   229,   110,   217,   198,   155,
      52,    54,   178,    57,   182,   180
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,    29,     0,    47,    55,    11,    56,    45,
      67,    57,     4,     8,    14,    16,    17,    19,    61,    68,
      69,    70,    76,    89,    58,    60,    61,    90,    77,    10,
      15,    85,    86,    48,    46,    59,    29,    62,    64,    85,
      29,    71,    87,    24,    91,    60,    43,    49,    50,    78,
      29,    45,    92,    65,    63,    41,    72,    88,    45,    93,
      30,    66,    64,    79,    41,    58,    94,    44,    50,    42,
      80,    81,    73,    46,    95,    30,    61,    82,    84,    42,
      74,    75,    46,    96,    29,    42,    50,    82,     3,     9,
      12,    21,    22,    23,    27,    28,    29,    49,    93,    97,
      98,   104,   108,   112,   122,   128,   135,   142,   146,   166,
      83,    42,   136,   113,    99,   123,   109,   143,   144,   105,
     129,    43,   147,    84,    29,   166,     7,    26,    29,    30,
      31,    32,    36,    40,    41,   151,   153,   155,   157,   159,
     161,   163,   166,   170,    41,    97,    49,   151,   151,    41,
     167,    51,   137,   114,   171,   156,   164,   165,    34,   100,
      35,    37,    38,    39,   124,    27,   145,   106,   130,   159,
     168,   148,    41,    13,    41,   157,   163,   151,   152,    25,
     154,   158,   160,   162,   126,   166,   110,    49,     5,    33,
     132,   134,   151,    44,    50,   151,   138,   115,   172,    42,
     153,   101,   155,   159,   161,   163,    42,    50,   151,   107,
      42,    50,   169,    49,    42,   139,   140,   149,   151,   151,
      42,   149,   173,    97,   125,   127,   111,    97,   131,   133,
     159,   141,    50,   140,   116,    42,     6,   102,    49,   166,
      49,    49,   134,    49,   150,    27,   103,   151,   117,    97,
     151,   118,    18,   119,   151,   120,     5,   121,    97
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 195 "lab04.y"
    {
                    printf ("program %s {{{\n\n", (yyvsp[(2) - (3)].string));
                    InicTabSimb();
                    declparam = FALSO;
                    escopo = simb = InsereSimb ("##global", IDGLOB, NAOVAR, NULL);
                    pontvardecl = simb->listvardecl;
                    pontfunc = simb->listfunc;
                }
    break;

  case 3:
#line 206 "lab04.y"
    {printf ("}}}\n"); ImprimeTabSimb();}
    break;

  case 5:
#line 210 "lab04.y"
    {printf ("global {\n"); tab++; tabular();}
    break;

  case 6:
#line 212 "lab04.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 8:
#line 215 "lab04.y"
    {tabular();}
    break;

  case 10:
#line 217 "lab04.y"
    {printf (";\n");}
    break;

  case 11:
#line 219 "lab04.y"
    {printf ("int ");   tipocorrente = INTEIRO;}
    break;

  case 12:
#line 220 "lab04.y"
    {printf ("float "); tipocorrente = REAL;}
    break;

  case 13:
#line 221 "lab04.y"
    {printf ("char ");  tipocorrente = CARACTERE;}
    break;

  case 14:
#line 222 "lab04.y"
    {printf ("logic "); tipocorrente = LOGICO;}
    break;

  case 16:
#line 226 "lab04.y"
    {printf (", "); }
    break;

  case 18:
#line 229 "lab04.y"
    { printf ("%s", (yyvsp[(1) - (1)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(1) - (1)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (1)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (1)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = FALSO; }
                }
    break;

  case 19:
#line 234 "lab04.y"
    { printf ("%s[", (yyvsp[(1) - (2)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(1) - (2)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (2)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (2)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = VERDADE; simb->ndims = 0; }
                }
    break;

  case 20:
#line 238 "lab04.y"
    {printf ("]");}
    break;

  case 21:
#line 240 "lab04.y"
    { printf ("%d", (yyvsp[(1) - (1)].valor));
                    if ((yyvsp[(1) - (1)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(1) - (1)].valor);}
    break;

  case 22:
#line 243 "lab04.y"
    { printf (", %d", (yyvsp[(3) - (3)].valor));
                    if ((yyvsp[(3) - (3)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(3) - (3)].valor);}
    break;

  case 25:
#line 250 "lab04.y"
    { escopo = escopo->escopo; }
    break;

  case 28:
#line 256 "lab04.y"
    {printf ("function ");}
    break;

  case 29:
#line 257 "lab04.y"
    {
                    printf ("%s", (yyvsp[(4) - (4)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(4) - (4)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(4) - (4)].string));
                    escopo = simb = InsereSimb ((yyvsp[(4) - (4)].string), IDFUNC, tipocorrente, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 30:
#line 264 "lab04.y"
    {printf ("\(");}
    break;

  case 32:
#line 267 "lab04.y"
    {printf (")\n");}
    break;

  case 33:
#line 268 "lab04.y"
    {declparam = VERDADE;}
    break;

  case 34:
#line 268 "lab04.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 35:
#line 270 "lab04.y"
    {printf ("procedure ");}
    break;

  case 36:
#line 271 "lab04.y"
    {
                    printf ("%s", (yyvsp[(3) - (3)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(3) - (3)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(3) - (3)].string));
                    escopo = simb = InsereSimb ((yyvsp[(3) - (3)].string), IDPROC, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 37:
#line 278 "lab04.y"
    {printf ("\(");}
    break;

  case 39:
#line 281 "lab04.y"
    {printf (")\n"); }
    break;

  case 40:
#line 282 "lab04.y"
    {declparam = VERDADE;}
    break;

  case 41:
#line 282 "lab04.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 43:
#line 286 "lab04.y"
    {printf (", ");}
    break;

  case 45:
#line 290 "lab04.y"
    {
                    printf ("%s", (yyvsp[(2) - (2)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(2) - (2)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(2) - (2)].string));
                    else  { simb = InsereSimb ((yyvsp[(2) - (2)].string),  IDVAR,  tipocorrente, escopo);
                        simb->array = FALSO; }
                }
    break;

  case 48:
#line 301 "lab04.y"
    {printf ("local "); }
    break;

  case 49:
#line 302 "lab04.y"
    {printf("{\n"); tab++; tabular();}
    break;

  case 50:
#line 304 "lab04.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 51:
#line 306 "lab04.y"
    {
                    printf ("main\n");
                    escopo = simb = InsereSimb("##main", IDPROG, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 53:
#line 314 "lab04.y"
    {printf ("statements ");}
    break;

  case 54:
#line 315 "lab04.y"
    {printf ("\n");}
    break;

  case 55:
#line 317 "lab04.y"
    {printf("{\n"); tab++;}
    break;

  case 56:
#line 319 "lab04.y"
    {tab--; tabular (); printf ("}\n"); }
    break;

  case 58:
#line 322 "lab04.y"
    {tabular(); }
    break;

  case 70:
#line 334 "lab04.y"
    {printf (";\n");}
    break;

  case 71:
#line 336 "lab04.y"
    {printf ("if ");}
    break;

  case 72:
#line 337 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para comando if");
                }
    break;

  case 73:
#line 341 "lab04.y"
    {printf (" then ");}
    break;

  case 76:
#line 346 "lab04.y"
    {tabular(); printf ("else ");}
    break;

  case 78:
#line 349 "lab04.y"
    {printf ("while ");}
    break;

  case 79:
#line 350 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
    break;

  case 80:
#line 354 "lab04.y"
    {printf (" do ");}
    break;

  case 82:
#line 357 "lab04.y"
    {printf ("repeat {\n"); tab++; tabular(); }
    break;

  case 83:
#line 359 "lab04.y"
    {tab--; tabular(); printf ("} while ");}
    break;

  case 84:
#line 360 "lab04.y"
    {
                    if ((yyvsp[(6) - (6)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para comando repeat");
                }
    break;

  case 85:
#line 364 "lab04.y"
    {printf (";\n");}
    break;

  case 86:
#line 366 "lab04.y"
    {printf ("for ");}
    break;

  case 87:
#line 367 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].simb)->tvar != INTEIRO)
                        Incompatibilidade ("Cabecalho de tipo improprio para comando for");
                }
    break;

  case 88:
#line 371 "lab04.y"
    {printf (" init ");}
    break;

  case 89:
#line 372 "lab04.y"
    {
                    if ((yyvsp[(7) - (7)].tipoexpr) != INTEIRO)
                        Incompatibilidade ("Inicializacao impropria para cabecalho de comando for");
                    (yyvsp[(3) - (7)].simb)->inic = (yyvsp[(3) - (7)].simb)->ref = VERDADE;
                }
    break;

  case 90:
#line 377 "lab04.y"
    {printf (" while ");}
    break;

  case 91:
#line 378 "lab04.y"
    {
                    if ((yyvsp[(11) - (11)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
    break;

  case 92:
#line 382 "lab04.y"
    {printf (" new ");}
    break;

  case 93:
#line 383 "lab04.y"
    {
                    if ((yyvsp[(15) - (15)].tipoexpr) != INTEIRO)
                        Incompatibilidade ("Atribuicao de tipo improprio para comando new");
                }
    break;

  case 94:
#line 387 "lab04.y"
    {printf (" do ");}
    break;

  case 96:
#line 390 "lab04.y"
    {printf ("read ");}
    break;

  case 97:
#line 391 "lab04.y"
    {printf ("\(");}
    break;

  case 98:
#line 393 "lab04.y"
    {printf (")"); }
    break;

  case 99:
#line 394 "lab04.y"
    {printf (";\n");}
    break;

  case 100:
#line 396 "lab04.y"
    {
                    (yyvsp[(1) - (1)].simb)->inic = VERDADE;
                }
    break;

  case 101:
#line 400 "lab04.y"
    {printf (", ");}
    break;

  case 103:
#line 403 "lab04.y"
    {printf ("write ");}
    break;

  case 104:
#line 404 "lab04.y"
    {printf ("\(");}
    break;

  case 105:
#line 406 "lab04.y"
    {printf (")"); }
    break;

  case 106:
#line 407 "lab04.y"
    {printf (";\n");}
    break;

  case 108:
#line 411 "lab04.y"
    {printf (", "); }
    break;

  case 110:
#line 414 "lab04.y"
    {printf ("%s", (yyvsp[(1) - (1)].string));}
    break;

  case 112:
#line 417 "lab04.y"
    {printf ("call ");}
    break;

  case 113:
#line 418 "lab04.y"
    {printf ("%s", (yyvsp[(3) - (3)].string));}
    break;

  case 114:
#line 419 "lab04.y"
    {printf ("\(");}
    break;

  case 118:
#line 425 "lab04.y"
    {printf (")");}
    break;

  case 119:
#line 426 "lab04.y"
    {printf (";\n");}
    break;

  case 120:
#line 428 "lab04.y"
    {printf ("return");}
    break;

  case 121:
#line 429 "lab04.y"
    {printf(";\n");
                    if(escopo->tid == IDFUNC)
                        Incompatibilidade("Funcao deveria retornar um valor");
                }
    break;

  case 122:
#line 433 "lab04.y"
    {printf ("return ");}
    break;

  case 123:
#line 434 "lab04.y"
    {
                    if(escopo->tid == IDFUNC){
                        if((yyvsp[(3) - (3)].tipoexpr) != escopo->tvar)
                            Incompatibilidade ("Tipo retornado diferente do tipo esperado");
                    } else {
                        Incompatibilidade ("Retorno inesperado de um valor");
                    }
                }
    break;

  case 124:
#line 442 "lab04.y"
    {printf(";\n");}
    break;

  case 125:
#line 444 "lab04.y"
    {
                    if  ((yyvsp[(1) - (1)].simb) != NULL) (yyvsp[(1) - (1)].simb)->inic = (yyvsp[(1) - (1)].simb)->ref = VERDADE;
                }
    break;

  case 126:
#line 447 "lab04.y"
    {printf (" = ");}
    break;

  case 127:
#line 448 "lab04.y"
    {
                    printf (";\n");
                    if ((yyvsp[(1) - (6)].simb) != NULL)
                        if ((((yyvsp[(1) - (6)].simb)->tvar == INTEIRO || (yyvsp[(1) - (6)].simb)->tvar == CARACTERE) &&
                            ((yyvsp[(5) - (6)].tipoexpr) == REAL || (yyvsp[(5) - (6)].tipoexpr) == LOGICO)) ||
                            ((yyvsp[(1) - (6)].simb)->tvar == REAL && (yyvsp[(5) - (6)].tipoexpr) == LOGICO) ||
                            ((yyvsp[(1) - (6)].simb)->tvar == LOGICO && (yyvsp[(5) - (6)].tipoexpr) != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                }
    break;

  case 129:
#line 460 "lab04.y"
    {printf (", "); }
    break;

  case 132:
#line 464 "lab04.y"
    {printf (" || ");}
    break;

  case 133:
#line 464 "lab04.y"
    {
                    if ((yyvsp[(1) - (4)].tipoexpr) != LOGICO || (yyvsp[(4) - (4)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 135:
#line 471 "lab04.y"
    {printf (" && ");}
    break;

  case 136:
#line 471 "lab04.y"
    {
                    if ((yyvsp[(1) - (4)].tipoexpr) != LOGICO || (yyvsp[(4) - (4)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 138:
#line 478 "lab04.y"
    {printf ("!");}
    break;

  case 139:
#line 478 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 141:
#line 485 "lab04.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case LT: printf (" < "); break;
                        case LE: printf (" <= "); break;
                        case EQ: printf (" == "); break;
                        case NE: printf (" != "); break;
                        case GT: printf (" > "); break;
                        case GE: printf (" >= "); break;
                    }
                }
    break;

  case 142:
#line 494 "lab04.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case LT: case LE: case GT: case GE:
                            if (((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE) || ((yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != REAL && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE))
                                Incompatibilidade   ("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if (((yyvsp[(1) - (4)].tipoexpr) == LOGICO || (yyvsp[(4) - (4)].tipoexpr) == LOGICO) && (yyvsp[(1) - (4)].tipoexpr) != (yyvsp[(4) - (4)].tipoexpr))
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 144:
#line 509 "lab04.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case PLUS: printf (" + "); break;
                        case MINUS: printf (" - "); break;
                    }
                }
    break;

  case 145:
#line 514 "lab04.y"
    {
                        if ((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE || (yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr)!=REAL && (yyvsp[(4) - (4)].tipoexpr)!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if ((yyvsp[(1) - (4)].tipoexpr) == REAL || (yyvsp[(4) - (4)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                        else (yyval.tipoexpr) = INTEIRO;
                }
    break;

  case 147:
#line 522 "lab04.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case TIMES: printf (" * "); break;
                        case DIVIDE: printf (" / "); break;
                        case MODULE: printf (" %% "); break;
                    }
                }
    break;

  case 148:
#line 528 "lab04.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case TIMES: case DIVIDE:
                            if (((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE) || ((yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr)!=REAL && (yyvsp[(4) - (4)].tipoexpr)!=CARACTERE))
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ((yyvsp[(1) - (4)].tipoexpr) == REAL || (yyvsp[(4) - (4)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                            else (yyval.tipoexpr) = INTEIRO;
                            break;
                        case MODULE:
                            if (((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE)  ||  ((yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE))
                                Incompatibilidade ("Operando improprio para operador resto");
                            (yyval.tipoexpr) = INTEIRO;
                            break;
                    }
                }
    break;

  case 149:
#line 544 "lab04.y"
    {
                    if  ((yyvsp[(1) - (1)].simb) != NULL)  {
                        (yyvsp[(1) - (1)].simb)->ref  =  VERDADE;
                        (yyval.tipoexpr) = (yyvsp[(1) - (1)].simb)->tvar;
                    }
                }
    break;

  case 150:
#line 550 "lab04.y"
    {printf ("%d", (yyvsp[(1) - (1)].valor)); (yyval.tipoexpr) = INTEIRO;}
    break;

  case 151:
#line 551 "lab04.y"
    {printf ("%g", (yyvsp[(1) - (1)].valreal)); (yyval.tipoexpr) = REAL;}
    break;

  case 152:
#line 552 "lab04.y"
    {printf ("\'%c\'", (yyvsp[(1) - (1)].carac)); (yyval.tipoexpr) = CARACTERE;}
    break;

  case 153:
#line 553 "lab04.y"
    {printf ("true"); (yyval.tipoexpr) = LOGICO;}
    break;

  case 154:
#line 554 "lab04.y"
    {printf ("false"); (yyval.tipoexpr) = LOGICO;}
    break;

  case 155:
#line 555 "lab04.y"
    {printf ("~");}
    break;

  case 156:
#line 555 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != INTEIRO && (yyvsp[(3) - (3)].tipoexpr) != REAL && (yyvsp[(3) - (3)].tipoexpr) != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ((yyvsp[(3) - (3)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                    else (yyval.tipoexpr) = INTEIRO;
                }
    break;

  case 157:
#line 561 "lab04.y"
    {printf ("(");}
    break;

  case 158:
#line 562 "lab04.y"
    {printf (") "); (yyval.tipoexpr) = (yyvsp[(3) - (4)].tipoexpr);}
    break;

  case 160:
#line 565 "lab04.y"
    {
                    printf ("%s", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDVAR) TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.simb) = simb;
                    if ((yyval.simb) != NULL)
                        if ((yyval.simb)->array == VERDADE)
                            Esperado ("Subscrito\(s)");

                }
    break;

  case 161:
#line 577 "lab04.y"
    {
                    printf ("%s[", (yyvsp[(1) - (2)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (2)].string), escopo);
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (2)].string));
                    else if (simb->tid != IDVAR) TipoInadequado ((yyvsp[(1) - (2)].string));
                    (yyval.simb) = simb;
                }
    break;

  case 162:
#line 585 "lab04.y"
    {
                printf ("]"); (yyval.simb) = (yyvsp[(3) - (5)].simb);
                if ((yyval.simb) != NULL)
                        if ((yyval.simb)->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if ((yyval.simb)->ndims != (yyvsp[(4) - (5)].nsubscr))
                            Incompatibilidade 
                        ("Numero de subscritos incompativel com declaracao");
                }
    break;

  case 163:
#line 595 "lab04.y"
    {
                    if ((yyvsp[(1) - (1)].tipoexpr) != INTEIRO && (yyvsp[(1) - (1)].tipoexpr) != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    (yyval.nsubscr) = 1;
                }
    break;

  case 164:
#line 600 "lab04.y"
    {printf (", ");}
    break;

  case 165:
#line 600 "lab04.y"
    {
                if ((yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE)
                    Incompatibilidade ("Tipo inadequado para subscrito");
                (yyval.nsubscr) = (yyvsp[(1) - (4)].nsubscr) + 1;
                }
    break;

  case 166:
#line 606 "lab04.y"
    {
                    printf ("%s", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDFUNC) TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.simb) = simb;
		        }
    break;

  case 167:
#line 613 "lab04.y"
    {printf ("\(");}
    break;

  case 168:
#line 614 "lab04.y"
    {
                    (yyval.tipoexpr) = (yyvsp[(2) - (5)].simb)->tvar;
                }
    break;

  case 169:
#line 618 "lab04.y"
    {printf (")"); }
    break;

  case 170:
#line 619 "lab04.y"
    {printf (")"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2591 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 621 "lab04.y"


/* Inclusao do analisador lexico  */

#include "lex.yy.c"

tabular () {
    int i;
    for (i = 1; i <= tab; i++)
        printf ("\t");
}

/*  InicTabSimb: Inicializa a tabela de simbolos   */

void InicTabSimb () {
    int i;
    for (i = 0; i < NCLASSHASH; i++)
        tabsimb[i] = NULL;
}

/*
    ProcuraSimb (cadeia): Procura cadeia na tabela de simbolos;
    Caso ela ali esteja, retorna um ponteiro para sua celula;
    Caso contrario, retorna NULL.
 */

simbolo ProcuraSimbParaInstanciar (char *cadeia, simbolo escopo) {
    simbolo s; int i;
    i = hash (cadeia);
    for (s = tabsimb[i]; (s!=NULL) && (strcmp(cadeia, s->cadeia) || strcmp(escopo->cadeia, s->escopo->cadeia)); s = s->prox);
    return s;
}

simbolo ProcuraSimbParaUsar (char *cadeia, simbolo escopo) {
    simbolo s; int i;
    i = hash (cadeia);
    for (s = tabsimb[i]; (s!=NULL) && (strcmp(cadeia, s->cadeia) || strcmp(escopo->cadeia, s->escopo->cadeia)); s = s->prox);
    if(s == NULL && strcmp(escopo->cadeia, "##global")) return ProcuraSimbParaUsar(cadeia, escopo->escopo);
    return s;
}

/*
    InsereSimb (cadeia, tid, tvar, escopo): Insere cadeia na tabela de
    simbolos, com tid como tipo de identificador e com tvar como
    tipo de variavel; Retorna um ponteiro para a celula inserida
 */

simbolo InsereSimb (char *cadeia, int tid, int tvar, simbolo escopo) {
    int i; simbolo aux, s;
    i = hash (cadeia); aux = tabsimb[i];
    s = tabsimb[i] = (simbolo) malloc (sizeof (celsimb));
    s->cadeia = (char*) malloc ((strlen(cadeia)+1) * sizeof(char));
    strcpy (s->cadeia, cadeia);
    s->tid = tid;       s->tvar = tvar;
    s->inic = FALSO;    s->ref = FALSO;
    s->prox = aux;  s->escopo = escopo;
    if (declparam) {
        s->inic = s->ref = s->param = VERDADE;
        if (s->tid == IDVAR)
            InsereListSimb (s, &pontparam);
        s->escopo->nparam++;
    }
    else {
        s->inic = s->ref = s->param = FALSO;
        if (s->tid == IDVAR)
            InsereListSimb (s, &pontvardecl);
    }
    if (tid == IDGLOB || tid == IDFUNC) {
        s->listvardecl = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listvardecl->prox = NULL;
    }
    if (tid == IDGLOB) {
        s->listfunc = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listfunc->prox = NULL;
    }
    if (tid == IDFUNC) {
        s->listparam = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listparam->prox = NULL;
        s->nparam = 0;
        InsereListSimb (s, &pontfunc);
    }
    return s;
}

/*
    hash (cadeia): funcao que determina e retorna a classe
    de cadeia na tabela de simbolos implementada por hashing
 */

int hash (char *cadeia) {
    int i, h;
    for (h = i = 0; cadeia[i]; i++) {h += cadeia[i];}
    h = h % NCLASSHASH;
    return h;
}

/* ImprimeTabSimb: Imprime todo o conteudo da tabela de simbolos  */

void ImprimeTabSimb () {
    int i; simbolo s;
    printf ("\n\n  =========================\n");
    printf     ("  = TABELA  DE  SIMBOLOS: =\n");
    printf     ("  =========================\n");
    for (i = 0; i < NCLASSHASH; i++)
        if (tabsimb[i]) {
            printf ("\nClasse %d:\n", i);
            for (s = tabsimb[i]; s!=NULL; s = s->prox){
                printf ("  (%s, %s", s->cadeia,  nometipid[s->tid]);
                if (s->tid == IDVAR){
                    printf (", %s, %d, %d",
                        nometipvar[s->tvar], s->inic, s->ref);
                    if (s->escopo != NULL)
                        printf(", %s", s->escopo->cadeia);
                    if (s->array == VERDADE) {
                        int j;
                        printf (", EH ARRAY\n    ndims = %d, dimensoes:", s->ndims);
                        for (j = 1; j <= s->ndims; j++)
                            printf (" %d", s->dims[j]);
                    }
                } else {
                    printf (", %s, %d, %d",
                        nometipvar[s->tvar], s->inic, s->ref);
                    if (s->escopo != NULL)
                        printf(", %s", s->escopo->cadeia);
                }
                printf(")\n");
            }
        }
}

/*  Mensagens de erros semanticos  */

void DeclaracaoRepetida (char *s) {
    printf ("\n\n***** Declaracao Repetida: %s *****\n\n", s);
}

void NaoDeclarado (char *s) {
    printf ("\n\n***** Identificador Nao Declarado: %s *****\n\n", s);
}

void TipoInadequado (char *s) {
    printf ("\n\n***** Identificador de Tipo Inadequado: %s *****\n\n", s);
}

void Incompatibilidade (char *s) {
    printf ("\n\n***** Incompatibilidade: %s *****\n\n", s);
}

void VerificaInicRef () {
    int i; simbolo s;

    printf ("\n");
    for (i = 0; i < NCLASSHASH; i++)
        if (tabsimb[i])
            for (s = tabsimb[i]; s!=NULL; s = s->prox)
                if (s->tid == IDVAR) {
                    if (s->inic == FALSO)
                        printf ("%s: Nao Inicializada\n", s->cadeia);
                    if (s->ref == FALSO)
                        printf ("%s: Nao Referenciada\n", s->cadeia);
                }
}

void Esperado (char *s) {
    printf ("\n\n***** Esperado: %s *****\n\n", s);
}

void NaoEsperado (char *s) {
    printf ("\n\n***** Nao Esperado: %s *****\n\n", s);
}

void InsereListSimb(simbolo s, listsimb p){
    // Action being done outside of its scope (NOTE: encapsulate it later)
}
