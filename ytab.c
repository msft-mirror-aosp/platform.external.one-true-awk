/* A Bison parser, made by GNU Bison 3.2.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 25 "awkgram.y" /* yacc.c:338  */

#include <stdio.h>
#include <string.h>
#include "awk.h"

void checkdup(Node *list, Cell *item);
int yywrap(void) { return(1); }

Node	*beginloc = 0;
Node	*endloc = 0;
int	infunc	= 0;	/* = 1 if in arglist or body of func */
int	inloop	= 0;	/* = 1 if in while, for, do */
char	*curfname = 0;	/* current function name */
Node	*arglist = 0;	/* list of args for current function */

#line 85 "ytab.c" /* yacc.c:338  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "ytab.h".  */
#ifndef YY_YY_YTAB_H_INCLUDED
# define YY_YY_YTAB_H_INCLUDED
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
    FIRSTTOKEN = 258,
    PROGRAM = 259,
    PASTAT = 260,
    PASTAT2 = 261,
    XBEGIN = 262,
    XEND = 263,
    NL = 264,
    ARRAY = 265,
    MATCH = 266,
    NOTMATCH = 267,
    MATCHOP = 268,
    FINAL = 269,
    DOT = 270,
    ALL = 271,
    CCL = 272,
    NCCL = 273,
    CHAR = 274,
    OR = 275,
    STAR = 276,
    QUEST = 277,
    PLUS = 278,
    EMPTYRE = 279,
    AND = 280,
    BOR = 281,
    APPEND = 282,
    EQ = 283,
    GE = 284,
    GT = 285,
    LE = 286,
    LT = 287,
    NE = 288,
    IN = 289,
    ARG = 290,
    BLTIN = 291,
    BREAK = 292,
    CLOSE = 293,
    CONTINUE = 294,
    DELETE = 295,
    DO = 296,
    EXIT = 297,
    FOR = 298,
    FUNC = 299,
    SUB = 300,
    GSUB = 301,
    IF = 302,
    INDEX = 303,
    LSUBSTR = 304,
    MATCHFCN = 305,
    NEXT = 306,
    NEXTFILE = 307,
    ADD = 308,
    MINUS = 309,
    MULT = 310,
    DIVIDE = 311,
    MOD = 312,
    ASSIGN = 313,
    ASGNOP = 314,
    ADDEQ = 315,
    SUBEQ = 316,
    MULTEQ = 317,
    DIVEQ = 318,
    MODEQ = 319,
    POWEQ = 320,
    PRINT = 321,
    PRINTF = 322,
    SPRINTF = 323,
    ELSE = 324,
    INTEST = 325,
    CONDEXPR = 326,
    POSTINCR = 327,
    PREINCR = 328,
    POSTDECR = 329,
    PREDECR = 330,
    VAR = 331,
    IVAR = 332,
    VARNF = 333,
    CALL = 334,
    NUMBER = 335,
    STRING = 336,
    REGEXPR = 337,
    GETLINE = 338,
    RETURN = 339,
    SPLIT = 340,
    SUBSTR = 341,
    WHILE = 342,
    CAT = 343,
    NOT = 344,
    UMINUS = 345,
    UPLUS = 346,
    POWER = 347,
    DECR = 348,
    INCR = 349,
    INDIRECT = 350,
    LASTTOKEN = 351
  };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define PROGRAM 259
#define PASTAT 260
#define PASTAT2 261
#define XBEGIN 262
#define XEND 263
#define NL 264
#define ARRAY 265
#define MATCH 266
#define NOTMATCH 267
#define MATCHOP 268
#define FINAL 269
#define DOT 270
#define ALL 271
#define CCL 272
#define NCCL 273
#define CHAR 274
#define OR 275
#define STAR 276
#define QUEST 277
#define PLUS 278
#define EMPTYRE 279
#define AND 280
#define BOR 281
#define APPEND 282
#define EQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define IN 289
#define ARG 290
#define BLTIN 291
#define BREAK 292
#define CLOSE 293
#define CONTINUE 294
#define DELETE 295
#define DO 296
#define EXIT 297
#define FOR 298
#define FUNC 299
#define SUB 300
#define GSUB 301
#define IF 302
#define INDEX 303
#define LSUBSTR 304
#define MATCHFCN 305
#define NEXT 306
#define NEXTFILE 307
#define ADD 308
#define MINUS 309
#define MULT 310
#define DIVIDE 311
#define MOD 312
#define ASSIGN 313
#define ASGNOP 314
#define ADDEQ 315
#define SUBEQ 316
#define MULTEQ 317
#define DIVEQ 318
#define MODEQ 319
#define POWEQ 320
#define PRINT 321
#define PRINTF 322
#define SPRINTF 323
#define ELSE 324
#define INTEST 325
#define CONDEXPR 326
#define POSTINCR 327
#define PREINCR 328
#define POSTDECR 329
#define PREDECR 330
#define VAR 331
#define IVAR 332
#define VARNF 333
#define CALL 334
#define NUMBER 335
#define STRING 336
#define REGEXPR 337
#define GETLINE 338
#define RETURN 339
#define SPLIT 340
#define SUBSTR 341
#define WHILE 342
#define CAT 343
#define NOT 344
#define UMINUS 345
#define UPLUS 346
#define POWER 347
#define DECR 348
#define INCR 349
#define INDIRECT 350
#define LASTTOKEN 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "awkgram.y" /* yacc.c:353  */

	Node	*p;
	Cell	*cp;
	int	i;
	char	*s;

#line 327 "ytab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YTAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4682

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   104,     2,     2,
      12,    16,   103,   101,    10,   102,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    14,
       2,     2,     2,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,    13,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    95,    96,
      97,    98,    99,   100,   105,   106,   107,   108,   109,   110,
     111,   112
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   101,   105,   105,   109,   109,   113,   113,
     117,   117,   121,   121,   125,   125,   127,   127,   129,   129,
     134,   135,   139,   143,   143,   147,   147,   151,   152,   156,
     157,   162,   163,   167,   168,   172,   176,   177,   178,   179,
     180,   181,   183,   185,   185,   190,   191,   195,   196,   200,
     201,   203,   205,   207,   208,   213,   214,   215,   216,   217,
     221,   222,   224,   226,   228,   229,   230,   231,   232,   233,
     234,   235,   240,   241,   242,   245,   248,   249,   250,   254,
     255,   259,   260,   264,   265,   266,   270,   270,   274,   274,
     274,   274,   278,   278,   282,   284,   288,   288,   292,   292,
     296,   299,   302,   305,   306,   307,   308,   309,   313,   314,
     318,   320,   322,   322,   322,   324,   325,   326,   327,   328,
     329,   330,   333,   336,   337,   338,   339,   339,   340,   344,
     345,   349,   349,   353,   354,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     384,   387,   388,   390,   395,   396,   398,   400,   402,   403,
     404,   406,   411,   413,   418,   420,   422,   426,   427,   428,
     429,   433,   434,   435,   441,   442,   443,   448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIRSTTOKEN", "PROGRAM", "PASTAT",
  "PASTAT2", "XBEGIN", "XEND", "NL", "','", "'{'", "'('", "'|'", "';'",
  "'/'", "')'", "'}'", "'['", "']'", "ARRAY", "MATCH", "NOTMATCH",
  "MATCHOP", "FINAL", "DOT", "ALL", "CCL", "NCCL", "CHAR", "OR", "STAR",
  "QUEST", "PLUS", "EMPTYRE", "AND", "BOR", "APPEND", "EQ", "GE", "GT",
  "LE", "LT", "NE", "IN", "ARG", "BLTIN", "BREAK", "CLOSE", "CONTINUE",
  "DELETE", "DO", "EXIT", "FOR", "FUNC", "SUB", "GSUB", "IF", "INDEX",
  "LSUBSTR", "MATCHFCN", "NEXT", "NEXTFILE", "ADD", "MINUS", "MULT",
  "DIVIDE", "MOD", "ASSIGN", "ASGNOP", "ADDEQ", "SUBEQ", "MULTEQ", "DIVEQ",
  "MODEQ", "POWEQ", "PRINT", "PRINTF", "SPRINTF", "ELSE", "INTEST",
  "CONDEXPR", "POSTINCR", "PREINCR", "POSTDECR", "PREDECR", "VAR", "IVAR",
  "VARNF", "CALL", "NUMBER", "STRING", "REGEXPR", "'?'", "':'", "GETLINE",
  "RETURN", "SPLIT", "SUBSTR", "WHILE", "CAT", "'+'", "'-'", "'*'", "'%'",
  "NOT", "UMINUS", "UPLUS", "POWER", "DECR", "INCR", "INDIRECT",
  "LASTTOKEN", "$accept", "program", "and", "bor", "comma", "do", "else",
  "for", "$@1", "$@2", "$@3", "funcname", "if", "lbrace", "nl", "opt_nl",
  "opt_pst", "opt_simple_stmt", "pas", "pa_pat", "pa_stat", "$@4",
  "pa_stats", "patlist", "ppattern", "pattern", "plist", "pplist", "prarg",
  "print", "pst", "rbrace", "re", "reg_expr", "$@5", "rparen",
  "simple_stmt", "st", "stmt", "$@6", "$@7", "$@8", "stmtlist", "subop",
  "string", "term", "var", "varlist", "varname", "while", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      44,   123,    40,   124,    59,    47,    41,   125,    91,    93,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    63,    58,   338,   339,   340,   341,   342,
     343,    43,    45,    42,    37,   344,   345,   346,   347,   348,
     349,   350,   351
};
# endif

