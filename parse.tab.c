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
#line 1 "parse.y" /* yacc.c:339  */

#ifndef YYSTYPE
# define YYSTYPE char*
#endif	
	
#include <stdio.h>
#include "libs/tools.h"

void yyerror(const char *);  /* prints grammar violation message */



#line 79 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330,
    SEMI_COLON = 331,
    OPENING_BRACE = 332,
    CLOSING_BRACE = 333,
    COLON = 334,
    EQUAL = 335,
    OPENING_PARENTHESIS = 336,
    CLOSING_PARENTHESIS = 337,
    LEFT_BRACKET = 338,
    RIGHT_BRACKET = 339,
    TILD = 340,
    AMPERSAND = 341,
    EXCLAMATION_POINT = 342,
    DOT = 343,
    MINUS = 344,
    PLUS = 345,
    STAR = 346,
    SLASH = 347,
    PERCENT = 348,
    INFERIOR = 349,
    SUPERIOR = 350,
    EXPONENT = 351,
    PIPE = 352,
    INTERROGATION_POINT = 353,
    TWO_DOT = 354
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   2417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

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
      95,    96,    97,    98,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    43,    44,    45,    49,    50,    51,
      55,    59,    60,    64,    68,    69,    73,    74,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    91,    92,
      96,    97,    98,    99,   100,   101,   102,   106,   107,   108,
     109,   110,   111,   115,   116,   120,   121,   122,   123,   127,
     128,   129,   133,   134,   135,   139,   140,   141,   142,   143,
     147,   148,   149,   153,   154,   158,   159,   163,   164,   168,
     169,   173,   174,   178,   179,   183,   184,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   202,   203,
     207,   211,   212,   213,   217,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   230,   231,   235,   236,   240,
     241,   242,   243,   244,   245,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   268,   269,   270,   274,   275,   279,   280,   284,   285,
     286,   290,   291,   292,   293,   297,   298,   302,   303,   304,
     308,   309,   310,   311,   312,   316,   317,   321,   322,   326,
     330,   331,   332,   333,   337,   338,   342,   343,   347,   348,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   369,   370,   371,   372,   376,   377,
     382,   383,   387,   388,   392,   393,   394,   398,   399,   403,
     404,   408,   409,   410,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   438,   439,   440,   444,   445,
     446,   447,   451,   455,   456,   460,   461,   465,   469,   470,
     471,   472,   473,   474,   478,   479,   480,   484,   485,   489,
     490,   494,   495,   499,   500,   504,   505,   506,   510,   511,
     512,   513,   514,   515,   519,   520,   521,   522,   523,   527,
     528,   532,   533,   537,   538,   542,   543
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL",
  "SEMI_COLON", "OPENING_BRACE", "CLOSING_BRACE", "COLON", "EQUAL",
  "OPENING_PARENTHESIS", "CLOSING_PARENTHESIS", "LEFT_BRACKET",
  "RIGHT_BRACKET", "TILD", "AMPERSAND", "EXCLAMATION_POINT", "DOT",
  "MINUS", "PLUS", "STAR", "SLASH", "PERCENT", "INFERIOR", "SUPERIOR",
  "EXPONENT", "PIPE", "INTERROGATION_POINT", "TWO_DOT", "$accept",
  "primary_expression", "constant", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers", "@1",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};
# endif

