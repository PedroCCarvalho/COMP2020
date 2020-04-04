/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "jucompiler.y" /* yacc.c:339  */

    #include <stdio.h>
    #include "y.tab.h"
    #include <string.h>
    int yylex(void);
    void yyerror (const char *s);
    extern int coluna, linha;
    extern char* yytext;

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    ASSIGN = 259,
    STAR = 260,
    DIV = 261,
    COMMA = 262,
    EQ = 263,
    GT = 264,
    GE = 265,
    LBRACE = 266,
    LE = 267,
    LPAR = 268,
    LSQ = 269,
    LT = 270,
    MINUS = 271,
    MOD = 272,
    NE = 273,
    NOT = 274,
    OR = 275,
    PLUS = 276,
    RBRACE = 277,
    RPAR = 278,
    RSQ = 279,
    SEMICOLON = 280,
    ARROW = 281,
    LSHIFT = 282,
    RSHIFT = 283,
    XOR = 284,
    BOOL = 285,
    CLASS = 286,
    DOTLENGHT = 287,
    DOUBLE = 288,
    ELSE = 289,
    IF = 290,
    INT = 291,
    PRINT = 292,
    PARSEINT = 293,
    PUBLIC = 294,
    STATIC = 295,
    STRING = 296,
    VOID = 297,
    WHILE = 298,
    RETURN = 299,
    ID = 300,
    STRLIT = 301,
    REALLIT = 302,
    RESERVED = 303,
    INTLIT = 304,
    BOOLLIT = 305,
    UNARY = 306
  };
#endif
/* Tokens.  */
#define AND 258
#define ASSIGN 259
#define STAR 260
#define DIV 261
#define COMMA 262
#define EQ 263
#define GT 264
#define GE 265
#define LBRACE 266
#define LE 267
#define LPAR 268
#define LSQ 269
#define LT 270
#define MINUS 271
#define MOD 272
#define NE 273
#define NOT 274
#define OR 275
#define PLUS 276
#define RBRACE 277
#define RPAR 278
#define RSQ 279
#define SEMICOLON 280
#define ARROW 281
#define LSHIFT 282
#define RSHIFT 283
#define XOR 284
#define BOOL 285
#define CLASS 286
#define DOTLENGHT 287
#define DOUBLE 288
#define ELSE 289
#define IF 290
#define INT 291
#define PRINT 292
#define PARSEINT 293
#define PUBLIC 294
#define STATIC 295
#define STRING 296
#define VOID 297
#define WHILE 298
#define RETURN 299
#define ID 300
#define STRLIT 301
#define REALLIT 302
#define RESERVED 303
#define INTLIT 304
#define BOOLLIT 305
#define UNARY 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "jucompiler.y" /* yacc.c:355  */

 char* test;