#define YYPACT_NINF -324

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-324)))

#define YYTABLE_NINF -32

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-32)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     682,  -324,  -324,  -324,     7,  1583,  -324,   156,  -324,    12,
      12,  -324,  4212,  -324,  -324,    56,  4571,    49,  -324,  -324,
      58,    71,    79,  -324,  -324,  -324,    81,  -324,  -324,   -31,
      83,    94,  4571,  4571,  4270,    57,    57,  4571,   795,   187,
    -324,   158,  3498,  -324,  -324,   146,   -57,    -5,   -23,    30,
    -324,  -324,   795,   795,  2185,    26,   -34,  4027,  4212,  4571,
      -5,    90,  -324,  -324,   163,  4212,  4212,  4212,  4085,  4571,
     148,  4212,  4212,    85,    85,  -324,    85,  -324,  -324,  -324,
    -324,  -324,   193,   160,   160,   -13,  -324,  1735,   191,   192,
     160,   160,  -324,  -324,  1735,   195,   196,  -324,  1409,   795,
    3498,  4328,   160,  -324,   863,  -324,   193,   795,  1583,   114,
    4212,  -324,  -324,  4212,  4212,  4212,  4212,  4212,  4212,   -13,
    4212,  1793,  1851,    -5,  4212,  -324,  4386,  4571,  4571,  4571,
    4571,  4571,  4212,  -324,  -324,  4212,   931,   999,  -324,  -324,
    1909,   166,  1909,   200,  -324,    62,  3498,  2676,   125,  2585,
    2585,   111,  -324,   132,    -5,  4571,  2585,  2585,  -324,   208,
    -324,   193,   208,  -324,  -324,   201,  1677,  -324,  1467,  4212,
    -324,  -324,  1677,  -324,  4212,  -324,  1409,   141,  1067,  4212,
    3900,   219,    39,  -324,    -5,   -20,  -324,  -324,  -324,  1409,
    4212,  1135,  -324,    57,  3749,  -324,  3749,  3749,  3749,  3749,
    3749,  3749,  -324,  2767,  -324,  3669,  -324,  3589,  2585,   219,
    4571,    85,    -3,    -3,    85,    85,    85,  3498,    98,  -324,
    -324,  -324,  3498,   -13,  3498,  -324,  -324,  1909,  -324,   136,
    1909,  1909,  -324,  -324,    -5,    32,  1909,  -324,  -324,  4212,
    -324,   218,  -324,    22,  2858,  -324,  2858,  -324,  -324,  1205,
    -324,   224,   143,  4444,   -13,  4444,  1967,  2025,    -5,  2083,
    4571,  4571,  4571,  4444,  -324,    12,  -324,  -324,  4212,  1909,
    1909,    -5,  -324,  -324,  3498,  -324,    21,   226,  2949,   220,
    3040,   222,   147,  2287,   106,   162,   -13,   226,   226,   149,
    -324,  -324,  -324,   198,  4212,  4513,  -324,  -324,  3820,  4154,
    3969,  3900,    -5,    -5,    -5,  3900,   795,  3498,  2389,  2491,
    -324,  -324,    12,  -324,  -324,  -324,  -324,  -324,  1909,  -324,
    1909,  -324,   193,  4212,   234,   239,   -13,   150,  4444,  1273,
    -324,    36,  -324,    36,   795,  3131,   237,  3222,  1525,  3316,
     226,  4212,  -324,   198,  3900,  -324,   238,   240,  1341,  -324,
    -324,  -324,   234,   193,  1409,  3407,  -324,  -324,  -324,   226,
    1525,  -324,   160,  1409,   234,  -324,  -324,   226,  1409,  -324
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,    88,    89,     0,    33,     2,    30,     1,     0,
       0,    23,     0,    96,   185,   147,     0,     0,   131,   132,
       0,     0,     0,   184,   179,   186,     0,   164,   133,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      45,    29,    35,    77,    94,     0,   169,    78,   176,   177,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   176,    20,    21,     0,     0,     0,     0,     0,     0,
     157,     0,     0,   143,   142,    95,   144,   151,   152,   180,
     107,    24,    27,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    86,    87,     0,     0,   112,   117,     0,     0,
     106,    83,     0,   129,     0,   126,    27,     0,    34,     0,
       0,     4,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   153,   154,     0,     0,     0,     8,   161,
       0,     0,     0,     0,   145,     0,    47,     0,   181,     0,
       0,     0,   148,     0,   156,     0,     0,     0,    25,    28,
     128,    27,   108,   110,   111,   105,     0,   116,     0,     0,
     121,   122,     0,   124,     0,    11,     0,   119,     0,     0,
      81,    84,   103,    58,    59,   176,   125,    40,   130,     0,
       0,     0,    46,    75,    71,    70,    64,    65,    66,    67,
      68,    69,    72,     0,     5,    63,     7,    62,     0,    94,
       0,   139,   136,   137,   138,   140,   141,    60,     0,    41,
      42,     9,    79,     0,    80,    97,   146,     0,   182,     0,
       0,     0,   168,   149,   155,     0,     0,    26,   109,     0,
     115,     0,    32,   177,     0,   123,     0,   113,    12,     0,
      92,   120,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,   127,    38,    37,    74,     0,     0,
       0,   135,   178,    73,    48,    98,     0,    43,     0,    94,
       0,    94,     0,     0,     0,    27,     0,    22,   187,     0,
      13,   118,    93,    85,     0,    54,    53,    55,     0,    52,
      51,    82,   100,   101,   102,    49,     0,    61,     0,     0,
     183,    99,     0,   159,   160,   163,   162,   167,     0,   175,
       0,   104,    27,     0,     0,     0,     0,     0,     0,     0,
     171,     0,   170,     0,     0,     0,    94,     0,     0,     0,
      18,     0,    56,     0,    50,    39,     0,     0,     0,   165,
     166,   174,     0,    27,     0,     0,   173,   172,    44,    16,
       0,    19,     0,     0,     0,   114,    17,    14,     0,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,    -1,    46,     5,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,    -4,   -73,   -67,   225,  -323,  -324,    69,
     152,  -324,  -324,   -43,  -192,   482,  -175,  -324,  -324,  -324,
    -324,  -324,   -32,  -102,  -324,  -215,  -165,   -40,   381,  -324,
    -324,  -324,   -25,  -324,  -324,   236,   -16,  -324,   103,  -324
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,   121,   122,   227,    96,   249,    97,   368,   363,
     354,    64,    98,    99,   162,   160,     5,   241,     6,    39,
      40,   312,    41,   145,   180,   100,    55,   181,   182,   101,
       7,   251,    43,    44,    56,   277,   102,   163,   103,   176,
     289,   189,   104,    45,    46,    47,    48,   229,    49,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    38,    75,   242,   252,    52,    53,     8,   195,   159,
     126,    69,   126,    70,    14,   352,    61,    61,    61,    77,
      78,    61,   209,    11,   151,   153,    61,   136,   137,   287,
     221,   288,    14,   159,   125,   107,   138,   364,    61,   190,
     135,   221,   141,    61,   164,   221,   132,   167,   135,   263,
     170,   171,   260,    61,   173,    23,    24,    25,   143,   140,
     142,   295,   186,   298,   299,   300,   286,   301,    57,   183,
      65,   305,   138,    23,   178,    25,   261,    14,   226,   262,
      37,    14,   191,    66,    61,   185,   133,   134,   159,   133,
     134,    67,   218,    68,   238,    71,   127,   128,   129,   130,
     129,   130,    14,   131,    38,   131,    72,   310,   138,   340,
      61,    61,    61,    61,    61,    61,   138,   272,    23,   327,
      25,   138,    23,    24,    25,   321,   240,   232,   279,   281,
      61,    61,   245,    61,    61,    62,   344,   359,    63,    61,
      61,    61,   138,    23,    24,    25,   138,    37,   233,   367,
      61,   296,   275,   138,   230,   231,    61,   138,   124,   293,
     138,   235,   236,   317,    61,    50,   343,     2,    37,   158,
      51,   158,     3,   242,   161,   148,   322,   267,    61,   256,
      61,    61,    61,    61,    61,    61,   259,    61,   165,    61,
     155,    61,    61,   131,    61,   242,   284,   106,    11,   133,
     134,    61,   158,   168,   169,   175,    61,   174,    61,   193,
     223,   228,   159,   269,   270,   225,   336,   237,   323,   239,
     248,   183,   202,   183,   183,   183,   257,   183,    61,   138,
      61,   183,   285,   292,   276,   311,   314,   185,   316,   185,
     185,   185,   326,   185,    61,    61,    61,   185,   325,   159,
     275,   341,    60,   350,   356,   338,   357,   142,    61,   265,
     192,   306,    61,     0,    61,     0,   108,    61,    73,    74,
      76,   243,     0,    79,     0,     0,     0,     0,   123,    61,
     159,   329,    61,    61,    61,    61,   360,   318,   320,    61,
     123,    61,    61,    61,   256,    76,   183,   256,   256,   256,
     256,     0,     0,     0,   256,   154,     0,     0,   334,   348,
       0,     0,   185,   331,   333,   346,     0,   347,     0,    61,
       0,    61,   365,    61,     0,     0,   273,     0,    61,     0,
       0,     0,   142,     0,     0,     0,   123,   184,   282,    61,
       0,   257,     0,   256,   257,   257,   257,   257,     0,     0,
       0,   257,     0,     0,     0,     0,     0,   297,     0,     0,
       0,     0,   211,   212,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,   123,     0,   123,   123,     0,     0,   324,
     257,   234,   123,   123,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
     123,     0,   123,   123,   123,   123,   123,   123,     0,   123,
       0,   123,     0,   123,   123,     0,   271,     0,     0,     0,
       0,     0,     0,   123,     0,     0,     0,     0,   123,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
     123,     0,   123,     0,     0,   188,     0,    42,     0,   184,
       0,   184,   184,   184,    54,   184,   302,   303,   304,   184,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,   123,     0,   123,   188,   188,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,   258,   258,   258,   258,     0,   146,
     147,   258,     0,   123,   123,   123,     0,   149,   150,   146,
     146,     0,     0,   156,   157,     0,     0,   247,     0,   188,
       0,     0,     0,     0,   184,     0,     0,     0,     0,   166,
     264,   123,   188,   123,     0,   123,   172,     0,     0,     0,
     258,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,   123,   194,     0,     0,   196,   197,   198,   199,   200,
     201,     0,   203,   205,   207,     0,   208,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   146,     0,     0,
       0,     0,   222,     0,   224,     0,     0,     0,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,     0,     0,     0,     0,   246,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,     1,     0,     0,     0,     0,     0,   -29,
     -29,     2,     0,   -29,   -29,     0,     3,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     188,     0,   278,   280,     0,     0,     0,     0,   283,     0,
       0,   146,     0,     0,     0,     0,     0,   -29,   -29,   188,
     -29,     0,     0,     0,     0,   361,   -29,   -29,   -29,     0,
     -29,     0,   -29,     0,   366,     0,     0,     0,     0,   369,
     307,   308,   309,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,    54,   -29,     0,   -29,
     -29,     0,     0,   -29,   -29,     0,     0,   -29,     0,     0,
       0,   -29,   -29,   -29,     0,     0,    80,     0,     0,     0,
     335,     0,   337,     0,    81,   339,    11,    12,     0,    82,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    83,    16,    84,    85,    86,    87,    88,     0,
      18,    19,    89,    20,     0,    21,    90,    91,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,    92,    93,    22,    11,    12,     0,    82,    13,     0,
     187,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,    94,    30,    31,    95,     0,    32,    33,     0,     0,
      34,     0,     0,     0,    35,    36,    37,     0,    14,    15,
      83,    16,    84,    85,    86,    87,    88,     0,    18,    19,
      89,    20,     0,    21,    90,    91,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,    92,
      93,    22,    11,    12,     0,    82,    13,     0,   219,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    94,
      30,    31,    95,     0,    32,    33,     0,     0,    34,     0,
       0,     0,    35,    36,    37,     0,    14,    15,    83,    16,
      84,    85,    86,    87,    88,     0,    18,    19,    89,    20,
       0,    21,    90,    91,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,    92,    93,    22,
      11,    12,     0,    82,    13,     0,   220,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,    94,    30,    31,
      95,     0,    32,    33,     0,     0,    34,     0,     0,     0,
      35,    36,    37,     0,    14,    15,    83,    16,    84,    85,
      86,    87,    88,     0,    18,    19,    89,    20,     0,    21,
      90,    91,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,    92,    93,    22,    11,    12,
       0,    82,    13,     0,   250,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,    94,    30,    31,    95,     0,
      32,    33,     0,     0,    34,     0,     0,     0,    35,    36,
      37,     0,    14,    15,    83,    16,    84,    85,    86,    87,
      88,     0,    18,    19,    89,    20,     0,    21,    90,    91,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,    92,    93,    22,    11,    12,     0,    82,
      13,     0,   266,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,    94,    30,    31,    95,     0,    32,    33,
       0,     0,    34,     0,     0,     0,    35,    36,    37,     0,
      14,    15,    83,    16,    84,    85,    86,    87,    88,     0,
      18,    19,    89,    20,     0,    21,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    92,    93,    22,   290,     0,    11,    12,     0,    82,
      13,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,    94,    30,    31,    95,     0,    32,    33,     0,     0,
      34,     0,     0,     0,    35,    36,    37,     0,     0,     0,
      14,    15,    83,    16,    84,    85,    86,    87,    88,     0,
      18,    19,    89,    20,     0,    21,    90,    91,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,    92,    93,    22,    11,    12,     0,    82,    13,     0,
     345,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,    94,    30,    31,    95,     0,    32,    33,     0,     0,
      34,     0,     0,     0,    35,    36,    37,     0,    14,    15,
      83,    16,    84,    85,    86,    87,    88,     0,    18,    19,
      89,    20,     0,    21,    90,    91,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,    92,
      93,    22,    11,    12,     0,    82,    13,     0,   358,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    94,
      30,    31,    95,     0,    32,    33,     0,     0,    34,     0,
       0,     0,    35,    36,    37,     0,    14,    15,    83,    16,
      84,    85,    86,    87,    88,     0,    18,    19,    89,    20,
       0,    21,    90,    91,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,    92,    93,    22,
      11,    12,     0,    82,    13,     0,     0,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,    94,    30,    31,
      95,     0,    32,    33,     0,     0,    34,     0,     0,     0,
      35,    36,    37,     0,    14,    15,    83,    16,    84,    85,
      86,    87,    88,     0,    18,    19,    89,    20,    80,    21,
      90,    91,     0,     0,     0,     0,     0,     0,     0,    12,
       0,   -31,    13,     0,     0,    92,    93,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,    94,    30,    31,    95,     0,
      32,    33,    14,    15,    34,    16,     0,    85,    35,    36,
      37,     0,    18,    19,     0,    20,    80,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
      13,   -31,     0,    92,    93,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    34,    16,     0,    85,    35,    36,    37,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       9,    10,     0,     0,    11,    12,     0,     0,    13,     0,
       0,    92,    93,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,    16,     0,     0,    35,    36,    37,    17,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,   158,     0,    34,    58,
     109,   161,    35,    36,    37,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,   158,     0,     0,    12,     0,   161,
      13,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     120,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    59,    16,     0,     0,    35,    36,    37,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,   204,     0,     0,    12,     0,     0,    13,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,    16,     0,     0,    35,    36,    37,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
     206,     0,     0,    12,     0,     0,    13,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    34,    16,
       0,     0,    35,    36,    37,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,   221,     0,
       0,    12,     0,     0,    13,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    14,    15,    34,    16,     0,     0,
      35,    36,    37,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,   204,     0,     0,   294,
       0,     0,    13,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,    34,    16,     0,     0,    35,    36,
      37,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,   206,     0,     0,   294,     0,     0,
      13,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    34,    16,     0,     0,    35,    36,    37,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,   221,     0,     0,   294,     0,     0,    13,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,    16,     0,     0,    35,    36,    37,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,     0,     0,    34,     0,
       0,     0,    35,    36,    37,   138,     0,    58,   109,     0,
       0,   139,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,     0,   113,   114,   115,   116,   117,   118,   119,
      14,    15,     0,    16,     0,     0,     0,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,   120,     0,
      29,     0,    30,    31,     0,     0,    32,    33,     0,     0,
      59,     0,     0,     0,    35,    36,    37,   138,     0,    58,
     109,     0,     0,   319,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     120,     0,    29,     0,    30,    31,     0,     0,    32,    33,
       0,     0,    59,     0,     0,     0,    35,    36,    37,   138,
       0,    58,   109,     0,     0,   330,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   112,     0,   113,   114,   115,
     116,   117,   118,   119,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,   120,     0,    29,     0,    30,    31,     0,     0,
      32,    33,     0,     0,    59,     0,     0,     0,    35,    36,
      37,   138,     0,    58,   109,     0,     0,   332,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,     0,   113,
     114,   115,   116,   117,   118,   119,    14,    15,     0,    16,
       0,     0,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,   120,     0,    29,     0,    30,    31,
       0,     0,    32,    33,     0,   138,    59,    58,   109,     0,
      35,    36,    37,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,     0,   113,   114,   115,   116,   117,   118,   119,
      14,    15,     0,    16,     0,     0,     0,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,   120,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    58,   109,
      59,     0,   139,     0,    35,    36,    37,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,   113,   114,   115,   116,   117,   118,
     119,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,   120,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    58,
     109,    59,     0,     0,     0,    35,    36,    37,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     120,   268,    29,     0,    30,    31,     0,     0,    32,    33,
      58,   109,    59,     0,   275,     0,    35,    36,    37,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   119,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,   120,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    58,   109,    59,     0,   313,     0,    35,    36,    37,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   112,     0,   113,   114,   115,
     116,   117,   118,   119,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,   120,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    58,   109,    59,     0,   315,     0,    35,    36,
      37,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,   120,     0,    29,     0,    30,    31,     0,
       0,    32,    33,    58,   109,    59,     0,   349,     0,    35,
      36,    37,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,     0,   113,
     114,   115,   116,   117,   118,   119,    14,    15,     0,    16,
       0,     0,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,   120,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    58,   109,    59,     0,   351,     0,
      35,    36,    37,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,     0,
     113,   114,   115,   116,   117,   118,   119,    14,    15,     0,
      16,     0,     0,     0,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,   120,     0,    29,     0,    30,
      31,     0,     0,    32,    33,     0,     0,    59,    58,   109,
     353,    35,    36,    37,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,   113,   114,   115,   116,   117,   118,
     119,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,   120,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    58,
     109,    59,     0,   362,     0,    35,    36,    37,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     120,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      58,   109,    59,     0,     0,     0,    35,    36,    37,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   119,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,   120,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    58,   109,    59,     0,     0,     0,    35,    36,    37,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   113,   114,   115,
     116,   117,   118,   119,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    58,   109,     0,    29,     0,    30,    31,     0,     0,
      32,    33,   110,     0,    59,     0,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,     0,   113,   114,   115,
     116,   117,   118,   119,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    58,   -32,     0,    29,     0,    30,    31,     0,     0,
      32,    33,   -32,     0,    59,     0,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,    58,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,   253,     0,     0,    30,    31,     0,     0,
      32,    33,     0,     0,    59,   111,   112,     0,    35,    36,
      37,     0,     0,     0,   254,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    58,   255,   328,    29,     0,    30,    31,     0,
       0,    32,    33,   253,     0,    59,     0,     0,     0,    35,
      36,    37,     0,     0,     0,   111,   112,     0,     0,     0,
       0,     0,     0,     0,   254,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,    58,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,   253,   255,     0,    29,     0,    30,    31,     0,
       0,    32,    33,     0,   111,    59,     0,     0,     0,    35,
      36,    37,     0,   254,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,    13,   144,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,    59,    16,     0,     0,    35,    36,
      37,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
      13,   152,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    34,    16,     0,     0,    35,    36,    37,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    58,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,   253,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,     0,     0,
      34,     0,     0,     0,    35,    36,    37,     0,   254,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,    29,
       0,    30,    31,     0,     0,    32,    33,    14,    15,    59,
      16,     0,     0,    35,    36,    37,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,    13,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    14,    15,    34,    16,     0,
       0,    35,    36,    37,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,    13,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,    14,    15,    34,    16,     0,     0,    35,
      36,    37,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    14,    15,    34,    16,     0,     0,    35,    36,    37,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,   210,   294,     0,     0,    13,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    14,
      15,    59,    16,     0,     0,    35,    36,    37,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    58,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,   -32,     0,     0,    29,
       0,    30,    31,     0,     0,    32,    33,     0,     0,    34,
       0,     0,     0,    35,    36,    37,     0,   -32,    14,    15,
       0,    16,     0,     0,     0,     0,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    59,    16,
       0,     0,    35,    36,    37,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,    33,     0,     0,    59,     0,     0,     0,
      35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      16,     5,    34,   168,   179,     9,    10,     0,   110,    82,
      15,    42,    15,    29,    45,   338,    32,    33,    34,    35,
      36,    37,   124,    11,    67,    68,    42,    52,    53,   244,
       9,   246,    45,   106,    91,    39,    10,   360,    54,   106,
      18,     9,    16,    59,    84,     9,    69,    87,    18,    69,
      90,    91,    13,    69,    94,    86,    87,    88,    92,    54,
      55,   253,   102,   255,   256,   257,    44,   259,    12,   101,
      12,   263,    10,    86,    99,    88,    37,    45,    16,    40,
     111,    45,   107,    12,   100,   101,   109,   110,   161,   109,
     110,    12,   135,    12,   161,    12,   101,   102,   103,   104,
     103,   104,    45,   108,   108,   108,    12,    86,    10,   324,
     126,   127,   128,   129,   130,   131,    10,    19,    86,   294,
      88,    10,    86,    87,    88,    19,   166,    16,   230,   231,
     146,   147,   172,   149,   150,    86,   328,   352,    89,   155,
     156,   157,    10,    86,    87,    88,    10,   111,    16,   364,
     166,   253,    16,    10,   149,   150,   172,    10,    12,    16,
      10,   156,   157,    16,   180,     9,    16,     9,   111,     9,
      14,     9,    14,   338,    14,    12,    14,   193,   194,   180,
     196,   197,   198,   199,   200,   201,   181,   203,    85,   205,
      42,   207,   208,   108,   210,   360,   239,    10,    11,   109,
     110,   217,     9,    12,    12,     9,   222,    12,   224,    95,
      44,    86,   285,   208,   209,    15,   318,     9,   285,    18,
      79,   253,   119,   255,   256,   257,   180,   259,   244,    10,
     246,   263,    14,     9,   229,     9,    16,   253,    16,   255,
     256,   257,    44,   259,   260,   261,   262,   263,    99,   322,
      16,    12,    16,    16,    16,   322,    16,   252,   274,   190,
     108,   265,   278,    -1,   280,    -1,    41,   283,    32,    33,
      34,   168,    -1,    37,    -1,    -1,    -1,    -1,    42,   295,
     353,   306,   298,   299,   300,   301,   353,   282,   283,   305,
      54,   307,   308,   309,   295,    59,   328,   298,   299,   300,
     301,    -1,    -1,    -1,   305,    69,    -1,    -1,   312,   334,
      -1,    -1,   328,   308,   309,   331,    -1,   333,    -1,   335,
      -1,   337,   362,   339,    -1,    -1,   223,    -1,   344,    -1,
      -1,    -1,   327,    -1,    -1,    -1,   100,   101,   235,   355,
      -1,   295,    -1,   344,   298,   299,   300,   301,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,   147,    -1,   149,   150,    -1,    -1,   286,
     344,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,
     194,    -1,   196,   197,   198,   199,   200,   201,    -1,   203,
      -1,   205,    -1,   207,   208,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,   222,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
     244,    -1,   246,    -1,    -1,   104,    -1,     5,    -1,   253,
      -1,   255,   256,   257,    12,   259,   260,   261,   262,   263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     274,    -1,    -1,    -1,   278,    -1,   280,   136,   137,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   295,    -1,    -1,   298,   299,   300,   301,    -1,    57,
      58,   305,    -1,   307,   308,   309,    -1,    65,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    -1,   176,    -1,   178,
      -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    87,
     189,   335,   191,   337,    -1,   339,    94,    -1,    -1,    -1,
     344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   355,   110,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,   135,    -1,    -1,
      -1,    -1,   140,    -1,   142,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    -1,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     329,    -1,   230,   231,    -1,    -1,    -1,    -1,   236,    -1,
      -1,   239,    -1,    -1,    -1,    -1,    -1,    45,    46,   348,
      48,    -1,    -1,    -1,    -1,   354,    54,    55,    56,    -1,
      58,    -1,    60,    -1,   363,    -1,    -1,    -1,    -1,   368,
     268,   269,   270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,   294,    95,    -1,    97,
      98,    -1,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,    -1,     1,    -1,    -1,    -1,
     318,    -1,   320,    -1,     9,   323,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    11,    12,    -1,    14,    15,    -1,
      17,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    11,    12,    -1,    14,    15,    -1,    17,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      11,    12,    -1,    14,    15,    -1,    17,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    11,    12,
      -1,    14,    15,    -1,    17,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    11,    12,    -1,    14,
      15,    -1,    17,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    76,    77,    78,     9,    -1,    11,    12,    -1,    14,
      15,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    11,    12,    -1,    14,    15,    -1,
      17,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    11,    12,    -1,    14,    15,    -1,    17,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      11,    12,    -1,    14,    15,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,     1,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,   102,    45,    46,   105,    48,    -1,    50,   109,   110,
     111,    -1,    55,    56,    -1,    58,     1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,    50,   109,   110,   111,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    11,    12,    -1,    -1,    15,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,    -1,   109,   110,   111,    54,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,     9,    -1,   105,    12,
      13,    14,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,    -1,   109,   110,   111,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,    -1,   109,   110,   111,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    45,    46,   105,    48,
      -1,    -1,   109,   110,   111,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    45,    46,   105,    48,    -1,    -1,
     109,   110,   111,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    45,    46,   105,    48,    -1,    -1,   109,   110,
     111,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,    -1,   109,   110,   111,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,    -1,   109,   110,   111,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    10,    -1,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    10,    -1,    12,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    10,
      -1,    12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    -1,    10,   105,    12,    13,    -1,
     109,   110,   111,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    12,    13,
     105,    -1,    16,    -1,   109,   110,   111,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    12,
      13,   105,    -1,    -1,    -1,   109,   110,   111,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      12,    13,   105,    -1,    16,    -1,   109,   110,   111,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    12,    13,   105,    -1,    16,    -1,   109,   110,   111,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    12,    13,   105,    -1,    16,    -1,   109,   110,
     111,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    93,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    12,    13,   105,    -1,    16,    -1,   109,
     110,   111,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    12,    13,   105,    -1,    16,    -1,
     109,   110,   111,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      98,    -1,    -1,   101,   102,    -1,    -1,   105,    12,    13,
      14,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    12,
      13,   105,    -1,    16,    -1,   109,   110,   111,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      12,    13,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    12,    13,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    12,    13,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    23,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    12,    13,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    23,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    23,    -1,    -1,    97,    98,    -1,    -1,
     101,   102,    -1,    -1,   105,    35,    36,    -1,   109,   110,
     111,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    93,    94,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    23,    -1,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    23,    93,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    -1,    35,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    45,    46,   105,    48,    -1,    -1,   109,   110,
     111,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,    -1,   109,   110,   111,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    23,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      -1,    97,    98,    -1,    -1,   101,   102,    45,    46,   105,
      48,    -1,    -1,   109,   110,   111,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,
      98,    -1,    -1,   101,   102,    45,    46,   105,    48,    -1,
      -1,   109,   110,   111,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    45,    46,   105,    48,    -1,    -1,   109,
     110,   111,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    45,    46,   105,    48,    -1,    -1,   109,   110,   111,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    45,
      46,   105,    48,    -1,    -1,   109,   110,   111,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    23,    -1,    -1,    95,
      -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,   110,   111,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    -1,    -1,   101,   102,    45,    46,   105,    48,
      -1,    -1,   109,   110,   111,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    14,   114,   129,   131,   143,     0,     7,
       8,    11,    12,    15,    45,    46,    48,    54,    55,    56,
      58,    60,    78,    86,    87,    88,    89,    90,    91,    95,
      97,    98,   101,   102,   105,   109,   110,   111,   126,   132,
     133,   135,   138,   145,   146,   156,   157,   158,   159,   161,
       9,    14,   126,   126,   138,   139,   147,    12,    12,   105,
     158,   159,    86,    89,   124,    12,    12,    12,    12,    42,
     159,    12,    12,   158,   158,   145,   158,   159,   159,   158,
       1,     9,    14,    47,    49,    50,    51,    52,    53,    57,
      61,    62,    76,    77,    96,    99,   118,   120,   125,   126,
     138,   142,   149,   151,   155,   162,    10,   126,   129,    13,
      23,    35,    36,    38,    39,    40,    41,    42,    43,    44,
      93,   115,   116,   158,    12,    91,    15,   101,   102,   103,
     104,   108,    69,   109,   110,    18,   155,   155,    10,    16,
     117,    16,   117,    92,    16,   136,   138,   138,    12,   138,
     138,   136,    16,   136,   158,    42,   138,   138,     9,   127,
     128,    14,   127,   150,   150,   161,   138,   150,    12,    12,
     150,   150,   138,   150,    12,     9,   152,   151,   155,    12,
     137,   140,   141,   145,   158,   159,   150,    17,   151,   154,
     128,   155,   133,    95,   138,   146,   138,   138,   138,   138,
     138,   138,   161,   138,     9,   138,     9,   138,   138,   146,
      69,   158,   158,   158,   158,   158,   158,   138,   136,    17,
      17,     9,   138,    44,   138,    15,    16,   117,    86,   160,
     117,   117,    16,    16,   158,   117,   117,     9,   128,    18,
     150,   130,   149,   161,   138,   150,   138,   151,    79,   119,
      17,   144,   139,    23,    44,    93,   115,   116,   158,   117,
      13,    37,    40,    69,   151,   132,    17,   159,    94,   117,
     117,   158,    19,   161,   138,    16,   117,   148,   138,   146,
     138,   146,   161,   138,   136,    14,    44,   148,   148,   153,
       9,   151,     9,    16,    12,   137,   146,   161,   137,   137,
     137,   137,   158,   158,   158,   137,   126,   138,   138,   138,
      86,     9,   134,    16,    16,    16,    16,    16,   117,    16,
     117,    19,    14,   128,   161,    99,    44,   139,    94,   155,
      16,   117,    16,   117,   126,   138,   146,   138,   128,   138,
     148,    12,   161,    16,   137,    17,   159,   159,   155,    16,
      16,    16,   130,    14,   123,   138,    16,    16,    17,   148,
     128,   151,    16,   122,   130,   150,   151,   148,   121,   151
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   121,   120,   122,   120,   123,   120,
     124,   124,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   133,   133,   134,   133,   135,   135,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   142,   142,   143,   143,
     143,   143,   144,   144,   145,   145,   147,   146,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     151,   151,   152,   153,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   154,   151,   151,   155,
     155,   156,   156,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   160,   160,   160,   161,   161,   161,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     0,    12,     0,    10,     0,     8,
       1,     1,     4,     1,     2,     1,     2,     0,     1,     0,
       1,     0,     1,     1,     3,     1,     1,     4,     4,     7,
       3,     4,     4,     0,     9,     1,     3,     1,     3,     3,
       5,     3,     3,     3,     3,     3,     5,     2,     1,     1,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     4,     3,     2,     1,     1,     3,
       3,     1,     3,     0,     1,     3,     1,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     0,     4,     1,     2,
       4,     4,     4,     2,     5,     2,     1,     1,     1,     2,
       2,     2,     0,     0,     9,     3,     2,     1,     4,     2,
       3,     2,     2,     3,     2,     2,     0,     3,     2,     1,
       2,     1,     1,     1,     2,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     4,     1,     3,     4,
       2,     2,     2,     2,     2,     4,     3,     2,     1,     6,
       6,     3,     6,     6,     1,     8,     8,     6,     4,     1,
       6,     6,     8,     8,     8,     6,     1,     1,     4,     1,
       2,     0,     1,     3,     1,     1,     1,     4
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    default: /* Avoid compiler warnings. */
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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
#line 99 "awkgram.y" /* yacc.c:1645  */
    { if (errorflag==0)
			winner = (Node *)stat3(PROGRAM, beginloc, (yyvsp[0].p), endloc); }
