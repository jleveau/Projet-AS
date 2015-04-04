/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser2.y" /* yacc.c:339  */


#include "html.h"
#include "tools.h"

//mieux vaut ne pas utiliser deftype parce que ca arrete la vérification de type et certains erreurs peut être ignorés??




#line 77 "parser2.tab.c" /* yacc.c:339  */

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
   by #include "parser2.tab.h".  */
#ifndef YY_YY_PARSER2_TAB_H_INCLUDED
# define YY_YY_PARSER2_TAB_H_INCLUDED
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
    KEYWORD = 258,
    TYPE = 259,
    IDENTIFIER = 260,
    I_CONSTANT = 261,
    F_CONSTANT = 262,
    STRING_LITERAL = 263,
    FUNC_NAME = 264,
    SIZEOF = 265,
    PTR_OP = 266,
    INC_OP = 267,
    DEC_OP = 268,
    LEFT_OP = 269,
    RIGHT_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    AND_OP = 275,
    OR_OP = 276,
    MUL_ASSIGN = 277,
    DIV_ASSIGN = 278,
    MOD_ASSIGN = 279,
    ADD_ASSIGN = 280,
    SUB_ASSIGN = 281,
    LEFT_ASSIGN = 282,
    RIGHT_ASSIGN = 283,
    AND_ASSIGN = 284,
    XOR_ASSIGN = 285,
    OR_ASSIGN = 286,
    TYPEDEF_NAME = 287,
    ENUMERATION_CONSTANT = 288,
    POINT_VIRGULE = 289,
    ACCO_OUV = 290,
    ACCO_FER = 291,
    VIRGULE = 292,
    DEUXPOINTS = 293,
    EGAL = 294,
    PAR_OUV = 295,
    PAR_FER = 296,
    CRO_OUV = 297,
    CRO_FER = 298,
    POINT = 299,
    ECOMMERCIAL = 300,
    POINT_EXCLA = 301,
    EQUIVALENT = 302,
    MOINS = 303,
    PLUS = 304,
    FOIS = 305,
    DIVISE = 306,
    POUCENT = 307,
    INFERIEUR = 308,
    SUPERIEUR = 309,
    PUISSANCE = 310,
    TILT = 311,
    POINT_INTERRO = 312,
    POURCENT = 313,
    TYPEDEF = 314,
    EXTERN = 315,
    STATIC = 316,
    AUTO = 317,
    REGISTER = 318,
    INLINE = 319,
    CONST = 320,
    RESTRICT = 321,
    VOLATILE = 322,
    ATOMIC = 323,
    BOOL = 324,
    CHAR = 325,
    SHORT = 326,
    INT = 327,
    LONG = 328,
    SIGNED = 329,
    UNSIGNED = 330,
    FLOAT = 331,
    DOUBLE = 332,
    VOID = 333,
    COMPLEX = 334,
    IMAGINARY = 335,
    STRUCT = 336,
    UNION = 337,
    ENUM = 338,
    ELLIPSIS = 339,
    CASE = 340,
    DEFAULT = 341,
    IF = 342,
    ELSE = 343,
    SWITCH = 344,
    WHILE = 345,
    DO = 346,
    FOR = 347,
    GOTO = 348,
    RETURN = 349,
    BREAK = 350,
    CONTINUE = 351,
    ALIGNAS = 352,
    ALIGNOF = 353,
    GENERIC = 354,
    NORETURN = 355,
    STATIC_ASSERT = 356,
    THREAD_LOCAL = 357
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parser2.y" /* yacc.c:355  */

 char* nom;
 

