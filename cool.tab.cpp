/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 6 "cool.ypp"

    #ifdef __linux__
	#include "../src/ast.h"
	#else
	#include "../src/ast.h"
	#endif
    #include <iostream>
    
  
  /* Locations */
  //#define YYLTYPE int              /* the type of locations */
    
    extern int yylineno;
    
    Node *root;
    void yyerror(char *s);        /*  defined below; called for each parse error */
    extern int yylex();           /*  the entry point to the lexer  */ //TODO: check, might be error
	extern int yyparse();
    int omerrs = 0;               /* number of errors in lexing and parsing */
    
/* Line 371 of yacc.c  */
#line 89 "cool.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cool.tab.h".  */
#ifndef YY_YY_COOL_TAB_H_INCLUDED
# define YY_YY_COOL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 282,
     INTEGERLITERAL = 283,
     STRING = 284,
     TYPE = 285,
     CASE = 286,
     ESAC = 287,
     FALSE = 288,
     FI = 289,
     IF = 290,
     ELSE = 291,
     IN = 292,
     INHERITS = 293,
     ISVOID = 294,
     LET = 295,
     LOOP = 296,
     NEW = 297,
     NOT = 298,
     OF = 299,
     POOL = 300,
     THEN = 301,
     WHILE = 302,
     TRUE = 303,
     CLASS = 304,
     AT = 305,
     COLON = 306,
     COMMA = 307,
     DIVIDE = 308,
     DOT = 309,
     RARROW = 310,
     EQUALS = 311,
     LARROW = 280,
     LBRACE = 312,
     LE = 313,
     LPAREN = 314,
     LT = 315,
     MINUS = 316,
     PLUS = 317,
     RBRACE = 318,
     RPAREN = 319,
     SEMI = 320,
     TILDE = 321,
     TIMES = 322,
     let_prec = 323
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 29 "cool.ypp"

        char *Name;
        int Value;
        Node* node;
    