#define YYPACT_NINF -385

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-385)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2147,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,    20,   -26,    -8,  -385,    60,
    -385,  -385,    73,  2237,  2237,  -385,    69,  -385,  -385,  2237,
    2237,  2237,  -385,  1809,  -385,  -385,   -51,   165,   758,  2346,
    1596,  -385,  -385,    18,   160,   -17,  -385,  1966,   163,    43,
    -385,  -385,   102,  2275,  -385,  -385,  -385,  -385,  -385,   165,
    -385,   109,     0,  -385,  -385,  -385,  -385,  -385,  -385,  1668,
    1690,  1690,  -385,   126,   136,   758,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,   166,  -385,  1596,  -385,
     -58,    -4,   147,    67,   168,   153,   146,   133,   257,    25,
    -385,   202,  2346,   -52,  2346,   206,   207,   200,   209,  -385,
    -385,  -385,   160,  -385,    18,   459,  1328,  -385,    73,  -385,
    2101,  1753,   360,   163,  -385,  2275,  2012,  -385,    57,  -385,
     116,  1596,  -385,    48,   758,  -385,   758,  -385,  -385,  2346,
    1596,   458,  -385,  -385,   -55,   215,   296,  -385,  -385,  1340,
    1596,   299,  -385,  1596,  1596,  1596,  1596,  1596,  1596,  1596,
    1596,  1596,  1596,  1596,  1596,  1596,  1596,  1596,  1596,  1596,
    1596,  1596,  -385,  -385,  1855,   913,   180,  -385,   197,  -385,
    -385,  -385,   297,  -385,  -385,  -385,  -385,   225,   212,  1596,
     217,   227,   233,   236,   873,   238,   303,   256,   258,  1429,
    -385,  -385,    91,  -385,  -385,  -385,  -385,   580,  -385,  -385,
    -385,  -385,  -385,  1306,  -385,  -385,  -385,  -385,  -385,  -385,
      74,   254,   241,  -385,    71,  1173,  -385,   253,   255,   985,
    2054,  -385,  -385,  -385,  1596,   104,  -385,   239,  -385,    50,
    -385,  -385,  -385,   261,   262,   265,   270,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  1596,  1596,
    -385,  1451,  -385,  -385,   134,  -385,    87,  -385,  -385,  -385,
    -385,   -58,   -58,    -4,    -4,   147,   147,   147,   147,    67,
      67,   168,   153,   146,   133,   257,   -41,  -385,   268,   272,
    1173,  -385,   271,   273,  1007,   197,  1915,  1079,   274,   873,
     263,   873,  1596,  1596,  1596,   278,   669,   276,  -385,  -385,
    -385,   142,  -385,  -385,  -385,  1596,   358,  -385,   124,  1328,
      98,  -385,   820,  -385,    29,  -385,  -385,  2193,   366,  -385,
     288,  1173,  -385,  -385,  1596,  -385,   289,   290,  -385,  -385,
    -385,    53,  1596,  -385,   298,   298,  -385,  2312,  -385,  -385,
    1306,  -385,  1596,  -385,  -385,  1596,  -385,  -385,   293,  1173,
    -385,  -385,  1596,  -385,   294,  -385,   300,  1173,  -385,   295,
     302,  1101,   304,  -385,   873,  -385,   150,   159,   161,   306,
    1463,  1463,  -385,  -385,   305,  -385,  -385,  1195,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,   308,   309,  -385,  -385,  -385,
    -385,   282,   171,  -385,   284,   144,  -385,  -385,  -385,   311,
     312,  -385,  -385,   318,  1173,  -385,  -385,  1596,  -385,   319,
    -385,  -385,   873,   873,   873,  1596,  1552,  1574,  -385,  -385,
    -385,  1328,  -385,  -385,  1596,  2312,  -385,  1596,  -385,  1217,
    -385,  -385,  -385,   320,   321,  -385,   324,  -385,  -385,   176,
     873,   178,   873,   183,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,   873,   314,  -385,   873,  -385,   873,  -385,  -385,  -385,
    -385
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   130,   109,   110,   111,   113,   114,   164,   160,   161,
     162,   124,   116,   117,   118,   119,   122,   123,   120,   121,
     115,   125,   126,   134,   135,     0,     0,   163,   165,     0,
     112,   272,     0,    96,    98,   128,     0,   129,   127,   100,
     102,   104,    93,     0,   269,   271,   154,     0,     0,     0,
       0,   170,    91,     0,   187,     0,   105,   108,   169,     0,
      94,    97,   133,     0,    99,   101,   103,     1,   270,     0,
      10,   158,     0,   155,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    41,    37,    42,    40,
      39,    38,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   142,   200,   144,     0,     0,     0,     0,   163,
     188,   186,   185,    92,     0,     0,     0,   275,     0,   274,
       0,     0,     0,   168,    95,     0,     0,   136,     0,   140,
       0,     0,   150,     0,     0,    34,     0,    31,    32,     0,
       0,    43,    75,    88,     0,     0,     0,    24,    25,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   141,     0,     0,   202,   199,   203,   143,
     166,   159,     0,   171,   189,   184,   106,   108,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     253,   247,     0,   251,   252,   238,   239,     0,   249,   240,
     241,   242,   243,     0,   227,   107,   276,   273,   197,   182,
     196,     0,   191,   192,     0,     0,   172,    38,     0,     0,
       0,   131,   137,   138,     0,     0,   145,   149,   152,     0,
     157,   151,   156,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    77,     0,     0,
       5,     0,    23,    20,     0,    28,     0,    22,    46,    47,
      48,    51,    50,    53,    54,    58,    59,    56,    57,    61,
      62,    64,    66,    68,    70,    72,     0,   221,     0,     0,
       0,   205,    38,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   266,
     267,     0,   254,   248,   250,     0,     0,   229,     0,     0,
       0,   233,     0,   194,   202,   195,   181,     0,     0,   183,
       0,     0,   173,   180,     0,   179,    38,     0,   132,   147,
     139,     0,     0,   153,    35,     0,    36,     0,    76,    89,
       0,    44,     0,    21,    19,     0,   222,   204,     0,     0,
     206,   212,     0,   211,     0,   223,     0,     0,   213,    38,
       0,     0,     0,   244,     0,   246,     0,     0,     0,     0,
       0,     0,   264,   268,     0,   236,   225,     0,   228,   232,
     234,   190,   193,   198,   175,     0,     0,   176,   178,   146,
     148,     0,     0,    14,     0,     0,    29,    74,   208,     0,
       0,   210,   224,     0,     0,   214,   220,     0,   219,     0,
     237,   245,     0,     0,     0,     0,     0,     0,   235,   226,
     231,     0,   174,   177,     0,     0,    13,     0,    26,     0,
     207,   209,   216,     0,     0,   217,   256,   257,   258,     0,
       0,     0,     0,     0,   230,    17,    15,    16,    27,   215,
     218,     0,     0,   262,     0,   260,     0,   255,   259,   263,
     261
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -385,  -385,  -385,  -385,  -385,  -385,  -385,   -39,  -385,  -385,
     244,  -385,   -70,   105,   114,    55,   112,   249,   211,   248,
     250,   247,  -385,   -30,   -96,  -385,   -77,   -25,   -12,     9,
    -385,  -385,   310,  -385,   -44,  -385,  -385,   301,  -119,    -6,
    -385,    77,  -385,   364,  -127,  -385,   -48,  -385,  -385,   -21,
     -57,   -42,  -110,  -124,  -385,   100,  -385,    66,   -99,  -176,
    -123,    75,  -384,  -385,   108,   -16,  -164,  -385,    33,  -385,
     222,  -255,  -385,  -385,  -385,  -385,   397,  -385,  -385
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   412,   413,    96,   274,
     151,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   152,   153,   268,   212,   111,    31,   128,
     134,    55,    56,    33,    34,    35,    36,   136,   137,   113,
     245,   246,    37,    72,    73,    38,    39,    40,    41,   118,
      58,    59,   122,   298,   232,   233,   234,   414,   299,   188,
     327,   328,   329,   330,   331,    42,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    43,    44,    45,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     114,   114,   133,   225,   112,   112,   120,   231,   154,    32,
     305,    57,   121,   441,   187,   114,   252,   242,   110,   112,
     110,    51,   239,    46,   269,   117,    69,   270,   162,   184,
     224,   185,    51,   163,   164,   165,   238,   114,   269,    54,
     315,   112,    60,    61,   180,   127,    51,   139,    64,    65,
      66,    70,    32,    70,   256,    48,    51,   138,   365,   123,
      51,   391,   124,   275,   114,   441,   114,   154,   112,   154,
     112,   186,    62,    49,   194,   304,    51,    51,   142,   143,
     195,   170,   171,   276,   120,   166,   167,   114,   114,   303,
     129,   112,   112,   278,   279,   280,   114,    47,   114,    53,
     112,   114,   112,   197,   296,   112,   183,   197,   189,    54,
     332,   110,   185,   213,   115,   116,   250,   247,   226,   139,
     139,   242,   252,   181,    53,   341,   251,   224,   353,   138,
     138,   335,   321,   243,    53,   436,   437,   120,    53,   340,
     230,    50,   186,   347,    54,   383,    63,   385,    54,    52,
     338,   155,   244,   339,    53,   332,   244,   185,   305,   168,
     169,   172,   173,   227,    54,    54,   269,   322,    70,   110,
     269,   364,   358,   359,   310,   156,   157,   158,   399,   135,
     350,   325,   376,   351,   174,   175,   326,   120,   334,   141,
     369,   194,   114,   230,   248,   249,   112,   381,     8,     9,
      10,   361,   396,   397,   368,   213,   398,   149,   374,   333,
     253,   380,   254,   362,   110,   255,   363,   150,   393,   349,
     431,   269,   448,   449,   139,   285,   286,   287,   288,   269,
     178,   119,   432,   224,   138,   386,   387,   388,   269,   176,
     269,   433,   177,   434,   131,   405,   132,   159,   406,   160,
     445,    54,   120,   446,   161,   269,   194,   269,   472,   120,
     474,   184,   269,   185,   224,   476,   416,   424,   456,   457,
     458,   281,   282,   419,   440,   179,   420,   133,   306,   192,
     307,   423,   283,   284,   182,   429,   289,   290,   190,   191,
     334,   193,    97,   194,    97,   110,   473,   271,   475,   272,
     394,   224,   277,   308,   390,   126,   317,   477,   312,   114,
     479,   309,   480,   112,   313,   230,   311,   314,   464,   316,
     337,   194,   110,   145,   147,   148,   440,   410,   453,   120,
     247,   454,   318,   194,   319,   417,   336,   342,   352,   343,
     389,   230,    97,   354,   355,   224,   230,   356,   465,   357,
     366,   467,   392,   224,   367,   370,   382,   371,   459,   461,
     463,   395,   384,    74,    75,    76,    77,    78,    79,   403,
      80,    81,   404,   407,   408,   360,   194,   418,   421,   425,
     430,   444,   422,   447,   471,    97,   426,   435,   292,   438,
     478,    82,   442,   443,   235,   450,   451,   114,     8,     9,
      10,   112,   452,   455,   469,   470,   466,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   291,   293,   295,   409,   294,
      83,   119,    84,   140,   196,   415,   240,   402,   400,   324,
      68,    85,     0,    97,   236,    86,    87,    88,     0,    89,
      90,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,    97,     1,
      82,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    97,   199,   200,   201,     0,
     202,   203,   204,   205,   206,   207,   208,   209,    26,    83,
      27,    84,    28,    29,    30,   210,   125,   211,   267,     0,
      85,     0,     0,     0,    86,    87,    88,     0,    89,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       1,    82,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   199,   200,   201,
       0,   202,   203,   204,   205,   206,   207,   208,   209,    26,
      83,    27,    84,    28,    29,    30,   210,   125,   323,     0,
       0,    85,     0,     0,     0,    86,    87,    88,     0,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      82,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    83,
      27,    84,    28,    29,    30,   210,     0,     0,     0,     0,
      85,     0,     0,     0,    86,    87,    88,     0,    89,    90,
      91,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,    83,    27,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,    86,    87,    88,     0,    89,    90,    91,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   198,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,     0,     0,     0,
       0,   332,   297,   185,    82,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
     199,   200,   201,     0,   202,   203,   204,   205,   206,   207,
     208,   209,     0,    83,    82,    84,     0,   300,     0,   210,
     125,     8,     9,    10,    85,     0,     0,     0,    86,    87,
      88,     0,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    74,    75,
      76,    77,    78,    79,    85,    80,    81,   301,    86,    87,
      88,     0,    89,    90,   302,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,   344,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,   372,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    83,   119,    84,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,   345,
      86,    87,    88,     0,    89,    90,   346,    83,   119,    84,
       0,     0,    74,    75,    76,    77,    78,    79,    85,    80,
      81,   373,    86,    87,    88,     0,    89,    90,    91,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,   377,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,   427,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,   378,    86,    87,    88,     0,    89,    90,
     379,    83,   119,    84,     0,     0,    74,    75,    76,    77,
      78,    79,    85,    80,    81,   428,    86,    87,    88,     0,
      89,    90,    91,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    82,     0,
       0,     0,     0,     0,    85,     0,     0,     0,    86,    87,
      88,     0,    89,    90,    91,    83,     0,    84,     0,     0,
       0,     0,   223,   439,     0,     0,    85,     0,   325,     0,
      86,    87,    88,   326,    89,    90,    91,    83,     0,    84,
       0,     0,     0,     0,   223,   468,     0,     0,    85,     0,
     325,     0,    86,    87,    88,   326,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
       0,     0,     0,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,     0,    84,     0,
       0,     0,     0,   223,     0,     0,     0,    85,     0,   325,
       0,    86,    87,    88,   326,    89,    90,    91,    83,     0,
      84,     0,     0,     0,     0,   223,     0,     0,     0,    85,
      83,     0,    84,    86,    87,    88,     0,    89,    90,    91,
       0,    85,   273,     0,     0,    86,    87,    88,     0,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
       0,    84,     0,     0,     0,   320,     0,     0,     0,     0,
      85,     0,     0,     0,    86,    87,    88,     0,    89,    90,
      91,    83,     0,    84,     0,     0,     0,     0,   360,     0,
       0,     0,    85,    83,     0,    84,    86,    87,    88,   210,
      89,    90,    91,     0,    85,     0,     0,     0,    86,    87,
      88,     0,    89,    90,    91,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,    82,     0,     0,
       0,     0,     0,    85,   460,     0,     0,    86,    87,    88,
       0,    89,    90,    91,    83,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    85,   462,     0,     0,    86,
      87,    88,     0,    89,    90,    91,    83,     0,    84,     0,
       0,    74,    75,    76,    77,    78,    79,    85,    80,    81,
       0,    86,    87,    88,     0,    89,    90,    91,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,    86,    87,    88,   228,    89,    90,    91,
      83,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,    86,    87,    88,     0,    89,
      90,    91,     0,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     0,
       0,     0,     0,     0,     0,   229,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     0,     0,     0,     0,     0,   184,   297,   185,     0,
       0,     0,     0,     0,     0,     1,    54,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     0,     0,     0,     0,     0,     1,   375,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     1,   125,     0,     0,   126,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     1,     0,    29,     0,     0,     0,
     241,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     1,   348,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     1,   125,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     1,    30,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    26,     0,    27,     0,
      28,     0,    30,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,    27,     0,     0,    29,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     411,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,    27,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    59,   126,    48,    49,    54,   131,    85,     0,
     186,    32,    54,   397,   113,    63,   143,   136,    48,    63,
      50,     3,   132,     3,    79,    50,    77,    82,    98,    81,
     126,    83,     3,    91,    92,    93,   132,    85,    79,    91,
     204,    85,    33,    34,    19,    57,     3,    63,    39,    40,
      41,     3,    43,     3,   150,    81,     3,    63,    99,    76,
       3,   316,    79,   159,   112,   449,   114,   144,   112,   146,
     114,   113,     3,    81,   122,   185,     3,     3,    78,    79,
     122,    14,    15,   160,   132,    89,    90,   135,   136,   185,
      57,   135,   136,   163,   164,   165,   144,    77,   146,    81,
     144,   149,   146,   124,   181,   149,   112,   128,   114,    91,
      81,   141,    83,   125,    48,    49,   141,   138,   130,   135,
     136,   240,   249,    98,    81,   235,    78,   223,    78,   135,
     136,   230,   209,    76,    81,   390,   391,   185,    81,   235,
     131,    81,   184,   239,    91,   309,    77,   311,    91,    76,
      79,    85,    99,    82,    81,    81,    99,    83,   334,    12,
      13,    94,    95,   130,    91,    91,    79,    76,     3,   199,
      79,    84,   268,   269,   199,     9,    10,    11,    80,    77,
      76,    83,   306,    79,    16,    17,    88,   235,   230,    80,
     300,   239,   240,   184,    78,    79,   240,   307,    38,    39,
      40,   271,    78,    79,   300,   217,   329,    81,   304,   230,
     144,   307,   146,    79,   244,   149,    82,    81,    76,   244,
     384,    79,    78,    79,   240,   170,   171,   172,   173,    79,
      97,    71,    82,   329,   240,   312,   313,   314,    79,    86,
      79,    82,    96,    82,    81,   341,    83,    81,   344,    83,
      79,    91,   300,    82,    88,    79,   304,    79,    82,   307,
      82,    81,    79,    83,   360,    82,   362,   377,   432,   433,
     434,   166,   167,   369,   397,    18,   372,   334,    81,    79,
      83,   377,   168,   169,    82,   381,   174,   175,    82,    82,
     332,    82,    48,   341,    50,   325,   460,    82,   462,     3,
     325,   397,     3,     6,   316,    80,     3,   471,    81,   357,
     474,    99,   476,   357,    81,   306,    99,    81,   441,    81,
      79,   369,   352,    79,    80,    81,   449,   352,   424,   377,
     351,   427,    76,   381,    76,   365,    82,    84,    99,    84,
      62,   332,    98,    82,    82,   441,   337,    82,   444,    79,
      82,   447,    76,   449,    82,    84,    82,    84,   435,   436,
     437,     3,    99,     3,     4,     5,     6,     7,     8,     3,
      10,    11,    84,    84,    84,    77,   424,    84,    84,    84,
      76,    99,    82,    99,    60,   141,    84,    81,   177,    84,
      76,    31,    84,    84,    34,    84,    84,   445,    38,    39,
      40,   445,    84,    84,    84,    84,   445,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   176,   178,   180,   351,   179,
      70,    71,    72,    69,   124,   360,   135,   337,   330,   217,
      43,    81,    -1,   199,    84,    85,    86,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   244,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   271,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    80,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    -1,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    -1,    89,    90,
      91,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,    -1,    89,    90,    91,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    31,    72,    -1,    34,    -1,    76,
      77,    38,    39,    40,    81,    -1,    -1,    -1,    85,    86,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,     3,     4,
       5,     6,     7,     8,    81,    10,    11,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    70,    71,    72,
      -1,    -1,     3,     4,     5,     6,     7,     8,    81,    10,
      11,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    70,    71,    72,    -1,    -1,     3,     4,     5,     6,
       7,     8,    81,    10,    11,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    -1,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      70,    -1,    72,    85,    86,    87,    -1,    89,    90,    91,
      -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    -1,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    81,    70,    -1,    72,    85,    86,    87,    76,
      89,    90,    91,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    -1,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    89,    90,    91,    70,    -1,    72,    -1,
      -1,     3,     4,     5,     6,     7,     8,    81,    10,    11,
      -1,    85,    86,    87,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,     3,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    -1,    89,
      90,    91,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    91,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    30,    82,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    30,    77,    -1,    -1,    80,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    30,    -1,    74,    -1,    -1,    -1,
      78,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    30,    78,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    30,    77,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    30,    75,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    69,    -1,    71,    -1,
      73,    -1,    75,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    71,    -1,    -1,    74,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   133,   134,   135,   136,   142,   145,   146,
     147,   148,   165,   175,   176,   177,     3,    77,    81,    81,
      81,     3,    76,    81,    91,   131,   132,   149,   150,   151,
     129,   129,     3,    77,   129,   129,   129,     0,   176,    77,
       3,   103,   143,   144,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    81,    85,    86,    87,    89,
      90,    91,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   134,   139,   146,   157,   157,   127,   149,    71,
     146,   151,   152,    76,    79,    77,    80,   128,   129,   168,
     178,    81,    83,   150,   130,    77,   137,   138,   139,   165,
     143,    80,    78,    79,    81,   110,    81,   110,   110,    81,
      81,   110,   123,   124,   126,   157,     9,    10,    11,    81,
      83,    88,   112,    91,    92,    93,    89,    90,    12,    13,
      14,    15,    94,    95,    16,    17,    86,    96,    97,    18,
      19,    98,    82,   139,    81,    83,   151,   158,   159,   139,
      82,    82,    79,    82,   146,   151,   132,   149,     3,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      76,    78,   126,   128,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    77,   124,   160,   128,   168,     3,    82,
     129,   153,   154,   155,   156,    34,    84,    91,   124,   152,
     137,    78,   138,    76,    99,   140,   141,   149,    78,    79,
     127,    78,   144,   157,   157,   157,   124,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    80,   125,    79,
      82,    82,     3,    82,   109,   124,   126,     3,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   118,   119,   120,   121,   126,    82,   153,   158,
      34,    84,    91,   124,   152,   159,    81,    83,     6,    99,
     127,    99,    81,    81,    81,   166,    81,     3,    76,    76,
      76,   126,    76,    78,   170,    83,    88,   160,   161,   162,
     163,   164,    81,   149,   151,   158,    82,    79,    79,    82,
     124,   152,    84,    84,    34,    84,    91,   124,    78,   127,
      76,    79,    99,    78,    82,    82,    82,    79,   124,   124,
      77,   112,    79,    82,    84,    99,    82,    82,   124,   152,
      84,    84,    34,    84,   124,    82,   153,    34,    84,    91,
     124,   152,    82,   166,    99,   166,   126,   126,   126,    62,
     128,   171,    76,    76,   127,     3,    78,    79,   160,    80,
     164,    56,   155,     3,    84,   124,   124,    84,    84,   141,
     127,    58,   106,   107,   157,   161,   124,   123,    84,   124,
     124,    84,    82,   124,   152,    84,    84,    34,    84,   124,
      76,   166,    82,    82,    82,    81,   171,   171,    84,    78,
     160,   162,    84,    84,    99,    79,    82,    99,    78,    79,
      84,    84,    84,   124,   124,    84,   166,   166,   166,   126,
      82,   126,    82,   126,   160,   124,   107,   124,    78,    84,
      84,    60,    82,   166,    82,   166,    82,   166,    76,   166,
     166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   130,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   162,   163,   163,   164,   164,   165,   166,   166,
     166,   166,   166,   166,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   172,   173,   173,
     173,   173,   173,   173,   174,   174,   174,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     0,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     7,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     7,     5,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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