#line 225 "parser2.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER2_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "parser2.tab.c" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   357

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    68,    69,
      70,    71,    87,    88,    89,    90,    91,    95,    96,    97,
     101,   105,   106,   110,   114,   115,   119,   120,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   137,   138,
     142,   143,   144,   145,   146,   147,   148,   152,   153,   154,
     155,   156,   157,   161,   162,   166,   167,   168,   169,   173,
     174,   175,   179,   180,   181,   185,   186,   187,   188,   189,
     193,   194,   195,   199,   200,   204,   205,   209,   210,   214,
     215,   219,   220,   224,   225,   229,   230,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   248,   249,
     253,   257,   258,   259,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   276,   277,   281,   282,   286,   287,
     288,   289,   290,   291,   297,   298,   299,   303,   304,   308,
     309,   313,   314,   315,   319,   320,   321,   322,   326,   327,
     331,   332,   333,   337,   338,   339,   340,   341,   345,   346,
     350,   351,   355,   360,   361,   365,   366,   370,   371,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   392,   393,   394,   395,   399,   400,   405,
     406,   410,   411,   415,   416,   417,   421,   422,   426,   427,
     431,   432,   433,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   461,   462,   463,   467,   468,   469,
     470,   474,   478,   479,   483,   484,   488,   492,   493,   494,
     495,   496,   497,   501,   502,   503,   507,   508,   512,   513,
     517,   518,   522,   523,   527,   528,   529,   533,   534,   535,
     536,   537,   538,   542,   543,   544,   545,   546,   550,   551,
     555,   556,   560,   561,   565,   566
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEYWORD", "TYPE", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "POINT_VIRGULE", "ACCO_OUV", "ACCO_FER",
  "VIRGULE", "DEUXPOINTS", "EGAL", "PAR_OUV", "PAR_FER", "CRO_OUV",
  "CRO_FER", "POINT", "ECOMMERCIAL", "POINT_EXCLA", "EQUIVALENT", "MOINS",
  "PLUS", "FOIS", "DIVISE", "POUCENT", "INFERIEUR", "SUPERIEUR",
  "PUISSANCE", "TILT", "POINT_INTERRO", "POURCENT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "ATOMIC", "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "RETURN", "BREAK", "CONTINUE", "ALIGNAS", "ALIGNOF",
  "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "$accept",
  "type_specifier", "type_qualifier", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "function_specifier", "alignment_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357
};
# endif