#line 2545 "ytab.c" /* yacc.c:1645  */
    break;

  case 3:
#line 101 "awkgram.y" /* yacc.c:1645  */
    { yyclearin; bracecheck(); SYNTAX("bailing out"); }
#line 2551 "ytab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 125 "awkgram.y" /* yacc.c:1645  */
    {inloop++;}
#line 2557 "ytab.c" /* yacc.c:1645  */
    break;

  case 15:
#line 126 "awkgram.y" /* yacc.c:1645  */
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[-9].p), notnull((yyvsp[-6].p)), (yyvsp[-3].p), (yyvsp[0].p)); }
#line 2563 "ytab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 127 "awkgram.y" /* yacc.c:1645  */
    {inloop++;}
#line 2569 "ytab.c" /* yacc.c:1645  */
    break;

  case 17:
#line 128 "awkgram.y" /* yacc.c:1645  */
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[-7].p), NIL, (yyvsp[-3].p), (yyvsp[0].p)); }
#line 2575 "ytab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 129 "awkgram.y" /* yacc.c:1645  */
    {inloop++;}
#line 2581 "ytab.c" /* yacc.c:1645  */
    break;

  case 19:
#line 130 "awkgram.y" /* yacc.c:1645  */
    { --inloop; (yyval.p) = stat3(IN, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (yyvsp[0].p)); }