/* Line 387 of yacc.c  */
#line 184 "cool.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_COOL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 212 "cool.tab.cpp"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   776

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    19,    26,    34,    40,
      43,    45,    48,    59,    69,    74,    81,    84,    86,    90,
      94,    98,   102,   105,   109,   113,   117,   120,   124,   128,
     132,   135,   138,   140,   142,   146,   152,   160,   165,   169,
     178,   186,   193,   199,   203,   205,   207,   209,   211,   213,
     217,   221,   224,   228,   231,   233,   237,   243,   250,   258,
     265,   271,   280,   288,   297,   305,   314,   321,   328,   337,
     345,   354,   362,   369
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    49,    -1,    48,    49,    -1,
      25,     6,    14,     6,    34,    50,    40,    42,    -1,    25,
       6,    34,    50,    40,    42,    -1,    25,     6,    14,     6,
      34,    40,    42,    -1,    25,     6,    34,    40,    42,    -1,
       1,    42,    -1,    51,    -1,    50,    51,    -1,     3,    36,
      52,    41,    27,     6,    34,    54,    40,    42,    -1,     3,
      36,    41,    27,     6,    34,    54,    40,    42,    -1,     3,
      27,     6,    42,    -1,     3,    27,     6,    33,    54,    42,
      -1,     1,    42,    -1,    53,    -1,    52,    28,    53,    -1,
       3,    27,     6,    -1,    54,    44,    54,    -1,    36,    54,
      41,    -1,    19,    54,    -1,    54,    32,    54,    -1,    54,
      35,    54,    -1,    54,    37,    54,    -1,    43,    54,    -1,
      54,    29,    54,    -1,    54,    39,    54,    -1,    54,    38,
      54,    -1,    15,    54,    -1,    18,     6,    -1,    57,    -1,
      59,    -1,    34,    55,    40,    -1,    23,    54,    17,    54,
      21,    -1,    11,    54,    22,    54,    12,    54,    10,    -1,
       3,    36,    56,    41,    -1,     3,    36,    41,    -1,    54,
      26,     6,    30,     3,    36,    56,    41,    -1,    54,    26,
       6,    30,     3,    36,    41,    -1,    54,    30,     3,    36,
      56,    41,    -1,    54,    30,     3,    36,    41,    -1,     3,
      33,    54,    -1,    24,    -1,     9,    -1,     5,    -1,     4,
      -1,     3,    -1,    34,     1,    40,    -1,    36,     1,    41,
      -1,    54,    42,    -1,    55,    54,    42,    -1,     1,    42,
      -1,    54,    -1,    56,    28,    54,    -1,     7,    54,    20,
      58,     8,    -1,     3,    27,     6,    31,    54,    42,    -1,
      58,     3,    27,     6,    31,    54,    42,    -1,    16,     3,
      27,     6,    13,    54,    -1,    16,     3,    27,     6,    60,
      -1,    16,     3,    27,     6,    33,    54,    13,    54,    -1,
      16,     3,    27,     6,    33,    54,    60,    -1,    16,     3,
      27,     6,    33,     1,    13,    54,    -1,    16,     3,    27,
       6,    33,     1,    60,    -1,    16,     3,    27,     6,    33,
      54,    13,     1,    -1,    16,     3,    27,     6,    13,     1,
      -1,    28,     3,    27,     6,    13,    54,    -1,    28,     3,
      27,     6,    33,    54,    13,    54,    -1,    28,     3,    27,
       6,    33,    54,    60,    -1,    28,     3,    27,     6,    33,
       1,    13,    54,    -1,    28,     3,    27,     6,    33,     1,
      60,    -1,    28,     3,    27,     6,    13,     1,    -1,    28,
       3,    27,     6,    33,    54,    13,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   121,   123,   129,   135,   140,   146,   151,
     158,   160,   165,   171,   177,   183,   189,   194,   196,   201,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   276,   278,   280,   284,   286,   292,   297,   299,   304,
     310,   316,   322,   328,   330,   332,   334,   340,   351,   362,
     373,   375,   377,   379
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGERLITERAL", "STRING",
  "TYPE", "CASE", "ESAC", "FALSE", "FI", "IF", "ELSE", "IN", "INHERITS",
  "ISVOID", "LET", "LOOP", "NEW", "NOT", "OF", "POOL", "THEN", "WHILE",
  "TRUE", "CLASS", "AT", "COLON", "COMMA", "DIVIDE", "DOT", "RARROW",
  "EQUALS", "LARROW", "LBRACE", "LE", "LPAREN", "LT", "MINUS", "PLUS",
  "RBRACE", "RPAREN", "SEMI", "TILDE", "TIMES", "let_prec", "$accept",
  "program", "class_list", "class", "features", "feature", "formals",
  "formal", "expression", "block_expressions", "expressions", "case_",
  "cases", "let_statement", "let_init", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   280,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      50,    50,    51,    51,    51,    51,    51,    52,    52,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    56,    56,    57,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    60,    60,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     8,     6,     7,     5,     2,
       1,     2,    10,     9,     4,     6,     2,     1,     3,     3,
       3,     3,     2,     3,     3,     3,     2,     3,     3,     3,
       2,     2,     1,     1,     3,     5,     7,     4,     3,     8,
       7,     6,     5,     3,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     2,     1,     3,     5,     6,     7,     6,
       5,     8,     7,     8,     7,     8,     6,     6,     8,     7,
       8,     7,     6,     8
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     9,     0,     1,     4,
       0,     0,     0,     0,     0,     0,     0,    10,     0,    16,
       0,     0,     8,     0,    11,     0,     0,     0,     0,     0,
       0,    17,     6,     7,     0,     0,    14,     0,     0,     0,
       0,     5,    48,    47,    46,     0,    45,     0,     0,     0,
       0,     0,     0,    44,     0,     0,     0,     0,    32,    33,
      19,     0,    18,     0,     0,     0,     0,     0,    30,     0,
      31,    22,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,    43,    38,    54,     0,     0,     0,     0,     0,    49,
      53,    51,    34,     0,    50,    21,     0,    27,     0,    23,
      24,    25,    29,    28,    20,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,    55,
       0,     0,    56,     0,     0,     0,     0,    60,    35,     0,
      42,     0,    13,     0,     0,     0,     0,    66,    59,     0,
       0,     0,     0,    41,    12,     0,     0,    36,     0,     0,
      64,     0,    62,    40,     0,     0,     0,     0,    63,    65,
      61,    39,    57,     0,     0,     0,    58,    72,    67,     0,
       0,     0,    71,     0,    69,    70,    73,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    17,    30,    31,    93,    75,
      94,    58,   120,    59,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -137