#define YYPACT_NINF -378

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-378)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1952,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,    -3,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,   128,    17,  -378,    39,
    -378,  2109,  2109,  -378,    63,  2109,  -378,   145,  -378,  -378,
    2109,  2109,  -378,   363,  -378,  -378,  2287,    73,    50,   907,
    1698,  -378,  -378,  -378,  -378,   126,   152,   121,  -378,  1848,
      21,    51,  -378,    79,  2213,  -378,  -378,  -378,  -378,  2287,
    2287,    24,    80,    50,  -378,    87,   229,  -378,  -378,  -378,
    -378,  -378,  -378,  1744,  1755,  1755,  -378,   907,  -378,  -378,
    -378,  -378,  -378,  -378,    92,   134,  -378,  -378,  -378,  -378,
     156,  -378,  1698,  -378,   114,   112,   264,   124,   265,   141,
     139,   147,   203,    15,  -378,   188,   194,   200,   228,  -378,
    -378,  -378,   152,  -378,   126,   527,  1454,  -378,    63,  -378,
    1900,   828,  1050,    21,  2213,  1743,  -378,    37,  -378,  -378,
    -378,  1796,  1096,   142,  -378,   182,  -378,   251,  1698,  -378,
      33,   907,  -378,   907,  -378,  -378,   350,  -378,  -378,    13,
     230,  2287,  1698,   277,  -378,  -378,  1500,  1698,   280,  -378,
    1698,  1698,  1698,  1698,  1698,  1698,  1698,  1698,  1698,  1698,
    1698,  1698,  1698,  1698,  1698,  1698,  1698,  1698,  1698,  -378,
    -378,   284,  -378,  -378,  -378,  -378,   255,   258,  -378,  -378,
    1698,   270,   269,   272,   278,   986,   282,   312,  1522,   286,
     289,   178,  -378,  -378,  -378,  -378,   625,  -378,  -378,  -378,
    -378,  -378,  1399,  -378,  -378,  -378,  -378,  -378,  -378,    85,
     283,   288,  -378,   138,  -378,   285,  1275,   290,  1125,  2161,
    -378,  -378,  -378,  1698,   224,  -378,   291,  -378,   294,   296,
    -378,   295,  1275,   297,  1171,   182,  2004,  1200,  -378,    42,
    -378,  -378,  -378,   300,   302,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  1698,  1698,  -378,  1568,
     304,   309,  -378,  -378,   144,  -378,     9,  -378,  -378,  -378,
    -378,   114,   114,   112,   112,   264,   264,   264,   264,   124,
     124,   265,   141,   139,   147,   203,   252,   310,   986,   293,
     986,  1698,  1698,  1698,   237,   723,   298,  -378,   225,  -378,
    -378,  -378,  -378,  -378,  1698,   347,  -378,   262,  1454,   104,
    -378,   776,  -378,    20,  -378,  -378,  2056,   352,  -378,  -378,
     315,  1275,  -378,  -378,   316,  1698,   317,  -378,  -378,  -378,
     107,  1698,  -378,  -378,  -378,   318,  1275,  -378,  -378,  1698,
     319,  -378,   323,  -378,   322,  1275,   325,  1246,  -378,   331,
     331,  -378,  -378,  1399,  -378,  -378,  2265,  1698,  -378,  -378,
    1698,   336,  -378,   986,  -378,   146,   154,   172,   346,  1623,
    1623,  -378,  -378,   344,  -378,  -378,  1321,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,   348,  -378,   351,  -378,  -378,  -378,
    -378,   354,   356,  -378,  -378,  -378,   357,  1275,  -378,  -378,
    1698,   358,   266,   364,   173,  -378,   365,  -378,  -378,  -378,
    -378,   986,   986,   986,  1698,  1641,  1687,  -378,  -378,  -378,
    1454,  -378,  -378,  -378,  -378,  -378,   361,   362,  -378,  -378,
    1381,  1698,  2265,  -378,  1698,   321,  -378,  -378,   193,   986,
     195,   986,   219,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
     986,   377,  -378,   986,  -378,   986,  -378,  -378,  -378,  -378
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    17,   128,   129,   130,   132,   133,   163,    18,    19,
      20,    21,    11,     3,     4,     5,     6,     9,    10,     7,
       8,     2,    12,    13,   137,   138,     0,     0,   164,     0,
     131,   117,   119,   271,     0,   115,    15,     0,    16,    14,
     121,   123,   113,     0,   268,   270,     0,   157,     0,     0,
       0,   116,   118,   169,   111,     0,   186,     0,   124,   127,
     168,     0,   114,   136,     0,   120,   122,     1,   269,   145,
     147,   199,     0,     0,    30,   161,     0,   158,    22,    27,
      28,    31,    32,     0,     0,     0,    29,     0,    57,    62,
      61,    60,    59,    58,     0,     0,    38,    23,    24,    26,
      50,    63,     0,    65,    69,    72,    75,    80,    83,    85,
      87,    89,    91,    93,   110,     0,     0,     0,     0,    21,
     187,   185,   184,   112,     0,     0,     0,   274,     0,   273,
       0,     0,     0,   167,     0,     0,   139,     0,   143,   144,
     146,     0,     0,   201,   198,   202,   162,     0,     0,   153,
       0,     0,    54,     0,    51,    52,    63,    95,   108,     0,
       0,     0,     0,     0,    44,    45,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     165,     0,   170,   188,   183,   125,   127,    22,   252,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   251,   237,   238,     0,   248,   239,   240,
     241,   242,     0,   226,   126,   275,   272,   196,   181,   195,
       0,   190,   191,     0,   171,    58,     0,     0,     0,     0,
     134,   140,   141,     0,     0,   148,   152,   220,     0,     0,
     204,    58,     0,     0,     0,   200,     0,     0,   155,     0,
     160,   154,   159,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    97,     0,     0,    25,     0,
       0,     0,    43,    40,     0,    48,     0,    42,    66,    67,
      68,    71,    70,    73,    74,    78,    79,    76,    77,    81,
      82,    84,    86,    88,    90,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,   265,
     264,   253,   247,   249,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,     0,   182,   172,
       0,     0,   179,   178,    58,     0,     0,   135,   150,   142,
       0,     0,   221,   203,   205,     0,     0,   211,   210,     0,
       0,   222,     0,   212,    58,     0,     0,     0,   156,    55,
       0,    96,   109,     0,    64,    56,     0,     0,    41,    39,
       0,     0,   243,     0,   245,     0,     0,     0,     0,     0,
       0,   263,   267,     0,   235,   224,     0,   227,   231,   233,
     189,   192,   197,   174,     0,   175,     0,   177,   149,   151,
     207,     0,     0,   209,   223,   213,     0,     0,   219,   218,
       0,     0,     0,     0,     0,    34,     0,    49,    94,   236,
     244,     0,     0,     0,     0,     0,     0,   234,   225,   230,
       0,   173,   176,   206,   208,   215,     0,     0,   216,    46,
       0,     0,     0,    33,     0,   255,   256,   257,     0,     0,
       0,     0,     0,   229,   214,   217,    47,    37,    35,    36,
       0,     0,   261,     0,   259,     0,   254,   258,   262,   260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,   -42,   -46,  -378,  -378,  -378,  -378,  -378,  -378,   -62,
    -378,  -378,    68,  -378,   -72,   127,   129,    97,   133,   231,
     232,   227,   234,   226,  -378,   -44,   131,  -378,   -86,   -38,
     -45,     8,  -378,   326,  -378,  -378,  -378,   281,  -102,   -11,
    -378,    67,  -378,   345,  -129,  -378,  -378,  -378,    -8,   -52,
     -40,   -98,  -114,  -378,   111,  -378,   -17,   -56,  -132,  -124,
      48,  -377,  -378,   120,   -51,   -77,  -378,   -24,  -378,   235,
    -295,  -378,  -378,  -378,  -378,   409,  -378,  -378
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    96,    97,    75,    98,    99,   424,   425,
     100,   284,   156,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   157,   158,   276,   211,   115,
      33,   128,    57,    58,    35,    36,    37,   135,   136,    71,
     244,   245,    38,    76,    77,    39,    40,    41,   118,    60,
      61,   122,   248,   231,   232,   233,   426,   249,   145,   326,
     327,   328,   329,   330,    42,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    43,    44,    45,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      70,   159,   224,    70,    69,   114,   114,    69,    34,   133,
     120,   255,   117,   138,   127,   144,   121,   230,    70,   440,
     390,   262,    69,    70,    70,    53,    59,    69,    69,    72,
     169,   143,   116,   241,   238,   129,   187,    46,    74,    51,
      52,    70,    53,    62,   254,    69,   277,    74,    65,    66,
     277,    34,   379,   137,   278,    74,    53,    49,   139,   140,
     331,   131,   142,   132,   141,   159,   142,   159,    53,   261,
     160,   242,   188,   440,    56,   243,   193,    55,   368,    50,
     212,   286,   194,   138,   138,   225,   120,    56,    70,    70,
      53,    55,    69,    69,   435,   436,   120,    54,   288,   289,
     290,   143,   306,    55,   114,    70,   226,    70,    73,    69,
     260,    69,    53,    56,   134,    70,   196,   101,   101,    69,
     196,   146,   318,   137,   137,   331,   148,   142,   314,   246,
     262,    53,   161,    47,   263,    56,   264,   241,   341,   229,
     177,   178,   362,   398,   280,   243,   324,    55,   325,   229,
      63,   152,   154,   155,   356,   123,   114,    56,   124,   367,
     173,   174,   309,    48,   170,   171,    55,   163,   164,   165,
     101,   212,   172,   334,   162,   337,    56,   179,   180,   338,
      64,   377,   141,   277,   142,   378,   183,   431,   138,   333,
     120,   277,   193,    70,   184,   432,   166,    69,   167,   114,
     168,   255,    56,   185,   397,   348,   120,   374,   193,   277,
     452,   120,   321,   433,   453,   277,   101,     8,     9,    10,
     119,   332,   256,   186,   257,   385,   386,   387,   137,   189,
     277,   382,   277,   384,   471,   190,   473,   191,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   277,   223,   349,   392,
     475,   350,   277,   237,   229,   149,   150,   417,   101,   192,
     389,   279,   439,   253,   295,   296,   297,   298,   175,   176,
     114,   133,   282,   181,   182,   287,   393,   258,   259,   277,
     380,   333,   307,   281,   126,   193,   308,   285,   395,   396,
     291,   292,   449,   450,   293,   294,   430,   114,   310,   311,
     193,   101,   312,   409,   299,   300,   463,   316,   313,   120,
     319,   193,   315,   320,   335,   336,   439,   388,   339,   351,
      70,   383,   391,   342,    69,   352,   428,   353,   354,   229,
     357,   369,   246,   370,   229,   375,   376,   101,   458,   460,
     462,   381,   394,   223,   455,   456,   457,   402,   403,   405,
     407,   410,   413,    67,   414,   415,   373,   340,   418,   346,
     429,   193,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   472,   355,   474,   360,   434,   437,   366,   275,
     468,   441,   101,   476,   442,     1,   478,   443,   479,   444,
     445,   448,   451,   454,   464,   465,    70,   371,   372,   470,
      69,   477,   303,   305,   301,   239,   302,   408,   147,   101,
     304,   422,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   401,   101,   399,
     195,   323,    68,     0,     0,     0,     0,     0,     0,   223,
      27,     0,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,   404,     0,     0,     0,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   411,     0,     0,
     412,     0,     0,     0,     0,     0,   416,     0,   421,     0,
       0,     0,     0,     0,   223,     0,     0,     0,   427,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   197,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,   447,     0,     0,     0,     0,     0,     0,     0,     1,
      86,   198,   125,   199,     0,     0,     0,    87,     0,     0,
       0,   223,    88,    89,    90,    91,    92,    93,     0,     0,
       0,   223,   467,     0,     0,   469,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   200,   201,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,    27,    94,    95,    28,    29,    30,
     197,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    86,   198,
     125,   322,     0,     0,     0,    87,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     200,   201,   202,     0,   203,   204,   205,   206,   207,   208,
     209,   210,    27,    94,    95,    28,    29,    30,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    86,   198,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,    53,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     1,     0,
       0,     0,     0,     0,     0,     0,   331,   247,   142,     0,
      27,    94,    95,    28,    29,    30,    56,     0,     0,     0,
       0,     0,     0,   227,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,    27,     0,     0,    28,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,    27,     0,     0,    28,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      86,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   197,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
     198,   125,     0,     0,     0,     0,    87,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,   200,   201,   202,     0,   203,   204,   205,   206,   207,
     208,   209,   210,    86,    94,    95,     0,     0,     0,     0,
      87,     0,     0,   234,     0,    88,    89,    90,    91,    92,
     235,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,   236,     0,     0,     0,     8,     9,    10,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      78,    79,    80,    81,    82,    83,    87,    84,    85,   250,
       0,    88,    89,    90,    91,    92,   251,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,   252,    86,     0,
       0,     8,     9,    10,   119,    87,     0,     0,   343,     0,
      88,    89,    90,    91,    92,   344,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,   345,     0,     0,     0,
       8,     9,    10,   119,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    78,    79,    80,    81,    82,
      83,    87,    84,    85,   358,     0,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,   359,    86,     0,     0,     8,     9,    10,   119,
      87,     0,     0,   363,     0,    88,    89,    90,    91,    92,
     364,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,   365,     0,     0,     0,     8,     9,    10,   119,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      78,    79,    80,    81,    82,    83,    87,    84,    85,   419,
       0,    88,    89,    90,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,   420,    86,     0,
       0,     8,     9,    10,   119,    87,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       8,     9,    10,   119,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,   222,   438,     0,     0,
       0,    87,     0,   324,     0,   325,    88,    89,    90,    91,
      92,    93,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,    86,     0,   222,   466,     0,    94,
      95,    87,     0,   324,     0,   325,    88,    89,    90,    91,
      92,    93,    86,     0,   222,     0,     0,     0,     0,    87,
       0,   324,     0,   325,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    86,     0,   222,
       0,     0,     0,     0,    87,     0,     0,    94,    95,    88,
      89,    90,    91,    92,    93,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
      87,   283,     0,     0,     0,    88,    89,    90,    91,    92,
      93,     0,    94,    95,     0,    86,   317,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,    86,     0,   373,     0,     0,     0,     0,    87,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,    86,   198,     0,     0,
       0,     0,     0,    87,     0,     0,    94,    95,    88,    89,
      90,    91,    92,    93,    86,     0,     0,     0,     0,     0,
       0,    87,   459,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    94,    95,     0,     0,     0,     0,    87,   461,     0,
       0,    86,    88,    89,    90,    91,    92,    93,    87,    94,
      95,     0,     0,    88,    89,    90,    91,    92,    93,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     1,     0,    86,     0,   240,
       0,     0,     0,     0,   151,    94,    95,     0,    86,    88,
      89,    90,    91,    92,    93,   153,    94,    95,     0,     0,
      88,    89,    90,    91,    92,    93,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     1,     0,
       0,     0,     0,     0,     0,     0,   141,   247,   142,     0,
       0,     0,    94,    95,    29,     0,    56,     0,     0,     0,
       0,     0,     0,    94,    95,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,   125,     0,     0,     0,   126,     0,     0,
       0,     0,     0,    27,     0,     0,    28,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,   361,     0,     0,     0,    27,
       0,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    28,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     400,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    28,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    28,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   423,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26
};