#line 223 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    42,    43,    44,    45,    48,    51,    52,
      55,    56,    59,    60,    61,    64,    65,    66,    67,    70,
      71,    74,    75,    78,    81,    82,    83,    86,    89,    90,
      91,    92,    93,    94,    95,    96,    99,   100,   101,   104,
     105,   108,   109,   110,   111,   114,   115,   118,   119,   122,
     123,   127,   128,   131,   134,   135,   138,   139,   140,   141,
     142,   145,   146,   147,   148,   149,   152,   153,   154,   155,
     156,   157,   160,   161,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   181,   182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ASSIGN", "STAR", "DIV", "COMMA",
  "EQ", "GT", "GE", "LBRACE", "LE", "LPAR", "LSQ", "LT", "MINUS", "MOD",
  "NE", "NOT", "OR", "PLUS", "RBRACE", "RPAR", "RSQ", "SEMICOLON", "ARROW",
  "LSHIFT", "RSHIFT", "XOR", "BOOL", "CLASS", "DOTLENGHT", "DOUBLE",
  "ELSE", "IF", "INT", "PRINT", "PARSEINT", "PUBLIC", "STATIC", "STRING",
  "VOID", "WHILE", "RETURN", "ID", "STRLIT", "REALLIT", "RESERVED",
  "INTLIT", "BOOLLIT", "UNARY", "$accept", "Program", "ProgramAux",
  "MethodDecl", "FieldDecl", "AdditionalDecl", "Type", "MethodHeader",
  "FormalParams", "FormalParamsAux", "MethodBody", "MethodBodyAux",
  "VarDecl", "Statement", "PrintAux", "StatementAux", "StatementAux1",
  "StatementAuxRec", "AdditionalExpr", "AdditionalExpr1",
  "MethodInvocation", "Assignment", "ParseArgs", "ExprMath", "ExprLogic",
  "ExprCompare", "Expr", "ExprAux", "ExprAux2", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -43

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-43)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,   -34,    13,    11,   -43,    29,    19,    29,     5,    30,
      29,    29,   -43,   -43,    71,   -43,   -43,   -43,   -43,   -43,
     -43,    10,    12,    49,    63,    92,    28,   -43,    26,    53,
      96,    75,    86,   132,   104,   109,   114,   122,   180,     1,
      94,   123,    28,    28,   125,   -43,   -43,   -43,   -43,   141,
     111,   136,   154,   -43,   140,   -43,   -43,   132,   144,   180,
     167,     3,   180,   115,   190,   190,   190,     2,   -43,   -43,
     -43,   143,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   292,
     -43,   180,   102,   154,   -43,   -43,   -43,   -43,   149,   164,
     -43,   -43,   -43,   -43,   -43,   151,     8,   -43,   155,   292,
     156,   173,   158,   166,   238,   -43,   -43,   -43,   -43,   -43,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   -43,   171,   172,   191,
     175,   152,    44,   -43,   147,   177,   -43,   190,   147,   -43,
     -43,   344,   -43,   -43,   377,   377,   377,   377,   377,    64,
     -43,   377,   319,    64,   215,   215,   369,   -43,   -43,   180,
     -43,   -43,   -43,   159,   174,   -43,   265,   -43,   191,   164,
     147,   184,   -43,   -43,   -43,   -43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     9,     5,     0,     2,     3,     4,    12,    14,
      13,     0,     0,     0,     0,    11,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    17,     0,
       0,     0,    11,    18,     0,     8,    35,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    83,    85,    84,
      86,     0,    88,    72,    89,    75,    77,    76,    39,    73,
      74,     0,     0,    11,    23,    25,    24,    33,     0,    22,
      16,    10,    15,    45,    28,     0,    83,    36,     0,    37,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,    50,
       0,     0,     0,    19,     0,     0,    55,     0,     0,    87,
      78,    61,    58,    59,    66,    68,    67,    69,    70,    57,
      60,    71,    62,    56,    64,    65,    63,    52,    51,     0,
      47,    27,    20,     0,    29,    34,     0,    31,    50,    22,
       0,     0,    49,    21,    30,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,    68,   -43,   -43,   -42,    -2,   -43,   185,    41,
     -43,    99,   -43,   -32,   -43,   -43,   -43,   162,   -43,    54,
     -26,   -35,   -24,   -43,   -43,   -43,   -39,   -28,   -43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    31,    40,    23,    51,   133,
      27,    41,    42,    43,    98,    71,    44,    58,   128,   160,
      72,    46,    74,    75,    76,    77,    78,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    57,    47,    73,   100,    81,    81,    45,     1,    47,
      91,     3,    22,     4,    82,    82,    45,    45,    47,    47,
      95,    82,     5,   102,    73,    57,    50,    73,    50,    32,
       6,    45,    99,    47,   108,   104,   105,   106,   107,    33,
     108,   130,   126,   129,    12,    14,    73,    73,   101,    48,
     -26,    -6,    15,   -44,     7,    24,    18,    25,    18,    19,
      26,    19,    20,    34,    20,    35,    36,    49,     8,   111,
     112,    37,    38,    39,    18,    13,    28,    19,    16,    17,
      20,   119,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    52,    29,
      55,    18,   164,   127,    19,    30,   167,    20,    45,   166,
      47,    56,    45,    21,    47,    63,   103,    59,    64,    53,
     168,    65,    60,    66,    73,   -48,    18,    61,    63,    19,
     163,    64,    20,    32,    65,    62,    66,    49,   174,    83,
      36,    85,    86,    33,    45,    84,    47,    67,    32,    68,
      87,    69,    70,    36,   -46,    88,    89,   -44,    33,    90,
      96,    29,    68,    92,    69,    70,    94,    34,   109,    35,
      36,   132,   -44,   131,   134,    37,    38,    39,   135,   136,
      63,   138,    34,    64,    35,    36,    65,   137,    66,   139,
      37,    38,    39,    63,   157,   158,    64,   162,   159,    65,
     161,    66,   165,    63,   169,    36,    64,   175,   170,    65,
     173,    66,    96,    97,    68,    54,    69,    70,    36,    93,
     111,   112,   172,     0,     0,    67,     0,    68,    36,    69,
      70,   118,   119,     0,     0,    96,   122,    68,     0,    69,
      70,   110,     0,   111,   112,     0,   113,   114,   115,     0,
     116,     0,     0,   117,   118,   119,   120,     0,   121,   122,
       0,   140,     0,     0,     0,   123,   124,   125,   110,     0,
     111,   112,     0,   113,   114,   115,     0,   116,     0,     0,
     117,   118,   119,   120,     0,   121,   122,     0,     0,   171,
       0,     0,   123,   124,   125,   110,     0,   111,   112,     0,
     113,   114,   115,     0,   116,     0,     0,   117,   118,   119,
     120,     0,   121,   122,     0,     0,     0,     0,     0,   123,
     124,   125,   110,     0,   111,   112,     0,   113,   114,   115,
       0,   116,     0,     0,   117,   118,   119,   120,     0,     0,
     122,     0,     0,     0,     0,     0,   123,   124,   125,   111,
     112,     0,   113,   114,   115,     0,   116,     0,     0,   117,
     118,   119,   120,     0,     0,   122,     0,     0,     0,     0,
       0,   123,   124,   125,   111,   112,     0,   113,   114,   115,
       0,   116,   111,   112,   117,   118,   119,   120,     0,     0,
     122,     0,     0,   118,   119,     0,   123,   124,   122,     0,
       0,     0,     0,     0,   123,   124
};