#line 41 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2076 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2082 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2088 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 44 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2094 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 45 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2100 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2106 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2112 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2118 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2124 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2130 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2136 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2142 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2148 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2154 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2160 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2166 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2172 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2178 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2184 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2190 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2196 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2202 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 84 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2208 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2214 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 86 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(8,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2220 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 87 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(9,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),print_debut_balise_block(),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2226 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2232 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2238 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2244 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2250 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2256 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2262 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 100 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2268 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 101 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2274 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2280 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 106 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2286 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2292 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2298 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2304 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2310 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 111 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2316 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 115 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2322 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2328 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2334 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2340 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2346 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2352 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2358 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2364 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 129 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2370 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2376 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2382 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2388 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2394 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2400 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2406 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2412 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 143 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2418 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2424 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2430 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 149 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2436 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 153 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2442 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2448 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 158 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2454 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 159 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2460 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2466 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2472 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 168 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2478 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 169 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2484 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 173 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2490 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 174 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2496 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 178 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2502 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 179 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2508 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 183 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2514 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 184 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2520 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 188 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2526 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 189 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2532 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2538 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 191 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2544 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 192 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2550 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 193 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2556 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 194 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2562 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 195 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2568 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 196 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2574 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 197 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2580 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 198 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2586 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 202 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2592 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 203 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2598 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 207 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2604 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));  /*variables*/}
#line 2610 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 212 "parse.y" /* yacc.c:1646  */
    {create_variable(strdup((yyvsp[-1])),strdup((yyvsp[-2])),strdup("description"));(yyval)=string_concat(3,(yyvsp[-2]),print_balise_variable((yyvsp[-1])),(yyvsp[0])); }