static const yytype_int16 yypact[] =
{
      10,   -17,    20,    86,    33,  -137,  -137,     4,  -137,  -137,
     103,     1,    58,    71,    79,    72,     2,  -137,     6,  -137,
     110,    -2,  -137,    75,  -137,    88,    27,   -11,   101,   105,
      50,  -137,  -137,  -137,    93,   438,  -137,   132,   137,   141,
     120,  -137,    -9,  -137,  -137,   438,  -137,   438,   438,   142,
     143,   438,   438,  -137,    61,   118,   438,   583,  -137,  -137,
    -137,   116,  -137,   145,   438,   307,   529,   567,    81,   126,
    -137,   716,   513,    70,   600,   342,   114,   617,    81,   151,
     438,   160,   438,   438,   438,   438,   438,  -137,   438,   438,
     131,   716,  -137,   716,    55,   164,   438,   162,   438,  -137,
    -137,  -137,  -137,   633,  -137,  -137,   139,    81,   136,   732,
     732,   732,    45,    45,    81,   650,   438,   438,  -137,   148,
      52,   457,    24,   548,  -137,   173,   368,   135,   666,   716,
     174,   154,  -137,   438,   155,   180,   181,  -137,  -137,   157,
    -137,    59,  -137,   152,   156,   189,   441,  -137,    64,   175,
      -5,   477,   403,  -137,  -137,   438,   170,  -137,   197,   438,
    -137,   207,  -137,  -137,    77,   682,   438,    23,    64,  -137,
      64,  -137,  -137,   699,   233,   259,  -137,  -137,    64,    60,
     497,   438,  -137,   285,  -137,    64,  -137,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,   202,   191,    43,  -137,   168,   -35,  -137,
    -120,  -137,  -137,  -137,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      57,    28,    13,    13,    14,    14,   141,    13,   159,    14,
      66,     1,    67,    68,   160,   162,    71,    72,    10,    74,
      77,    78,    35,   135,    64,     6,     7,    65,    13,    91,
      14,    36,   164,    -2,     1,     2,   174,   134,    11,    29,
     103,    15,    23,   182,   184,   107,    25,   109,   110,   111,
     112,   113,   135,   114,   115,   131,   175,   136,     2,    24,
     132,   121,    73,   123,    42,    43,    44,    34,    45,    24,
      46,    79,    47,   181,    80,    81,    48,    49,    39,    50,
      51,   128,   129,   117,    52,    53,     8,   117,   135,    88,
      79,    40,    18,    80,    81,    54,   118,    55,   146,   148,
     153,   151,    85,    86,    56,   117,    20,    79,    88,    12,
      99,    81,   100,    19,    22,    21,    27,    32,   171,    76,
     165,    42,    43,    44,   168,    45,   170,    46,    37,    47,
      33,   173,    38,    48,    49,    41,    50,    51,    60,   178,
     180,    52,    53,    61,    28,    69,   185,    63,   187,    70,
      89,    90,    54,    97,    55,   104,   147,   106,    42,    43,
      44,    56,    45,   108,    46,   116,    47,   119,   122,   125,
      48,    49,   126,    50,    51,   130,   139,   142,    52,    53,
     144,   145,   150,   149,    42,    43,    44,   155,    45,    54,
      46,    55,    47,   152,   154,   156,    48,    49,    56,    50,
      51,   166,   158,   167,    52,    53,     9,    62,   169,    26,
      42,    43,    44,     0,    45,    54,    46,    55,    47,     0,
       0,     0,    48,    49,    56,    50,    51,     0,     0,     0,
      52,    53,     0,     0,   177,     0,    42,    43,    44,     0,
      45,    54,    46,    55,    47,     0,     0,     0,    48,    49,
      56,    50,    51,     0,     0,     0,    52,    53,     0,     0,
     179,     0,    42,    43,    44,     0,    45,    54,    46,    55,
      47,     0,     0,     0,    48,    49,    56,    50,    51,     0,
       0,     0,    52,    53,     0,     0,   186,     0,    42,    43,
      44,     0,    45,    54,    46,    55,    47,     0,     0,     0,
      48,    49,    56,    50,    51,     0,     0,     0,    52,    53,
      42,    43,    44,     0,    45,     0,    46,     0,    47,    54,
       0,    55,    48,    49,     0,    50,    51,     0,    56,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,    55,     0,    42,    43,    44,    92,    45,
      56,    46,     0,    47,     0,     0,     0,    48,    49,     0,
      50,    51,     0,     0,     0,    52,    53,     0,     0,     0,
       0,    42,    43,    44,     0,    45,    54,    46,    55,    47,
       0,     0,   102,    48,    49,    56,    50,    51,     0,     0,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,    55,     0,    42,    43,    44,   140,
      45,    56,    46,     0,    47,     0,     0,     0,    48,    49,
       0,    50,    51,     0,     0,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    55,
       0,    42,    43,    44,   163,    45,    56,    46,     0,    47,
       0,   157,     0,    48,    49,     0,    50,    51,     0,     0,
       0,    52,    53,     0,     0,     0,     0,    79,     0,   133,
      80,    81,    54,    82,    55,     0,    83,     0,    84,    85,
      86,    56,     0,    79,     0,    88,    80,    81,     0,    82,
     161,     0,    83,     0,    84,    85,    86,     0,     0,     0,
       0,    88,     0,    79,     0,   135,    80,    81,     0,    82,
     183,     0,    83,     0,    84,    85,    86,     0,     0,     0,
       0,    88,     0,    79,     0,   135,    80,    81,     0,    82,
      98,     0,    83,     0,    84,    85,    86,     0,     0,    79,
       0,    88,    80,    81,     0,    82,     0,     0,    83,    95,
      84,    85,    86,     0,     0,    79,     0,    88,    80,    81,
       0,    82,     0,     0,    83,     0,    84,    85,    86,   138,
       0,     0,     0,    88,    79,     0,     0,    80,    81,     0,
      82,     0,     0,    83,     0,    84,    85,    86,     0,    96,
       0,     0,    88,    79,     0,     0,    80,    81,     0,    82,
       0,     0,    83,     0,    84,    85,    86,     0,     0,    79,
       0,    88,    80,    81,     0,    82,     0,     0,    83,     0,
      84,    85,    86,     0,     0,    87,    79,    88,     0,    80,
      81,     0,    82,     0,     0,    83,     0,    84,    85,    86,
       0,     0,   101,    79,    88,     0,    80,    81,     0,    82,
       0,     0,    83,     0,    84,    85,    86,     0,   105,    79,
       0,    88,    80,    81,     0,    82,     0,     0,    83,     0,
      84,    85,    86,     0,     0,   124,    79,    88,     0,    80,
      81,     0,    82,     0,     0,    83,     0,    84,    85,    86,
     127,     0,    79,     0,    88,    80,    81,     0,    82,     0,
       0,    83,     0,    84,    85,    86,   143,     0,    79,     0,
      88,    80,    81,     0,    82,     0,     0,    83,     0,    84,
      85,    86,     0,     0,   172,    79,    88,     0,    80,    81,
       0,    82,     0,     0,    83,     0,    84,    85,    86,     0,
       0,   176,    79,    88,     0,    80,    81,     0,    82,     0,
       0,    83,     0,    84,    85,    86,     0,     0,    79,     0,
      88,    80,    81,     0,    -3,     0,     0,    -3,     0,    -3,
      85,    86,     0,     0,     0,     0,    88
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-3)))