static const yytype_int16 yycheck[] =
{
      26,    33,    26,    38,     1,     4,     4,    33,    31,    33,
      52,    45,    14,     0,    13,    13,    42,    43,    42,    43,
      59,    13,    11,    62,    59,    57,    28,    62,    30,     1,
       1,    57,    60,    57,    32,    63,    64,    65,    66,    11,
      32,    83,    81,    82,    25,    40,    81,    82,    45,    23,
      22,    22,    22,    25,    25,    45,    30,    45,    30,    33,
      11,    33,    36,    35,    36,    37,    38,    41,    39,     5,
       6,    43,    44,    45,    30,     7,    13,    33,    10,    11,
      36,    17,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    45,     7,
      25,    30,   134,     1,    33,    13,   138,    36,   134,   137,
     134,    25,   138,    42,   138,    13,     1,    13,    16,    23,
     159,    19,    13,    21,   159,    23,    30,    13,    13,    33,
     132,    16,    36,     1,    19,    13,    21,    41,   170,    45,
      38,    42,    43,    11,   170,    22,   170,    45,     1,    47,
      25,    49,    50,    38,    22,    14,    45,    25,    11,    23,
      45,     7,    47,    23,    49,    50,    22,    35,    25,    37,
      38,     7,    25,    24,    23,    43,    44,    45,    23,    23,
      13,    23,    35,    16,    37,    38,    19,    14,    21,    23,
      43,    44,    45,    13,    23,    23,    16,    45,     7,    19,
      25,    21,    25,    13,    45,    38,    16,    23,    34,    19,
     169,    21,    45,    46,    47,    30,    49,    50,    38,    57,
       5,     6,   168,    -1,    -1,    45,    -1,    47,    38,    49,
      50,    16,    17,    -1,    -1,    45,    21,    47,    -1,    49,
      50,     3,    -1,     5,     6,    -1,     8,     9,    10,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    20,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    29,     3,    -1,
       5,     6,    -1,     8,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    27,    28,    29,     3,    -1,     5,     6,    -1,
       8,     9,    10,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,     3,    -1,     5,     6,    -1,     8,     9,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,     5,
       6,    -1,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,     5,     6,    -1,     8,     9,    10,
      -1,    12,     5,     6,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    16,    17,    -1,    27,    28,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    53,    45,     0,    11,     1,    25,    39,    54,
      55,    56,    25,    54,    40,    22,    54,    54,    30,    33,
      36,    42,    58,    59,    45,    45,    11,    62,    13,     7,
      13,    57,     1,    11,    35,    37,    38,    43,    44,    45,
      58,    63,    64,    65,    68,    72,    73,    74,    23,    41,
      58,    60,    45,    23,    60,    25,    25,    65,    69,    13,
      13,    13,    13,    13,    16,    19,    21,    45,    47,    49,
      50,    67,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     4,    13,    45,    22,    63,    63,    25,    14,    45,
      23,    57,    23,    69,    22,    78,    45,    46,    66,    79,
       1,    45,    78,     1,    79,    79,    79,    79,    32,    25,
       3,     5,     6,     8,     9,    10,    12,    15,    16,    17,
      18,    20,    21,    27,    28,    29,    78,     1,    70,    78,
      57,    24,     7,    61,    23,    23,    23,    14,    23,    23,
      23,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    23,    23,     7,
      71,    25,    45,    58,    65,    25,    79,    65,    78,    45,
      34,    24,    71,    61,    65,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    63,    63,    63,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     6,     2,
       3,     0,     1,     1,     1,     5,     5,     4,     4,     3,
       4,     4,     0,     3,     2,     2,     0,     4,     3,     5,
       7,     5,     3,     2,     5,     2,     1,     1,     0,     1,
       0,     1,     1,     1,     0,     2,     0,     2,     0,     3,
       0,     4,     4,     3,     7,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 39 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 44 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 45 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 59 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 67 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 86 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 89 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 91 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 92 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 93 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 95 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 96 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 114 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 115 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 118 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 119 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 127 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 128 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 138 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 139 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 140 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 141 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 142 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 145 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 146 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 152 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 153 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 161 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 167 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 168 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 170 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 171 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 175 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 176 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 181 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "jucompiler.y" /* yacc.c:1646  */
    {;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2011 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 183 "jucompiler.y" /* yacc.c:1906  */


void yyerror (const char *s) { 
     printf ("Line %d, col %d: %s: %s\n",linha,(int)(coluna-strlen(yytext)), s, yytext);
}