#line 2616 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 213 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2622 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 217 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2628 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 217 "parse.y" /* yacc.c:1646  */
    {/*ajouter_typedef($2);*/}
#line 2634 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 218 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2640 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 219 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2646 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 220 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2652 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 221 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2658 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 222 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2664 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 223 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2670 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 224 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2676 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 225 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2682 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 226 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2688 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 230 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2694 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 231 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2700 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 235 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2706 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 236 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2712 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 240 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2718 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 241 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2724 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 242 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2730 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 243 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2736 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 244 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2742 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 245 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2748 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 249 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2754 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 250 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2760 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 251 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2766 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 252 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2772 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 253 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2778 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 254 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2784 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 255 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2790 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 256 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2796 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 257 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2802 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 258 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2808 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 259 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2814 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 260 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2820 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 261 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2826 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 262 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2832 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 263 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2838 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 264 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2844 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 268 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-3]),print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2850 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-4]),(yyvsp[-3]),print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2856 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 270 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2862 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 274 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2868 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 275 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2874 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 279 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2880 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 280 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2886 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 284 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2892 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 285 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2898 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 286 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2904 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 290 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2910 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 291 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2916 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 292 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2922 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 293 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2928 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 297 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2934 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2940 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 302 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2946 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 303 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 2952 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 304 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2958 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 308 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-3]),print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2964 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 309 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-4]),print_debut_balise_block(),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2970 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 310 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-4]),(yyvsp[-3]),print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2976 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 311 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(8,(yyvsp[-5]),(yyvsp[-4]),print_debut_balise_block(),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 2982 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 312 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 2988 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 316 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 2994 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 317 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3000 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 321 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3006 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 322 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3012 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 326 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3018 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 330 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3024 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 331 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3030 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 332 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3036 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 333 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3042 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 337 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3048 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 338 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3054 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 342 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3060 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 343 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3066 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 347 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3072 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 348 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3078 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 352 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3084 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 353 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3090 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 354 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3096 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3102 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3108 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 357 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3114 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 358 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3120 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 359 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3126 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 360 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3132 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 361 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3138 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 362 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3144 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 363 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,print_balise_fonction((yyvsp[-3])),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3150 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 364 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,print_balise_fonction((yyvsp[-2])),(yyvsp[-1]),(yyvsp[0]));}
#line 3156 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 365 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3162 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 369 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3168 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 370 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3174 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 371 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3180 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 372 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3186 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 376 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3192 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 377 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3198 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 382 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3204 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 383 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3210 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 387 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3216 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 388 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3222 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 392 "parse.y" /* yacc.c:1646  */
    {add_parameter(strdup((yyvsp[0])),strdup((yyvsp[-1])),strdup("descri")); (yyval)=string_concat(2,(yyvsp[-1]),print_balise_parameter((yyvsp[0]))); }