#line 2587 "ytab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 134 "awkgram.y" /* yacc.c:1645  */
    { setfname((yyvsp[0].cp)); }
#line 2593 "ytab.c" /* yacc.c:1645  */
    break;

  case 21:
#line 135 "awkgram.y" /* yacc.c:1645  */
    { setfname((yyvsp[0].cp)); }
#line 2599 "ytab.c" /* yacc.c:1645  */
    break;

  case 22:
#line 139 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 2605 "ytab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 151 "awkgram.y" /* yacc.c:1645  */
    { (yyval.i) = 0; }
#line 2611 "ytab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 156 "awkgram.y" /* yacc.c:1645  */
    { (yyval.i) = 0; }
#line 2617 "ytab.c" /* yacc.c:1645  */
    break;

  case 31:
#line 162 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = 0; }
#line 2623 "ytab.c" /* yacc.c:1645  */
    break;

  case 33:
#line 167 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = 0; }
#line 2629 "ytab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 168 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2635 "ytab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 172 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = notnull((yyvsp[0].p)); }
#line 2641 "ytab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 176 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2647 "ytab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 177 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2653 "ytab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 178 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = pa2stat((yyvsp[-3].p), (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2659 "ytab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 179 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = pa2stat((yyvsp[-6].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2665 "ytab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 180 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(PASTAT, NIL, (yyvsp[-1].p)); }
#line 2671 "ytab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 182 "awkgram.y" /* yacc.c:1645  */
    { beginloc = linkum(beginloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2677 "ytab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 184 "awkgram.y" /* yacc.c:1645  */
    { endloc = linkum(endloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2683 "ytab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 185 "awkgram.y" /* yacc.c:1645  */
    {infunc++;}
#line 2689 "ytab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 186 "awkgram.y" /* yacc.c:1645  */
    { infunc--; curfname=0; defn((Cell *)(yyvsp[-7].p), (yyvsp[-5].p), (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2695 "ytab.c" /* yacc.c:1645  */
    break;

  case 46:
#line 191 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2701 "ytab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 196 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2707 "ytab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 200 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2713 "ytab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 202 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2719 "ytab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 204 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2725 "ytab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 206 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2731 "ytab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 207 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2737 "ytab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 209 "awkgram.y" /* yacc.c:1645  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2746 "ytab.c" /* yacc.c:1645  */
    break;

  case 55:
#line 213 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2752 "ytab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 214 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2758 "ytab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 215 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2764 "ytab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 221 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2770 "ytab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 223 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2776 "ytab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 225 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2782 "ytab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 227 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2788 "ytab.c" /* yacc.c:1645  */
    break;

  case 64:
#line 228 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2794 "ytab.c" /* yacc.c:1645  */
    break;

  case 65:
#line 229 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2800 "ytab.c" /* yacc.c:1645  */
    break;

  case 66:
#line 230 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2806 "ytab.c" /* yacc.c:1645  */
    break;

  case 67:
#line 231 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2812 "ytab.c" /* yacc.c:1645  */
    break;

  case 68:
#line 232 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2818 "ytab.c" /* yacc.c:1645  */
    break;

  case 69:
#line 233 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2824 "ytab.c" /* yacc.c:1645  */
    break;

  case 70:
#line 234 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2830 "ytab.c" /* yacc.c:1645  */
    break;

  case 71:
#line 236 "awkgram.y" /* yacc.c:1645  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2839 "ytab.c" /* yacc.c:1645  */
    break;

  case 72:
#line 240 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2845 "ytab.c" /* yacc.c:1645  */
    break;

  case 73:
#line 241 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2851 "ytab.c" /* yacc.c:1645  */
    break;

  case 74:
#line 242 "awkgram.y" /* yacc.c:1645  */
    {
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (yyvsp[0].p), itonp((yyvsp[-2].i)), (yyvsp[-3].p)); }
#line 2859 "ytab.c" /* yacc.c:1645  */
    break;

  case 75:
#line 245 "awkgram.y" /* yacc.c:1645  */
    {
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (Node*)0, itonp((yyvsp[-1].i)), (yyvsp[-2].p)); }
#line 2867 "ytab.c" /* yacc.c:1645  */
    break;

  case 76:
#line 248 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2873 "ytab.c" /* yacc.c:1645  */
    break;

  case 79:
#line 254 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2879 "ytab.c" /* yacc.c:1645  */
    break;

  case 80:
#line 255 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2885 "ytab.c" /* yacc.c:1645  */
    break;

  case 82:
#line 260 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2891 "ytab.c" /* yacc.c:1645  */
    break;

  case 83:
#line 264 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = rectonode(); }
#line 2897 "ytab.c" /* yacc.c:1645  */
    break;

  case 85:
#line 266 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2903 "ytab.c" /* yacc.c:1645  */
    break;

  case 94:
#line 283 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(MATCH, NIL, rectonode(), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2909 "ytab.c" /* yacc.c:1645  */
    break;

  case 95:
#line 284 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 2915 "ytab.c" /* yacc.c:1645  */
    break;

  case 96:
#line 288 "awkgram.y" /* yacc.c:1645  */
    {startreg();}
#line 2921 "ytab.c" /* yacc.c:1645  */
    break;

  case 97:
#line 288 "awkgram.y" /* yacc.c:1645  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2927 "ytab.c" /* yacc.c:1645  */
    break;

  case 100:
#line 296 "awkgram.y" /* yacc.c:1645  */
    {
			if (safe) SYNTAX("print | is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2935 "ytab.c" /* yacc.c:1645  */
    break;

  case 101:
#line 299 "awkgram.y" /* yacc.c:1645  */
    {
			if (safe) SYNTAX("print >> is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2943 "ytab.c" /* yacc.c:1645  */
    break;

  case 102:
#line 302 "awkgram.y" /* yacc.c:1645  */
    {
			if (safe) SYNTAX("print > is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2951 "ytab.c" /* yacc.c:1645  */
    break;

  case 103:
#line 305 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat3((yyvsp[-1].i), (yyvsp[0].p), NIL, NIL); }
#line 2957 "ytab.c" /* yacc.c:1645  */
    break;

  case 104:
#line 306 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 2963 "ytab.c" /* yacc.c:1645  */
    break;

  case 105:
#line 307 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[0].p)), 0); }
#line 2969 "ytab.c" /* yacc.c:1645  */
    break;

  case 106:
#line 308 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = exptostat((yyvsp[0].p)); }
#line 2975 "ytab.c" /* yacc.c:1645  */
    break;

  case 107:
#line 309 "awkgram.y" /* yacc.c:1645  */
    { yyclearin; SYNTAX("illegal statement"); }
#line 2981 "ytab.c" /* yacc.c:1645  */
    break;

  case 110:
#line 318 "awkgram.y" /* yacc.c:1645  */
    { if (!inloop) SYNTAX("break illegal outside of loops");
				  (yyval.p) = stat1(BREAK, NIL); }
#line 2988 "ytab.c" /* yacc.c:1645  */
    break;

  case 111:
#line 320 "awkgram.y" /* yacc.c:1645  */
    {  if (!inloop) SYNTAX("continue illegal outside of loops");
				  (yyval.p) = stat1(CONTINUE, NIL); }
#line 2995 "ytab.c" /* yacc.c:1645  */
    break;

  case 112:
#line 322 "awkgram.y" /* yacc.c:1645  */
    {inloop++;}
#line 3001 "ytab.c" /* yacc.c:1645  */
    break;

  case 113:
#line 322 "awkgram.y" /* yacc.c:1645  */
    {--inloop;}
#line 3007 "ytab.c" /* yacc.c:1645  */
    break;

  case 114:
#line 323 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat2(DO, (yyvsp[-6].p), notnull((yyvsp[-2].p))); }
#line 3013 "ytab.c" /* yacc.c:1645  */
    break;

  case 115:
#line 324 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat1(EXIT, (yyvsp[-1].p)); }
#line 3019 "ytab.c" /* yacc.c:1645  */
    break;

  case 116:
#line 325 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat1(EXIT, NIL); }
#line 3025 "ytab.c" /* yacc.c:1645  */
    break;

  case 118:
#line 327 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat3(IF, (yyvsp[-3].p), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3031 "ytab.c" /* yacc.c:1645  */
    break;

  case 119:
#line 328 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat3(IF, (yyvsp[-1].p), (yyvsp[0].p), NIL); }
#line 3037 "ytab.c" /* yacc.c:1645  */
    break;

  case 120:
#line 329 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3043 "ytab.c" /* yacc.c:1645  */
    break;

  case 121:
#line 330 "awkgram.y" /* yacc.c:1645  */
    { if (infunc)
				SYNTAX("next is illegal inside a function");
			  (yyval.p) = stat1(NEXT, NIL); }
#line 3051 "ytab.c" /* yacc.c:1645  */
    break;

  case 122:
#line 333 "awkgram.y" /* yacc.c:1645  */
    { if (infunc)
				SYNTAX("nextfile is illegal inside a function");
			  (yyval.p) = stat1(NEXTFILE, NIL); }
#line 3059 "ytab.c" /* yacc.c:1645  */
    break;

  case 123:
#line 336 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat1(RETURN, (yyvsp[-1].p)); }
#line 3065 "ytab.c" /* yacc.c:1645  */
    break;

  case 124:
#line 337 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = stat1(RETURN, NIL); }
#line 3071 "ytab.c" /* yacc.c:1645  */
    break;

  case 126:
#line 339 "awkgram.y" /* yacc.c:1645  */
    {inloop++;}
#line 3077 "ytab.c" /* yacc.c:1645  */
    break;

  case 127:
#line 339 "awkgram.y" /* yacc.c:1645  */
    { --inloop; (yyval.p) = stat2(WHILE, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3083 "ytab.c" /* yacc.c:1645  */
    break;

  case 128:
#line 340 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = 0; }
#line 3089 "ytab.c" /* yacc.c:1645  */
    break;

  case 130:
#line 345 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = linkum((yyvsp[-1].p), (yyvsp[0].p)); }
#line 3095 "ytab.c" /* yacc.c:1645  */
    break;

  case 134:
#line 354 "awkgram.y" /* yacc.c:1645  */
    { (yyval.cp) = catstr((yyvsp[-1].cp), (yyvsp[0].cp)); }
#line 3101 "ytab.c" /* yacc.c:1645  */
    break;

  case 135:
#line 358 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(DIVEQ, (yyvsp[-3].p), (yyvsp[0].p)); }
#line 3107 "ytab.c" /* yacc.c:1645  */
    break;

  case 136:
#line 359 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(ADD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3113 "ytab.c" /* yacc.c:1645  */
    break;

  case 137:
#line 360 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(MINUS, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3119 "ytab.c" /* yacc.c:1645  */
    break;

  case 138:
#line 361 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(MULT, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3125 "ytab.c" /* yacc.c:1645  */
    break;

  case 139:
#line 362 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(DIVIDE, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3131 "ytab.c" /* yacc.c:1645  */
    break;

  case 140:
#line 363 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(MOD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3137 "ytab.c" /* yacc.c:1645  */
    break;

  case 141:
#line 364 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(POWER, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3143 "ytab.c" /* yacc.c:1645  */
    break;

  case 142:
#line 365 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(UMINUS, (yyvsp[0].p)); }
#line 3149 "ytab.c" /* yacc.c:1645  */
    break;

  case 143:
#line 366 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(UPLUS, (yyvsp[0].p)); }
#line 3155 "ytab.c" /* yacc.c:1645  */
    break;

  case 144:
#line 367 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 3161 "ytab.c" /* yacc.c:1645  */
    break;

  case 145:
#line 368 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[-2].i)), rectonode()); }
#line 3167 "ytab.c" /* yacc.c:1645  */
    break;

  case 146:
#line 369 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[-3].i)), (yyvsp[-1].p)); }
#line 3173 "ytab.c" /* yacc.c:1645  */
    break;

  case 147:
#line 370 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[0].i)), rectonode()); }
#line 3179 "ytab.c" /* yacc.c:1645  */
    break;

  case 148:
#line 371 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(CALL, celltonode((yyvsp[-2].cp),CVAR), NIL); }
#line 3185 "ytab.c" /* yacc.c:1645  */
    break;

  case 149:
#line 372 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(CALL, celltonode((yyvsp[-3].cp),CVAR), (yyvsp[-1].p)); }
#line 3191 "ytab.c" /* yacc.c:1645  */
    break;

  case 150:
#line 373 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(CLOSE, (yyvsp[0].p)); }
#line 3197 "ytab.c" /* yacc.c:1645  */
    break;

  case 151:
#line 374 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(PREDECR, (yyvsp[0].p)); }
#line 3203 "ytab.c" /* yacc.c:1645  */
    break;

  case 152:
#line 375 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(PREINCR, (yyvsp[0].p)); }
#line 3209 "ytab.c" /* yacc.c:1645  */
    break;

  case 153:
#line 376 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(POSTDECR, (yyvsp[-1].p)); }
#line 3215 "ytab.c" /* yacc.c:1645  */
    break;

  case 154:
#line 377 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(POSTINCR, (yyvsp[-1].p)); }
#line 3221 "ytab.c" /* yacc.c:1645  */
    break;

  case 155:
#line 378 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(GETLINE, (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 3227 "ytab.c" /* yacc.c:1645  */
    break;

  case 156:
#line 379 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(GETLINE, NIL, itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 3233 "ytab.c" /* yacc.c:1645  */
    break;

  case 157:
#line 380 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(GETLINE, (yyvsp[0].p), NIL, NIL); }
#line 3239 "ytab.c" /* yacc.c:1645  */
    break;

  case 158:
#line 381 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(GETLINE, NIL, NIL, NIL); }
#line 3245 "ytab.c" /* yacc.c:1645  */
    break;

  case 159:
#line 383 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(INDEX, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3251 "ytab.c" /* yacc.c:1645  */
    break;

  case 160:
#line 385 "awkgram.y" /* yacc.c:1645  */
    { SYNTAX("index() doesn't permit regular expressions");
		  (yyval.p) = op2(INDEX, (yyvsp[-3].p), (Node*)(yyvsp[-1].s)); }
#line 3258 "ytab.c" /* yacc.c:1645  */
    break;

  case 161:
#line 387 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3264 "ytab.c" /* yacc.c:1645  */
    break;

  case 162:
#line 389 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa((yyvsp[-1].s), 1)); }
#line 3270 "ytab.c" /* yacc.c:1645  */
    break;

  case 163:
#line 391 "awkgram.y" /* yacc.c:1645  */
    { if (constnode((yyvsp[-1].p)))
			(yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa(strnode((yyvsp[-1].p)), 1));
		  else
			(yyval.p) = op3(MATCHFCN, (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3279 "ytab.c" /* yacc.c:1645  */
    break;

  case 164:
#line 395 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CCON); }
#line 3285 "ytab.c" /* yacc.c:1645  */
    break;

  case 165:
#line 397 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (yyvsp[-1].p), (Node*)STRING); }
#line 3291 "ytab.c" /* yacc.c:1645  */
    break;

  case 166:
#line 399 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (Node*)makedfa((yyvsp[-1].s), 1), (Node *)REGEXPR); }
#line 3297 "ytab.c" /* yacc.c:1645  */
    break;

  case 167:
#line 401 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-3].p), makearr((yyvsp[-1].p)), NIL, (Node*)STRING); }
#line 3303 "ytab.c" /* yacc.c:1645  */
    break;

  case 168:
#line 402 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1((yyvsp[-3].i), (yyvsp[-1].p)); }
#line 3309 "ytab.c" /* yacc.c:1645  */
    break;

  case 169:
#line 403 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CCON); }
#line 3315 "ytab.c" /* yacc.c:1645  */
    break;

  case 170:
#line 405 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa((yyvsp[-3].s), 1), (yyvsp[-1].p), rectonode()); }
#line 3321 "ytab.c" /* yacc.c:1645  */
    break;

  case 171:
#line 407 "awkgram.y" /* yacc.c:1645  */
    { if (constnode((yyvsp[-3].p)))
			(yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa(strnode((yyvsp[-3].p)), 1), (yyvsp[-1].p), rectonode());
		  else
			(yyval.p) = op4((yyvsp[-5].i), (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p), rectonode()); }
#line 3330 "ytab.c" /* yacc.c:1645  */
    break;

  case 172:
#line 412 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa((yyvsp[-5].s), 1), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3336 "ytab.c" /* yacc.c:1645  */
    break;

  case 173:
#line 414 "awkgram.y" /* yacc.c:1645  */
    { if (constnode((yyvsp[-5].p)))
			(yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa(strnode((yyvsp[-5].p)), 1), (yyvsp[-3].p), (yyvsp[-1].p));
		  else
			(yyval.p) = op4((yyvsp[-7].i), (Node *)1, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3345 "ytab.c" /* yacc.c:1645  */
    break;

  case 174:
#line 419 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3351 "ytab.c" /* yacc.c:1645  */
    break;

  case 175:
#line 421 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-3].p), (yyvsp[-1].p), NIL); }
#line 3357 "ytab.c" /* yacc.c:1645  */
    break;

  case 178:
#line 427 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op2(ARRAY, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 3363 "ytab.c" /* yacc.c:1645  */
    break;

  case 179:
#line 428 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(INDIRECT, celltonode((yyvsp[0].cp), CVAR)); }
#line 3369 "ytab.c" /* yacc.c:1645  */
    break;

  case 180:
#line 429 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(INDIRECT, (yyvsp[0].p)); }
#line 3375 "ytab.c" /* yacc.c:1645  */
    break;

  case 181:
#line 433 "awkgram.y" /* yacc.c:1645  */
    { arglist = (yyval.p) = 0; }
#line 3381 "ytab.c" /* yacc.c:1645  */
    break;

  case 182:
#line 434 "awkgram.y" /* yacc.c:1645  */
    { arglist = (yyval.p) = celltonode((yyvsp[0].cp),CVAR); }
#line 3387 "ytab.c" /* yacc.c:1645  */
    break;

  case 183:
#line 435 "awkgram.y" /* yacc.c:1645  */
    {
			checkdup((yyvsp[-2].p), (yyvsp[0].cp));
			arglist = (yyval.p) = linkum((yyvsp[-2].p),celltonode((yyvsp[0].cp),CVAR)); }
#line 3395 "ytab.c" /* yacc.c:1645  */
    break;

  case 184:
#line 441 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CVAR); }
#line 3401 "ytab.c" /* yacc.c:1645  */
    break;

  case 185:
#line 442 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(ARG, itonp((yyvsp[0].i))); }
#line 3407 "ytab.c" /* yacc.c:1645  */
    break;

  case 186:
#line 443 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = op1(VARNF, (Node *) (yyvsp[0].cp)); }
#line 3413 "ytab.c" /* yacc.c:1645  */
    break;

  case 187:
#line 448 "awkgram.y" /* yacc.c:1645  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 3419 "ytab.c" /* yacc.c:1645  */
    break;


#line 3423 "ytab.c" /* yacc.c:1645  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
#line 451 "awkgram.y" /* yacc.c:1903  */


void setfname(Cell *p)
{
	if (isarr(p))
		SYNTAX("%s is an array, not a function", p->nval);
	else if (isfcn(p))
		SYNTAX("you can't define function %s more than once", p->nval);
	curfname = p->nval;
}

int constnode(Node *p)
{
	return isvalue(p) && ((Cell *) (p->narg[0]))->csub == CCON;
}

char *strnode(Node *p)
{
	return ((Cell *)(p->narg[0]))->sval;
}

Node *notnull(Node *n)
{
	switch (n->nobj) {
	case LE: case LT: case EQ: case NE: case GT: case GE:
	case BOR: case AND: case NOT:
		return n;
	default:
		return op2(NE, n, nullnode);
	}
}

void checkdup(Node *vl, Cell *cp)	/* check if name already in list */
{
	char *s = cp->nval;
	for ( ; vl; vl = vl->nnext) {
		if (strcmp(s, ((Cell *)(vl->narg[0]))->nval) == 0) {
			SYNTAX("duplicate argument %s", s);
			break;
		}
	}
}