static const yytype_int16 yycheck[] =
{
      35,     3,     1,     1,     3,     3,   126,     1,    13,     3,
      45,     1,    47,    48,   150,   151,    51,    52,    14,    54,
      55,    56,    33,    28,    33,    42,     6,    36,     1,    64,
       3,    42,   152,     0,     1,    25,    13,    13,    34,    41,
      75,    40,    40,   179,   180,    80,    40,    82,    83,    84,
      85,    86,    28,    88,    89,     3,    33,    33,    25,    16,
       8,    96,     1,    98,     3,     4,     5,    40,     7,    26,
       9,    26,    11,    13,    29,    30,    15,    16,    28,    18,
      19,   116,   117,    28,    23,    24,     0,    28,    28,    44,
      26,    41,    34,    29,    30,    34,    41,    36,   133,   134,
      41,   136,    38,    39,    43,    28,    27,    26,    44,     6,
      40,    30,    42,    42,    42,    36,     6,    42,    41,     1,
     155,     3,     4,     5,   159,     7,   161,     9,    27,    11,
      42,   166,    27,    15,    16,    42,    18,    19,     6,   174,
     175,    23,    24,     6,     3,     3,   181,    27,   183,     6,
      34,     6,    34,    27,    36,    41,     1,     6,     3,     4,
       5,    43,     7,     3,     9,    34,    11,     3,     6,    30,
      15,    16,    36,    18,    19,    27,     3,    42,    23,    24,
       6,    27,     1,     3,     3,     4,     5,    31,     7,    34,
       9,    36,    11,    36,    42,     6,    15,    16,    43,    18,
      19,    31,    27,     6,    23,    24,     4,    39,     1,    18,
       3,     4,     5,    -1,     7,    34,     9,    36,    11,    -1,
      -1,    -1,    15,    16,    43,    18,    19,    -1,    -1,    -1,
      23,    24,    -1,    -1,     1,    -1,     3,     4,     5,    -1,
       7,    34,     9,    36,    11,    -1,    -1,    -1,    15,    16,
      43,    18,    19,    -1,    -1,    -1,    23,    24,    -1,    -1,
       1,    -1,     3,     4,     5,    -1,     7,    34,     9,    36,
      11,    -1,    -1,    -1,    15,    16,    43,    18,    19,    -1,
      -1,    -1,    23,    24,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    34,     9,    36,    11,    -1,    -1,    -1,
      15,    16,    43,    18,    19,    -1,    -1,    -1,    23,    24,
       3,     4,     5,    -1,     7,    -1,     9,    -1,    11,    34,
      -1,    36,    15,    16,    -1,    18,    19,    -1,    43,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,     3,     4,     5,    41,     7,
      43,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    34,     9,    36,    11,
      -1,    -1,    40,    15,    16,    43,    18,    19,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,     3,     4,     5,    41,
       7,    43,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,     3,     4,     5,    41,     7,    43,     9,    -1,    11,
      -1,    10,    -1,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    26,    -1,    12,
      29,    30,    34,    32,    36,    -1,    35,    -1,    37,    38,
      39,    43,    -1,    26,    -1,    44,    29,    30,    -1,    32,
      13,    -1,    35,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    26,    -1,    28,    29,    30,    -1,    32,
      13,    -1,    35,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    26,    -1,    28,    29,    30,    -1,    32,
      17,    -1,    35,    -1,    37,    38,    39,    -1,    -1,    26,
      -1,    44,    29,    30,    -1,    32,    -1,    -1,    35,    20,
      37,    38,    39,    -1,    -1,    26,    -1,    44,    29,    30,
      -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,    21,
      -1,    -1,    -1,    44,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    -1,    35,    -1,    37,    38,    39,    -1,    22,
      -1,    -1,    44,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    -1,    35,    -1,    37,    38,    39,    -1,    -1,    26,
      -1,    44,    29,    30,    -1,    32,    -1,    -1,    35,    -1,
      37,    38,    39,    -1,    -1,    42,    26,    44,    -1,    29,
      30,    -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,
      -1,    -1,    42,    26,    44,    -1,    29,    30,    -1,    32,
      -1,    -1,    35,    -1,    37,    38,    39,    -1,    41,    26,
      -1,    44,    29,    30,    -1,    32,    -1,    -1,    35,    -1,
      37,    38,    39,    -1,    -1,    42,    26,    44,    -1,    29,
      30,    -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,
      40,    -1,    26,    -1,    44,    29,    30,    -1,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    40,    -1,    26,    -1,
      44,    29,    30,    -1,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    -1,    -1,    42,    26,    44,    -1,    29,    30,
      -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,    -1,
      -1,    42,    26,    44,    -1,    29,    30,    -1,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    26,    -1,
      44,    29,    30,    -1,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    25,    47,    48,    49,    42,     6,     0,    49,
      14,    34,     6,     1,     3,    40,    50,    51,    34,    42,
      27,    36,    42,    40,    51,    40,    50,     6,     3,    41,
      52,    53,    42,    42,    40,    33,    42,    27,    27,    28,
      41,    42,     3,     4,     5,     7,     9,    11,    15,    16,
      18,    19,    23,    24,    34,    36,    43,    54,    57,    59,
       6,     6,    53,    27,    33,    36,    54,    54,    54,     3,
       6,    54,    54,     1,    54,    55,     1,    54,    54,    26,
      29,    30,    32,    35,    37,    38,    39,    42,    44,    34,
       6,    54,    41,    54,    56,    20,    22,    27,    17,    40,
      42,    42,    40,    54,    41,    41,     6,    54,     3,    54,
      54,    54,    54,    54,    54,    54,    34,    28,    41,     3,
      58,    54,     6,    54,    42,    30,    36,    40,    54,    54,
      27,     3,     8,    12,    13,    28,    33,    60,    21,     3,
      41,    56,    42,    40,     6,    27,    54,     1,    54,     3,
       1,    54,    36,    41,    42,    31,     6,    10,    27,    13,
      60,    13,    60,    41,    56,    54,    31,     6,    54,     1,
      54,    41,    42,    54,    13,    33,    42,     1,    54,     1,
      54,    13,    60,    13,    60,    54,     1,    54
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 117 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (1)].node); root = (yyval.node); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 122 "cool.ypp"
    { (yyval.node) = new Node(AST_PROGRAM, 1, (yyvsp[(1) - (1)].node));  }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 124 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (2)].node); (yyvsp[(1) - (2)].node)->addChild((yyvsp[(2) - (2)].node)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 130 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_CLASS, 3, new Node(AST_TYPE, (yyvsp[(2) - (8)].Name)), new Node(AST_TYPE, (yyvsp[(4) - (8)].Name)), (yyvsp[(6) - (8)].node)); 
            free((yyvsp[(2) - (8)].Name)); 
            free((yyvsp[(4) - (8)].Name));
            }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 136 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_CLASS, 3, new Node(AST_TYPE, (yyvsp[(2) - (6)].Name)), new Node(AST_TYPE, "Object"), (yyvsp[(4) - (6)].node));
            free((yyvsp[(2) - (6)].Name));
            }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 141 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_CLASS, 3, new Node(AST_TYPE, (yyvsp[(2) - (7)].Name)), new Node(AST_TYPE, (yyvsp[(4) - (7)].Name)), new Node(AST_NULL)); //TODO: nil node? figure it out future me
            free((yyvsp[(2) - (7)].Name));
            free((yyvsp[(4) - (7)].Name));
            }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 147 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_CLASS, 3, new Node(AST_TYPE, (yyvsp[(2) - (5)].Name)), new Node(AST_TYPE, "Object"), new Node(AST_NULL)); //TODO: nil node? figure it out future me
            free((yyvsp[(2) - (5)].Name));
            }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 152 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 159 "cool.ypp"
    { (yyval.node) = new Node(AST_FEATURESET, 1, (yyvsp[(1) - (1)].node)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 161 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (2)].node); (yyvsp[(1) - (2)].node)->addChild((yyvsp[(2) - (2)].node)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 166 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_FEATURE_METHOD, 4, new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (10)].Name)), (yyvsp[(3) - (10)].node), new Node(AST_TYPE, (yyvsp[(6) - (10)].Name)), (yyvsp[(8) - (10)].node));
            free((yyvsp[(1) - (10)].Name));
            free((yyvsp[(6) - (10)].Name));
            }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 172 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_FEATURE_METHOD, 4, new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (9)].Name)), new Node(AST_NULL), new Node(AST_TYPE, (yyvsp[(5) - (9)].Name)), (yyvsp[(7) - (9)].node));
            free((yyvsp[(1) - (9)].Name));
            free((yyvsp[(5) - (9)].Name));
            }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 178 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_FEATURE_ATTRIBUTE, 3, new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (4)].Name)), new Node(AST_TYPE, (yyvsp[(3) - (4)].Name)), new Node(AST_NULL)); 
            free((yyvsp[(1) - (4)].Name)); 
            free((yyvsp[(3) - (4)].Name));
            }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 184 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_FEATURE_ATTRIBUTE, 3, new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (6)].Name)), new Node(AST_TYPE, (yyvsp[(3) - (6)].Name)), (yyvsp[(5) - (6)].node)); 
            free((yyvsp[(1) - (6)].Name)); 
            free((yyvsp[(3) - (6)].Name)); 
            }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 190 "cool.ypp"
    {  (yyval.node) = new Node(AST_NULL); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 195 "cool.ypp"
    { (yyval.node) = new Node(AST_FORMALLIST, 1, (yyvsp[(1) - (1)].node)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 197 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (3)].node); (yyvsp[(1) - (3)].node)->addChild((yyvsp[(3) - (3)].node)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 202 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_FORMAL, 2, new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (3)].Name)), new Node(AST_TYPE, (yyvsp[(3) - (3)].Name))); 
            free((yyvsp[(1) - (3)].Name)); 
            free((yyvsp[(3) - (3)].Name)); 
            }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 212 "cool.ypp"
    { (yyval.node) = new Node(AST_TIMES,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 214 "cool.ypp"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 216 "cool.ypp"
    { (yyval.node) = new Node(AST_NOT,1,(yyvsp[(2) - (2)].node)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 218 "cool.ypp"
    { (yyval.node) = new Node(AST_EQUALS,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 220 "cool.ypp"
    { (yyval.node) = new Node(AST_LE,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 222 "cool.ypp"
    { (yyval.node) = new Node(AST_LT,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 224 "cool.ypp"
    { (yyval.node) = new Node(AST_TILDE,1,(yyvsp[(2) - (2)].node)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 226 "cool.ypp"
    { (yyval.node) = new Node(AST_DIVIDE,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 228 "cool.ypp"
    { (yyval.node) = new Node(AST_PLUS,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 230 "cool.ypp"
    { (yyval.node) = new Node(AST_MINUS,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 232 "cool.ypp"
    { (yyval.node) = new Node(AST_ISVOID,1,(yyvsp[(2) - (2)].node)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 234 "cool.ypp"
    { (yyval.node) = new Node(AST_NEW,1,new Node(AST_TYPE, (yyvsp[(2) - (2)].Name))); free((yyvsp[(2) - (2)].Name)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 236 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 238 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 240 "cool.ypp"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 242 "cool.ypp"
    { (yyval.node) = new Node(AST_WHILE,3,(yyvsp[(2) - (5)].node), new Node(AST_WHILECOMPARE),(yyvsp[(4) - (5)].node)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 244 "cool.ypp"
    { (yyval.node) = new Node(AST_IF,6,(yyvsp[(2) - (7)].node), new Node(AST_IFTEST),(yyvsp[(4) - (7)].node),new Node(AST_IFTHEN),(yyvsp[(6) - (7)].node),new Node(AST_IFELSE)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 246 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,new Node(AST_NULL),new Node(AST_NULL),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (4)].Name)),(yyvsp[(3) - (4)].node)); free((yyvsp[(1) - (4)].Name)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 248 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,new Node(AST_NULL),new Node(AST_NULL),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(1) - (3)].Name)), new Node(AST_NULL)); free((yyvsp[(1) - (3)].Name)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 250 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,(yyvsp[(1) - (8)].node),new Node(AST_TYPE,(yyvsp[(3) - (8)].Name)),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(5) - (8)].Name)),(yyvsp[(7) - (8)].node)); free((yyvsp[(3) - (8)].Name)); free((yyvsp[(5) - (8)].Name)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 252 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,(yyvsp[(1) - (7)].node),new Node(AST_TYPE,(yyvsp[(3) - (7)].Name)),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(5) - (7)].Name)), new Node(AST_NULL)); free((yyvsp[(3) - (7)].Name)); free((yyvsp[(5) - (7)].Name)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 254 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,(yyvsp[(1) - (6)].node),new Node(AST_NULL),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(3) - (6)].Name)),(yyvsp[(5) - (6)].node)); free((yyvsp[(3) - (6)].Name)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 256 "cool.ypp"
    { (yyval.node) = new Node(AST_DISPATCH,4,(yyvsp[(1) - (5)].node),new Node(AST_NULL),new Node(AST_METHOD_IDENTIFIER, (yyvsp[(3) - (5)].Name)), new Node(AST_NULL)); free((yyvsp[(3) - (5)].Name)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 258 "cool.ypp"
    { (yyval.node) = new Node(AST_LARROW,2,new Node(AST_IDENTIFIER, (yyvsp[(1) - (3)].Name)),(yyvsp[(3) - (3)].node)); free((yyvsp[(1) - (3)].Name)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 260 "cool.ypp"
    { (yyval.node) = new Node(AST_TRUE); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 262 "cool.ypp"
    { (yyval.node) = new Node(AST_FALSE); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 264 "cool.ypp"
    { (yyval.node) = new Node(AST_STRING, (yyvsp[(1) - (1)].Name)); free((yyvsp[(1) - (1)].Name)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 266 "cool.ypp"
    { (yyval.node) = new Node(AST_INTEGERLITERAL, to_string((yyvsp[(1) - (1)].Value))); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 268 "cool.ypp"
    { (yyval.node) = new Node(AST_IDENTIFIER, (yyvsp[(1) - (1)].Name)); free((yyvsp[(1) - (1)].Name)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 270 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); yyerrok; }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 272 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); yyerrok; }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 277 "cool.ypp"
    { (yyval.node) = new Node(AST_EXPRSEMILIST,1,(yyvsp[(1) - (2)].node)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 279 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (3)].node); (yyvsp[(1) - (3)].node)->addChild((yyvsp[(2) - (3)].node)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 281 "cool.ypp"
    {  (yyval.node) = new Node(AST_NULL); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 285 "cool.ypp"
    { (yyval.node) = new Node(AST_EXPRLIST,1,(yyvsp[(1) - (1)].node)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 287 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (3)].node); (yyvsp[(1) - (3)].node)->setFirstChild((yyvsp[(3) - (3)].node)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 293 "cool.ypp"
    { (yyval.node) = new Node(AST_CASESTATEMENT,2,(yyvsp[(2) - (5)].node),(yyvsp[(4) - (5)].node)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 298 "cool.ypp"
    { (yyval.node) = new Node(AST_CASE,3,new Node(AST_CASE_IDENTIFIER, (yyvsp[(1) - (6)].Name)),new Node(AST_TYPE, (yyvsp[(3) - (6)].Name)),(yyvsp[(5) - (6)].node)); free((yyvsp[(1) - (6)].Name)); free((yyvsp[(3) - (6)].Name)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 300 "cool.ypp"
    { (yyval.node) = (yyvsp[(1) - (7)].node); (yyvsp[(1) - (7)].node)->addChild(new Node(AST_CASE,3,new Node(AST_CASE_IDENTIFIER, (yyvsp[(2) - (7)].Name)),new Node(AST_TYPE, (yyvsp[(4) - (7)].Name)),(yyvsp[(6) - (7)].node))); free((yyvsp[(2) - (7)].Name)); free((yyvsp[(4) - (7)].Name)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 305 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,2, new Node(AST_IDTYPEEXPR,3,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (6)].Name)),new Node(AST_TYPE, (yyvsp[(4) - (6)].Name)),new Node(AST_NULL)),(yyvsp[(6) - (6)].node)); 
            free((yyvsp[(2) - (6)].Name)); 
            free((yyvsp[(4) - (6)].Name)); 
            }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 311 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,2, new Node(AST_IDTYPEEXPR,3,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (5)].Name)),new Node(AST_TYPE, (yyvsp[(4) - (5)].Name)),new Node(AST_NULL)) ,(yyvsp[(5) - (5)].node)); 
            free((yyvsp[(2) - (5)].Name)); 
            free((yyvsp[(4) - (5)].Name)); 
            }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 317 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,2, new Node(AST_IDTYPEEXPR,3,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (8)].Name)),new Node(AST_TYPE, (yyvsp[(4) - (8)].Name)),(yyvsp[(6) - (8)].node)) ,(yyvsp[(8) - (8)].node)); 
            free((yyvsp[(2) - (8)].Name)); 
            free((yyvsp[(4) - (8)].Name)); 
            }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 323 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,2, new Node(AST_IDTYPEEXPR,3,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (7)].Name)),new Node(AST_TYPE, (yyvsp[(4) - (7)].Name)),(yyvsp[(6) - (7)].node)) ,(yyvsp[(7) - (7)].node)); 
            free((yyvsp[(2) - (7)].Name)); 
            free((yyvsp[(4) - (7)].Name)); 
            }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 329 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 331 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 333 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 335 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 341 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,1
                ,new Node(AST_IDTYPEEXPR,3
                    ,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (6)].Name))
                    ,new Node(AST_TYPE, (yyvsp[(4) - (6)].Name))
                    ,new Node(AST_NULL))
                ,(yyvsp[(6) - (6)].node));
            free((yyvsp[(2) - (6)].Name));
            free((yyvsp[(4) - (6)].Name));
            }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 352 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,1
                ,new Node(AST_IDTYPEEXPR,3
                    ,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (8)].Name))
                    ,new Node(AST_TYPE, (yyvsp[(4) - (8)].Name))
                    ,(yyvsp[(6) - (8)].node))
                ,(yyvsp[(8) - (8)].node));
            free((yyvsp[(2) - (8)].Name));
            free((yyvsp[(4) - (8)].Name));
            }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 363 "cool.ypp"
    { 
            (yyval.node) = new Node(AST_LET,1
                ,new Node(AST_IDTYPEEXPR,3
                    ,new Node(AST_LET_IDENTIFIER, (yyvsp[(2) - (7)].Name))
                    ,new Node(AST_TYPE, (yyvsp[(4) - (7)].Name))
                    ,(yyvsp[(6) - (7)].node))
                ,(yyvsp[(7) - (7)].node));
            free((yyvsp[(2) - (7)].Name));
            free((yyvsp[(4) - (7)].Name));
            }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 374 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 376 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 378 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 380 "cool.ypp"
    { (yyval.node) = new Node(AST_NULL); }
    break;


/* Line 1792 of yacc.c  */
#line 2189 "cool.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 383 "cool.ypp"

    
    /* This function is called automatically when Bison detects a parse error. */
    void yyerror(char *s)
    {
      extern char *inputFileName;
      string ret = "\"";
      ret += inputFileName;
      ret += "\", line ";
      ret += to_string(yylineno);
      ret += ": ";
      ret += s;
      ret += " at or near ";
      ret += to_string(yychar);
      
      cerr << ret << endl;
      //print_cool_token(yychar);
      omerrs++;
      
      if(omerrs>50) {printf("More than 50 errors\n"); exit(1);}
    }
    
    