#line 3228 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 393 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3234 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 394 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3240 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 398 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0])); }
#line 3246 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 399 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3252 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 403 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3258 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 404 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3264 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 408 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3270 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 409 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3276 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 410 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3282 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 414 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3288 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 415 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3294 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 416 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3300 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 417 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3306 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 418 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]));}
#line 3312 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 419 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3318 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 420 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3324 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 421 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3330 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 422 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3336 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 423 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3342 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 424 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3348 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 425 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3354 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 426 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3360 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 427 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3366 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 428 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3372 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 429 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3378 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 430 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3384 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 431 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3390 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 432 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3396 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 433 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3402 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 434 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3408 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 438 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 3414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 439 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,print_debut_balise_block(),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 3420 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 440 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3426 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 444 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3432 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 445 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3438 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 446 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]));}
#line 3444 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 447 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3450 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 451 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3456 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 455 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3462 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 456 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3468 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 460 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3474 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 461 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3480 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 465 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3486 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 469 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3492 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 470 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3498 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 471 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3504 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 472 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3510 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 473 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3516 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 474 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3522 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 478 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3528 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 479 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3534 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 480 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3540 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 484 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,print_debut_balise_block(),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 3546 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 485 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,print_debut_balise_block(),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]),print_fin_balise_block());}
#line 3552 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 489 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3558 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 490 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3564 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 494 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3570 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 495 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3576 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 499 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3582 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 500 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3588 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 504 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3594 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 505 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3600 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 506 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3606 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 510 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(5,(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3612 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 511 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3618 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 512 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3624 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 513 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3630 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 514 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(6,(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3636 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 515 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(7,(yyvsp[-6]),(yyvsp[-5]),(yyvsp[-4]),(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3642 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 519 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3648 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 520 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3654 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 521 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3660 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 522 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3666 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 523 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3672 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 532 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));push_to_html((yyval)); free((yyval));}
#line 3678 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 533 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));push_to_html((yyval)); free((yyval));}
#line 3684 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 537 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(4,(yyvsp[-3]),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0]));}
#line 3690 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 538 "parse.y" /* yacc.c:1646  */
    {name_function(strdup((yyvsp[-2])),strdup((yyvsp[-1])),strdup("description"));(yyval)=string_concat(3,(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 3696 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 542 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(1,(yyvsp[0]));}
#line 3702 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 543 "parse.y" /* yacc.c:1646  */
    {(yyval)=string_concat(2,(yyvsp[-1]),(yyvsp[0]));}
#line 3708 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 3712 "parse.tab.c" /* yacc.c:1646  */
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
#line 546 "parse.y" /* yacc.c:1906  */

void yyerror(const char *s){
	fprintf(stderr,"syntaxe error %s",s);
}
 