static const yytype_int16 yycheck[] =
{
      46,    87,   126,    49,    46,    49,    50,    49,     0,    61,
      56,   143,    50,    64,    59,    71,    56,   131,    64,   396,
     315,   150,    64,    69,    70,     5,    34,    69,    70,    46,
     102,    71,    49,   135,   132,    59,    21,    40,     5,    31,
      32,    87,     5,    35,   142,    87,    37,     5,    40,    41,
      37,    43,    43,    64,    41,     5,     5,    40,    69,    70,
      40,    40,    42,    42,    40,   151,    42,   153,     5,    36,
      87,    34,    57,   450,    50,    38,   122,    40,    36,    40,
     125,   167,   122,   134,   135,   130,   132,    50,   134,   135,
       5,    40,   134,   135,   389,   390,   142,    34,   170,   171,
     172,   141,   188,    40,   148,   151,   130,   153,    35,   151,
     148,   153,     5,    50,    35,   161,   124,    49,    50,   161,
     128,    41,   208,   134,   135,    40,    39,    42,   205,   137,
     259,     5,    40,     5,   151,    50,   153,   239,   236,   131,
      16,    17,   256,    39,   161,    38,    42,    40,    44,   141,
       5,    83,    84,    85,   252,    34,   200,    50,    37,   257,
      48,    49,   200,    35,    50,    51,    40,    11,    12,    13,
     102,   216,    58,   229,    40,    37,    50,    53,    54,    41,
      35,    37,    40,    37,    42,    41,    45,    41,   239,   229,
     236,    37,   238,   239,    55,    41,    40,   239,    42,   243,
      44,   333,    50,    56,   328,   243,   252,   279,   254,    37,
      37,   257,    34,    41,    41,    37,   148,    65,    66,    67,
      68,   229,    40,    20,    42,   311,   312,   313,   239,    41,
      37,   308,    37,   310,    41,    41,    41,    37,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    37,   126,    34,    34,
      41,    37,    37,   132,   256,    36,    37,   365,   200,    41,
     315,    41,   396,   142,   177,   178,   179,   180,    14,    15,
     324,   333,     5,    18,    19,     5,   324,    36,    37,    37,
      38,   331,     8,   162,    39,   341,    38,   166,    36,    37,
     173,   174,    36,    37,   175,   176,   383,   351,    38,    40,
     356,   243,    40,   351,   181,   182,   440,     5,    40,   365,
      34,   367,    40,    34,    41,    37,   450,    90,    43,    38,
     376,    38,    34,    43,   376,    41,   380,    41,    43,   331,
      43,    41,   350,    41,   336,    41,    37,   279,   434,   435,
     436,    41,     5,   222,   431,   432,   433,     5,    43,    43,
      43,    43,    43,     0,    41,    43,    35,   236,    43,   238,
      34,   417,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   459,   252,   461,   254,    40,    43,   257,    39,
     452,    43,   324,   470,    43,    32,   473,    43,   475,    43,
      43,    43,    38,    38,    43,    43,   452,   276,   277,    88,
     452,    34,   185,   187,   183,   134,   184,   350,    73,   351,
     186,   373,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   336,   380,   329,
     124,   216,    43,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,
     359,    -1,    -1,    -1,    -1,    -1,   365,    -1,   367,    -1,
      -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,
      -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    -1,    -1,
      -1,   440,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,   450,   451,    -1,    -1,   454,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    86,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      97,    98,    99,   100,   101,   102,    50,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    97,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    33,    98,    99,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
      50,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       5,     6,     7,     8,     9,    10,    40,    12,    13,    43,
      -1,    45,    46,    47,    48,    49,    50,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    33,    -1,
      -1,    65,    66,    67,    68,    40,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,     5,     6,     7,     8,     9,
      10,    40,    12,    13,    43,    -1,    45,    46,    47,    48,
      49,    50,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    33,    -1,    -1,    65,    66,    67,    68,
      40,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
      50,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       5,     6,     7,     8,     9,    10,    40,    12,    13,    43,
      -1,    45,    46,    47,    48,    49,    50,    -1,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    33,    -1,
      -1,    65,    66,    67,    68,    40,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    33,    -1,    35,    36,    -1,    98,
      99,    40,    -1,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    98,    99,    45,
      46,    47,    48,    49,    50,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    33,    12,    13,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    -1,    98,    99,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      98,    99,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    98,    99,    45,    46,
      47,    48,    49,    50,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    98,    99,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    33,    45,    46,    47,    48,    49,    50,    40,    98,
      99,    -1,    -1,    45,    46,    47,    48,    49,    50,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    33,    -1,    36,
      -1,    -1,    -1,    -1,    40,    98,    99,    -1,    33,    45,
      46,    47,    48,    49,    50,    40,    98,    99,    -1,    -1,
      45,    46,    47,    48,    49,    50,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    98,    99,   101,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      32,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    97,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,   100,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,   100,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    97,   100,   101,
     102,   104,   105,   133,   134,   137,   138,   139,   145,   148,
     149,   150,   167,   177,   178,   179,    40,     5,    35,    40,
      40,   134,   134,     5,    34,    40,    50,   135,   136,   151,
     152,   153,   134,     5,    35,   134,   134,     0,   178,   104,
     105,   142,   159,    35,     5,   108,   146,   147,     5,     6,
       7,     8,     9,    10,    12,    13,    33,    40,    45,    46,
      47,    48,    49,    50,    98,    99,   106,   107,   109,   110,
     113,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   132,   159,   132,   151,    68,
     105,   153,   154,    34,    37,    35,    39,   133,   134,   170,
     180,    40,    42,   152,    35,   140,   141,   142,   167,   142,
     142,    40,    42,   153,   160,   161,    41,   146,    39,    36,
      37,    40,   115,    40,   115,   115,   115,   128,   129,   131,
     159,    40,    40,    11,    12,    13,    40,    42,    44,   117,
      50,    51,    58,    48,    49,    14,    15,    16,    17,    53,
      54,    18,    19,    45,    55,    56,    20,    21,    57,    41,
      41,    37,    41,   105,   153,   136,   151,     5,    34,    36,
      85,    86,    87,    89,    90,    91,    92,    93,    94,    95,
      96,   131,   133,   168,   169,   170,   171,   172,   173,   174,
     175,   176,    35,   129,   162,   133,   170,     5,    41,   134,
     155,   156,   157,   158,    43,    50,    61,   129,   154,   140,
      36,   141,    34,    38,   143,   144,   151,    41,   155,   160,
      43,    50,    61,   129,   154,   161,    40,    42,    36,    37,
     132,    36,   147,   159,   159,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    39,   130,    37,    41,    41,
     159,   129,     5,    41,   114,   129,   131,     5,   117,   117,
     117,   118,   118,   119,   119,   120,   120,   120,   120,   121,
     121,   122,   123,   124,   125,   126,   131,     8,    38,   132,
      38,    40,    40,    40,   168,    40,     5,    34,   131,    34,
      34,    34,    36,   172,    42,    44,   162,   163,   164,   165,
     166,    40,   151,   153,   160,    41,    37,    37,    41,    43,
     129,   154,    43,    43,    50,    61,   129,    36,   132,    34,
      37,    38,    41,    41,    43,   129,   154,    43,    43,    61,
     129,    41,   155,    43,    50,    61,   129,   154,    36,    41,
      41,   129,   129,    35,   117,    41,    37,    37,    41,    43,
      38,    41,   168,    38,   168,   131,   131,   131,    90,   133,
     173,    34,    34,   132,     5,    36,    37,   162,    39,   166,
      84,   157,     5,    43,   129,    43,   129,    43,   144,   132,
      43,   129,   129,    43,    41,    43,   129,   154,    43,    43,
      61,   129,   163,    86,   111,   112,   159,   129,   128,    34,
     168,    41,    41,    41,    40,   173,   173,    43,    36,   162,
     164,    43,    43,    43,    43,    43,   129,   129,    43,    36,
      37,    38,    37,    41,    38,   168,   168,   168,   131,    41,
     131,    41,   131,   162,    43,    43,    36,   129,   112,   129,
      88,    41,   168,    41,   168,    41,   168,    34,   168,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   107,   107,   107,
     108,   109,   109,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   117,   117,   118,   118,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   121,   121,
     122,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   144,   145,   145,   145,   145,   145,   146,   146,
     147,   147,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   162,   162,   162,   163,   163,   163,
     163,   164,   165,   165,   166,   166,   167,   168,   168,   168,
     168,   168,   168,   169,   169,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   175,   175,   175,
     175,   175,   175,   176,   176,   176,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     3,     1,     4,     5,     5,     6,     2,     1,     3,
       3,     1,     4,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
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
#line 48 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2076 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 49 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2082 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2088 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2094 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2100 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2106 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2112 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2118 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2124 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 57 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2130 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2136 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2142 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2148 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2154 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 69 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2160 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 70 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2166 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[0].nom));}
#line 2172 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 152 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2178 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 153 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2184 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 154 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2190 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 155 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2196 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2202 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 157 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[0].nom));}
#line 2208 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-3].nom));fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2214 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2220 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 168 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2226 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 169 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2232 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 174 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2238 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 175 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2244 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 180 "parser2.y" /* yacc.c:1646  */
    {}
#line 2250 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 181 "parser2.y" /* yacc.c:1646  */
    {}
#line 2256 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 186 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2262 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 187 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2268 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "parser2.y" /* yacc.c:1646  */
    {}
#line 2274 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 189 "parser2.y" /* yacc.c:1646  */
    {}
#line 2280 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 194 "parser2.y" /* yacc.c:1646  */
    {}
#line 2286 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 195 "parser2.y" /* yacc.c:1646  */
    {}
#line 2292 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 200 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2298 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 205 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2304 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 210 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2310 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 215 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2316 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 220 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2322 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 225 "parser2.y" /* yacc.c:1646  */
    {fprintf(f_output,"%s",(yyvsp[-3].nom));fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2328 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 527 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[-6].nom));fprintf(f_output,"%s",(yyvsp[-5].nom));}
#line 2334 "parser2.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 528 "parser2.y" /* yacc.c:1646  */
    {print_balise_span("type_specifier",(yyvsp[-4].nom));fprintf(f_output,"%s",(yyvsp[-3].nom));fprintf(f_output,"%s",(yyvsp[-1].nom));}
#line 2340 "parser2.tab.c" /* yacc.c:1646  */
    break;


#line 2344 "parser2.tab.c" /* yacc.c:1646  */
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
#line 569 "parser2.y" /* yacc.c:1906  */


void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 } 
