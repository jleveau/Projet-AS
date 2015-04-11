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

#include <stdio.h>

void yyerror(const char *);  /* prints grammar violation message */

char* tmp;


#line 75 "parse.tab.c" /* yacc.c:339  */

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
    THREAD_LOCAL = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "parse.y" /* yacc.c:355  */

	char* val;

#line 195 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   2501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  499

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    40,    41,    42,    46,    47,    48,
      52,    56,    57,    61,    65,    66,    70,    71,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    83,    84,    84,
      88,    89,    93,    94,    95,    96,    97,    98,    99,   103,
     104,   105,   106,   107,   108,   112,   113,   117,   118,   119,
     120,   124,   125,   126,   130,   131,   132,   136,   137,   138,
     139,   140,   144,   145,   146,   150,   151,   155,   156,   160,
     161,   165,   166,   170,   171,   175,   176,   180,   181,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     199,   200,   204,   208,   209,   210,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   227,   228,   232,   233,
     237,   238,   239,   240,   241,   242,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   265,   265,   266,   266,   267,   271,   272,   276,
     277,   281,   282,   283,   287,   288,   289,   290,   294,   295,
     299,   300,   301,   305,   305,   306,   306,   307,   307,   308,
     308,   309,   313,   314,   318,   319,   323,   327,   328,   329,
     330,   334,   335,   339,   340,   344,   345,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   362,   362,   366,   367,   368,   369,   373,   374,   379,
     380,   384,   385,   389,   390,   391,   395,   396,   400,   401,
     405,   406,   407,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   435,   436,   437,   441,   442,   443,
     444,   448,   452,   453,   457,   458,   462,   466,   467,   468,
     469,   470,   471,   475,   476,   477,   481,   481,   481,   482,
     482,   486,   487,   491,   492,   496,   497,   501,   502,   503,
     507,   508,   509,   510,   511,   512,   516,   517,   518,   519,
     520,   524,   525,   529,   530,   534,   535,   535,   539,   540
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
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression", "$@1",
  "$@2", "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@3", "$@4", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "$@5",
  "$@6", "$@7", "$@8", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "$@9", "$@10",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "statement",
  "labeled_statement", "compound_statement", "$@11", "$@12", "$@13",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "$@14", "declaration_list", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -344

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-344)))

#define YYTABLE_NINF -287

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2231,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,    39,   -70,   -12,  -344,    -4,
    -344,  -344,    25,  2321,  2321,  -344,    52,  -344,  -344,  2321,
    2321,  2321,  -344,  1825,  -344,  -344,   -58,  -344,   910,  2430,
    1658,  -344,    17,     6,  -344,   -49,  -344,  1871,   102,    23,
    -344,  -344,   -50,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
     140,   140,  -344,  -344,  -344,  -344,  -344,  1680,  1702,  1702,
    -344,    80,    96,   910,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,   164,  -344,  1658,  -344,    94,   -35,
      69,   127,    74,    60,   106,   113,   189,    15,  -344,   136,
    2430,   107,  2430,   147,   151,   152,   168,  -344,  -344,  -344,
       6,    17,  -344,  1416,  -344,    25,   184,  2087,  2139,   998,
     102,  -344,  2359,   140,   140,  -344,   163,   -16,  -344,   169,
     910,  -344,   910,  -344,  -344,  2430,  1658,   501,  -344,  -344,
     125,   197,   275,  -344,  -344,  1438,  1658,   278,  -344,  1658,
    1658,  1658,  1658,  1658,  1658,  1658,  1658,  1658,  1658,  1658,
    1658,  1658,  1658,  1658,  1658,  1658,  1658,  1658,  -344,  -344,
    1938,  1020,   118,  -344,   124,  -344,  -344,  -344,   277,  -344,
    -344,  -344,  -344,   187,  1394,  -344,  -344,   204,  -344,  -344,
    -344,  -344,    51,   293,   221,   223,  -344,  1262,  -344,   224,
     225,  1042,  2359,  1987,  -344,    34,  -344,    66,   229,  1658,
     140,  -344,    21,   232,   233,   234,   235,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  1658,  -344,
    1658,  1526,  -344,  -344,   128,  -344,   -30,  -344,  -344,  -344,
    -344,    94,    94,   -35,   -35,    69,    69,    69,    69,   127,
     127,    74,    60,   106,   113,   189,   133,  -344,   237,   238,
    1262,  -344,   231,   236,  1130,   124,  2185,  1152,   241,  1658,
     299,  -344,   111,  1416,    83,  -344,  -344,   633,  1768,  -344,
     143,  -344,  -344,   242,  -344,  2277,   240,  1262,  -344,  -344,
    1658,  -344,   244,   245,  2034,  -344,  -344,  1658,  -344,   -43,
    -344,   243,  -344,    55,  -344,  -344,  -344,   247,   247,  -344,
    2396,  -344,  -344,  -344,  -344,  -344,  1658,  -344,  1658,  -344,
    -344,   250,  1262,  -344,  -344,  1658,  -344,   251,  -344,   246,
    1262,  -344,   252,   253,  1174,   220,   255,  -344,  1284,  -344,
    -344,  -344,  -344,   258,   249,  1658,   265,   261,   270,   272,
     776,   273,   347,   254,   257,   411,  -344,   -38,  -344,  -344,
    -344,  -344,   543,  -344,  -344,  -344,  -344,  -344,   349,   281,
    -344,  -344,  -344,   280,   283,  -344,  -344,  -344,  -344,    85,
    -344,  1658,  -344,   286,   149,  -344,   288,  1394,  1394,  -344,
    -344,  -344,   287,   308,  -344,  -344,   310,  1262,  -344,  -344,
    1658,  -344,   311,  -344,  -344,  -344,  -344,  1416,  -344,   776,
     290,   776,  1658,  1658,  1658,   292,   723,   260,  -344,  -344,
    -344,   -29,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  1658,  -344,  2396,  1658,   112,   315,  -344,  -344,  -344,
     316,   318,  -344,  -344,  -344,   776,  -344,   156,   161,   172,
     327,   820,   820,  -344,  -344,  -344,  -344,  -344,  1394,  -344,
    1306,  -344,  -344,  -344,   776,   776,   776,  1658,  1548,  1570,
    -344,   345,  -344,  -344,   176,   776,   178,   776,   180,   776,
     309,  -344,   776,  -344,   776,  -344,  -344,  -344,  -344
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   131,   110,   111,   112,   114,   115,   171,   167,   168,
     169,   125,   117,   118,   119,   120,   123,   124,   121,   122,
     116,   126,   127,   137,   138,     0,     0,   170,   172,     0,
     113,   284,     0,    97,    99,   129,     0,   130,   128,   101,
     103,   105,    95,     0,   281,   283,   161,   153,     0,     0,
       0,   177,     0,   196,    93,     0,   106,   109,   176,     0,
      96,    98,   136,   132,   100,   102,   104,     1,   282,   157,
       0,     0,     2,     7,     8,    11,    12,     0,     0,     0,
       9,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      18,     3,     4,     6,    32,    45,     0,    47,    51,    54,
      57,    62,    65,    67,    69,    71,    73,    75,    92,     0,
     145,   209,   147,     0,     0,     0,     0,   170,   197,   195,
     194,     0,    94,     0,   288,     0,     0,     0,   190,     0,
     175,   134,     0,     0,     0,    10,   165,     0,   162,     0,
       0,    36,     0,    33,    34,     0,     0,    45,    77,    90,
       0,     0,     0,    24,    25,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,   144,
       0,     0,   211,   208,   212,   146,   173,   166,     0,   178,
     198,   193,   107,   109,     0,   236,   108,   259,   287,   289,
     285,   189,   205,     0,     0,   200,   201,     0,   179,    40,
       0,     0,     0,     0,   139,     0,   143,     0,     0,     0,
       0,   154,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    79,     0,     5,
       0,     0,    23,    20,     0,    30,     0,    22,    48,    49,
      50,    52,    53,    55,    56,    60,    61,    58,    59,    63,
      64,    66,    68,    70,    72,    74,     0,   230,     0,     0,
       0,   214,    40,     0,     0,   210,     0,     0,     0,     0,
       0,   238,     0,     0,     0,   242,   257,     0,     0,   203,
     211,   204,   206,   191,   188,     0,     0,     0,   180,   187,
       0,   186,    40,     0,     0,   133,   140,     0,   141,     0,
     148,   152,   158,     0,   164,   163,   156,    37,     0,    38,
       0,    78,    91,    26,    46,    21,     0,    19,     0,   231,
     213,     0,     0,   215,   221,     0,   220,     0,   232,     0,
       0,   222,    40,     0,     0,     0,     0,   245,     0,   234,
     237,   241,   243,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   265,     0,   263,   264,
     247,   248,     0,   261,   249,   250,   251,   252,     0,     0,
     199,   202,   182,     0,     0,   183,   185,   135,   150,     0,
     142,     0,   160,     0,     0,    14,     0,     0,     0,    31,
      76,   217,     0,     0,   219,   233,     0,     0,   223,   229,
       0,   228,     0,   246,   244,   235,   240,     0,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,   278,
     279,     0,   266,   260,   262,   207,   192,   181,   184,   149,
     151,     0,    13,     0,     0,     0,     0,   216,   218,   225,
       0,     0,   226,   239,   253,     0,   255,     0,     0,     0,
       0,     0,     0,   276,   280,    17,    15,    16,     0,    27,
       0,   224,   227,   254,     0,     0,     0,     0,     0,     0,
      29,   268,   269,   270,     0,     0,     0,     0,     0,     0,
       0,   274,     0,   272,     0,   267,   271,   275,   273
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,  -344,  -344,  -344,  -344,   -32,  -344,  -344,
    -344,  -344,   212,  -344,   -81,   101,   105,    49,    95,   256,
     239,   259,   248,   262,  -344,   -31,     3,  -344,   -83,   -28,
     -56,   114,  -344,   303,  -344,   -36,  -344,  -344,  -344,  -344,
     213,  -183,   -96,  -344,    37,  -344,  -344,  -344,  -344,  -344,
     -48,  -179,  -344,   -45,  -344,  -344,   -23,   -54,  -344,  -344,
     -51,  -118,  -107,  -344,   132,  -344,   -17,   -72,  -175,  -113,
    -126,  -330,  -344,   145,  -105,   -15,  -344,   166,  -344,  -344,
    -344,  -344,    58,  -343,  -344,  -344,  -344,  -344,   389,  -344,
    -344,  -344
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    90,    91,   136,    92,    93,   394,   395,    94,   397,
     398,   244,   147,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   148,   149,   238,   367,   109,
      31,   125,    55,    56,    33,    34,    35,   132,   212,    36,
     213,   214,   111,   309,   310,    37,    70,    71,   133,   134,
     137,   138,    38,    39,    40,    41,   116,    58,   203,   379,
      59,   120,   268,   205,   206,   293,   396,   269,   184,   281,
     282,   283,   284,   285,    42,   369,   370,   371,   286,   353,
     287,   372,   373,   374,   375,   376,   377,    43,    44,    45,
     126,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     150,   124,   119,   112,   112,   130,    48,   275,   118,    57,
     196,   211,   110,   110,   179,   158,   185,   108,   417,   108,
      51,   204,   115,   139,   135,    69,    51,   216,    51,   121,
     306,   113,   114,   131,   176,   389,   215,    51,   112,   183,
     240,   315,    46,   315,     8,     9,    10,   110,   240,   240,
     122,   327,   162,   163,    51,    62,   390,   150,   135,   150,
     182,   432,   220,   274,    49,   112,   151,   112,   221,   191,
     464,   199,    50,   246,   110,   190,   110,   117,   248,   249,
     250,   164,   165,   462,   118,   217,   218,   112,    51,   297,
     170,   171,    53,    52,   266,   112,   110,   112,   193,    52,
     112,    52,   193,    53,   110,   316,   110,   216,   216,   110,
      52,    53,   177,   307,    32,   275,   215,   215,   478,   479,
      53,   306,    47,   223,    54,   224,   195,   288,   225,   182,
     291,   181,   210,   308,   315,    63,   118,    53,   417,   392,
     417,   166,   167,   135,   220,   172,    51,    60,    61,   226,
     312,   290,   332,    64,    65,    66,   145,    32,   245,   344,
     324,    52,   118,   279,   307,   280,   190,   112,   112,   339,
     350,    53,   146,   152,   153,   154,   110,   110,   128,   289,
     159,   351,   129,   180,   273,   160,   161,   181,   108,   348,
     468,   314,   311,    53,   180,   349,   469,   195,   181,   216,
     276,   173,   239,   240,   277,   325,   326,   175,   215,   174,
     296,   240,   328,   178,   303,   255,   256,   257,   258,   288,
     168,   169,   407,   181,   186,   118,   442,   443,   187,   190,
     188,   368,   118,   474,   240,   416,   130,   290,   475,   240,
     155,   321,   202,   322,   156,   189,   157,   222,   108,   476,
     240,   346,   190,   490,   240,   492,   240,   494,   240,   112,
      95,   219,    95,   251,   252,   259,   260,   197,   110,   253,
     254,   445,   446,   331,   241,   112,   108,   337,   242,   388,
     343,   247,   431,   278,   110,   123,   195,   190,  -256,   141,
     143,   144,   198,   200,   202,   118,   292,   400,   294,   190,
     383,   295,   347,   384,   453,   298,   299,   313,    95,   317,
     318,   319,   333,   320,   329,   330,   368,   334,   345,   413,
     378,   382,   391,   405,   108,   385,   386,   420,   419,   399,
     323,   401,   404,   408,   409,   402,   414,   422,   403,   457,
     458,   459,   418,   406,   421,   425,   423,   412,   424,   426,
     427,   195,   435,   428,   460,   416,   429,   416,   436,   463,
     108,   437,   190,   440,   438,   441,   311,   444,   447,   455,
     461,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,   448,
     202,   449,   452,   470,   484,   486,   488,   471,   112,   472,
     195,   195,   202,   477,   454,   489,   456,   110,   496,   202,
     450,   466,   262,   451,    72,    73,    74,    75,    76,    77,
     195,    78,    79,   264,   192,   304,   439,   381,   261,   352,
     434,    95,    68,   263,     0,     0,     0,     0,   265,     0,
     473,     0,    80,     0,   465,     0,     0,   467,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,     0,   481,
     482,   483,     0,     0,     0,     0,     0,     0,     0,     0,
     491,   195,   493,   195,   495,     0,     0,   497,     0,   498,
       0,    81,     0,    82,     0,     0,     0,    83,     0,     0,
       0,    95,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     430,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,   354,    73,    74,    75,
      76,    77,     0,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     1,    80,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   237,
     355,   356,   357,    95,   358,   359,   360,   361,   362,   363,
     364,   365,    26,    81,    27,    82,    28,    29,    30,    83,
       0,     0,     0,     0,     0,     0,   197,   433,    84,    85,
      86,    87,    88,    89,     0,     0,   354,    73,    74,    75,
      76,    77,   366,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    80,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     355,   356,   357,     0,   358,   359,   360,   361,   362,   363,
     364,   365,    26,    81,    27,    82,    28,    29,    30,    83,
       0,     0,     0,     0,     0,     0,   197,     0,    84,    85,
      86,    87,    88,    89,     0,     0,    72,    73,    74,    75,
      76,    77,   366,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    80,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   354,
      73,    74,    75,    76,    77,     0,    78,    79,     0,     0,
       0,     0,    26,    81,    27,    82,    28,    29,    30,    83,
       0,     0,     0,     0,     0,     0,     0,    80,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,   366,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,   355,   356,   357,     0,   358,   359,   360,
     361,   362,   363,   364,   365,     0,    81,     0,    82,     0,
       0,    80,    83,     0,     0,     0,     0,     0,     0,   197,
       0,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,     0,     0,    72,    73,    74,    75,    76,    77,   366,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    80,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    27,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    80,
      78,    79,   207,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    80,    78,    79,   270,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    81,   117,
      82,     0,     0,    80,    83,     0,   300,     0,     0,   208,
       8,     9,    10,    84,   209,    86,    87,    88,    89,     0,
      81,   117,    82,     0,     0,     0,    83,     0,     0,     0,
       0,   271,     0,     0,     0,    84,   272,    86,    87,    88,
      89,     0,    81,   117,    82,     0,     0,     0,    83,     0,
       0,     0,     0,   301,     0,     0,     0,    84,   302,    86,
      87,    88,    89,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    80,    78,    79,   335,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    80,    78,    79,   340,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
      81,   117,    82,     0,     0,    80,    83,     0,   410,     0,
       0,   336,     8,     9,    10,    84,    85,    86,    87,    88,
      89,     0,    81,   117,    82,     0,     0,     0,    83,     0,
       0,     0,     0,   341,     0,     0,     0,    84,   342,    86,
      87,    88,    89,     0,    81,   117,    82,     0,     0,     0,
      83,     0,     0,     0,     0,   411,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    80,    78,    79,     0,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    80,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,   117,    82,     0,     0,    80,    83,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,     0,    81,     0,    82,     0,     0,     0,
      83,     0,     0,     0,   279,     0,   280,   194,   415,    84,
      85,    86,    87,    88,    89,     0,    81,     0,    82,     0,
       0,     0,    83,     0,     0,     0,   279,     0,   280,   194,
     480,    84,    85,    86,    87,    88,    89,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    80,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    80,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,     0,     0,    80,
      83,     0,     0,     0,   279,     0,   280,   194,     0,    84,
      85,    86,    87,    88,    89,     0,    81,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,   194,
       0,    84,    85,    86,    87,    88,    89,     0,    81,     0,
      82,     0,     0,     0,    83,   243,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    80,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    80,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,     0,
       0,    80,    83,     0,     0,     0,     0,     0,     0,   323,
       0,    84,    85,    86,    87,    88,    89,     0,    81,     0,
      82,     0,     0,     0,    83,   485,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,     0,
      81,     0,    82,     0,     0,     0,    83,   487,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    80,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    80,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      82,     0,     0,    80,    83,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,     0,
      81,     0,    82,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    51,    81,     0,    82,     0,     0,     0,   142,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,   288,   267,     0,     0,   181,     0,
       0,     0,     0,     0,    53,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,  -286,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   123,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,   180,   267,     0,     1,   181,     0,
       0,     0,     0,     0,    53,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,     0,     1,     0,     0,     0,     0,     0,
       0,   305,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   387,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     1,
     197,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   201,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     1,   338,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     1,    30,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      26,     0,    27,     0,    28,     0,    30,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
      27,     0,     0,    29,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,   393,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,    27,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      83,    57,    53,    48,    49,    59,    76,   182,    53,    32,
     123,   129,    48,    49,   110,    96,   112,    48,   348,    50,
       3,   128,    50,    71,     3,    83,     3,   132,     3,    78,
     213,    48,    49,    83,    19,    78,   132,     3,    83,   111,
      78,   220,     3,   222,    38,    39,    40,    83,    78,    78,
      99,    81,    87,    88,     3,     3,    99,   140,     3,   142,
     111,    99,    78,   181,    76,   110,    83,   112,    84,   120,
      99,   127,    76,   156,   110,   120,   112,    71,   159,   160,
     161,    12,    13,   426,   129,   133,   134,   132,     3,   207,
      16,    17,    86,    76,   177,   140,   132,   142,   121,    76,
     145,    76,   125,    86,   140,    84,   142,   212,   213,   145,
      76,    86,    97,    79,     0,   290,   212,   213,   461,   462,
      86,   304,    83,   140,    99,   142,   123,    76,   145,   180,
     202,    80,   129,    99,   313,    83,   181,    86,   468,    84,
     470,    14,    15,     3,    78,    85,     3,    33,    34,   146,
      84,   202,   270,    39,    40,    41,    76,    43,   155,   277,
     241,    76,   207,    80,    79,    82,   211,   212,   213,   276,
     283,    86,    76,     9,    10,    11,   212,   213,    76,   202,
      86,    98,    80,    76,   181,    91,    92,    80,   219,    78,
      78,   219,   215,    86,    76,    84,    84,   194,    80,   304,
      76,    95,    77,    78,    80,    77,    78,    18,   304,    96,
     207,    78,    79,    77,   211,   166,   167,   168,   169,    76,
      93,    94,   340,    80,    77,   270,    77,    78,    77,   274,
      78,   287,   277,    77,    78,   348,   290,   288,    77,    78,
      76,   238,   128,   240,    80,    77,    82,    78,   279,    77,
      78,   279,   297,    77,    78,    77,    78,    77,    78,   304,
      48,    98,    50,   162,   163,   170,   171,    83,   304,   164,
     165,   397,   398,   270,    77,   320,   307,   274,     3,   307,
     277,     3,   365,     6,   320,    98,   283,   332,    84,    77,
      78,    79,   126,   127,   180,   340,     3,   328,    77,   344,
     297,    78,     3,   300,   417,    81,    81,    78,    96,    77,
      77,    77,    81,    78,    77,    77,   372,    81,    77,    99,
      78,    81,    79,    77,   355,    81,    81,   355,    79,   326,
      83,    81,    81,    81,    81,   332,    81,    76,   335,   422,
     423,   424,    84,   340,    79,   360,    76,   344,    76,    76,
       3,   348,     3,    99,    62,   468,    99,   470,    77,    99,
     391,    81,   407,   391,    81,    79,   389,    79,    81,    79,
     426,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    81,
     276,    81,    81,    78,   477,   478,   479,    81,   443,    81,
     397,   398,   288,    76,   419,    60,   421,   443,    99,   295,
     407,   443,   173,   410,     3,     4,     5,     6,     7,     8,
     417,    10,    11,   175,   121,   212,   389,   295,   172,   284,
     372,   219,    43,   174,    -1,    -1,    -1,    -1,   176,    -1,
     455,    -1,    31,    -1,   441,    -1,    -1,   444,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,   474,
     475,   476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     485,   468,   487,   470,   489,    -1,    -1,   492,    -1,   494,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    98,
      57,    58,    59,   391,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,    81,
      38,    39,    40,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    31,    76,    -1,    34,    -1,
      -1,    81,    38,    39,    40,    85,    86,    87,    88,    89,
      90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    98,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    30,    80,    -1,
      -1,    -1,    -1,    -1,    86,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    84,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      83,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    30,    77,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    30,    77,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    30,    75,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      69,    -1,    71,    -1,    73,    -1,    75,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      71,    -1,    -1,    74,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   130,   131,   134,   135,   136,   139,   145,   152,   153,
     154,   155,   174,   187,   188,   189,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   132,   133,   156,   157,   160,
     131,   131,     3,    83,   131,   131,   131,     0,   188,    83,
     146,   147,     3,     4,     5,     6,     7,     8,    10,    11,
      31,    70,    72,    76,    85,    86,    87,    88,    89,    90,
     101,   102,   104,   105,   108,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   129,
     135,   142,   153,   166,   166,   129,   156,    71,   153,   160,
     161,    78,    99,    98,   130,   131,   190,   191,    76,    80,
     157,    83,   137,   148,   149,     3,   103,   150,   151,   150,
      76,   112,    76,   112,   112,    76,    76,   112,   125,   126,
     128,   166,     9,    10,    11,    76,    80,    82,   114,    86,
      91,    92,    87,    88,    12,    13,    14,    15,    93,    94,
      16,    17,    85,    95,    96,    18,    19,    97,    77,   142,
      76,    80,   160,   167,   168,   142,    77,    77,    78,    77,
     153,   160,   133,   156,    83,   126,   169,    83,   177,   130,
     177,    77,   131,   158,   162,   163,   164,    34,    81,    86,
     126,   161,   138,   140,   141,   142,   174,   150,   150,    98,
      78,    84,    78,   166,   166,   166,   126,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    98,   127,    77,
      78,    77,     3,    77,   111,   126,   128,     3,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   118,
     118,   119,   120,   121,   122,   123,   128,    77,   162,   167,
      34,    81,    86,   126,   161,   168,    76,    80,     6,    80,
      82,   169,   170,   171,   172,   173,   178,   180,    76,   156,
     160,   167,     3,   165,    77,    78,   126,   161,    81,    81,
      34,    81,    86,   126,   140,    84,   141,    79,    99,   143,
     144,   156,    84,    78,   129,   151,    84,    77,    77,    77,
      78,   126,   126,    83,   114,    77,    78,    81,    79,    77,
      77,   126,   161,    81,    81,    34,    81,   126,    77,   162,
      34,    81,    86,   126,   161,    77,   129,     3,    78,    84,
     169,    98,   173,   179,     3,    57,    58,    59,    61,    62,
      63,    64,    65,    66,    67,    68,    99,   128,   130,   175,
     176,   177,   181,   182,   183,   184,   185,   186,    78,   159,
      56,   164,    81,   126,   126,    81,    81,    84,   129,    78,
      99,    79,    84,    58,   106,   107,   166,   109,   110,   126,
     125,    81,   126,   126,    81,    77,   126,   161,    81,    81,
      34,    81,   126,    99,    81,    84,   169,   171,    84,    79,
     129,    79,    76,    76,    76,   175,    76,     3,    99,    99,
      99,   128,    99,    84,   182,     3,    77,    81,    81,   144,
     129,    79,    77,    78,    79,   170,   170,    81,    81,    81,
     126,   126,    81,   169,   175,    79,   175,   128,   128,   128,
      62,   130,   183,    99,    99,   126,   107,   126,    78,    84,
      78,    81,    81,   175,    77,    77,    77,    76,   183,   183,
      84,   175,   175,   175,   128,    77,   128,    77,   128,    60,
      77,   175,    77,   175,    77,   175,    99,   175,   175
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   108,   110,   108,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   137,   136,   138,   136,   136,   139,   139,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   144,   146,   145,   147,   145,   148,   145,   149,
     145,   145,   150,   150,   151,   151,   152,   153,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   159,   157,   160,   160,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   169,   169,   170,   170,   170,
     170,   171,   172,   172,   173,   173,   174,   175,   175,   175,
     175,   175,   175,   176,   176,   176,   178,   179,   177,   180,
     177,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   190,   189,   191,   191
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     0,     7,     0,     8,
       1,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     0,     6,     2,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     3,     1,     0,     5,     0,     6,     0,     6,     0,
       7,     2,     1,     3,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     4,     4,     2,     1,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       0,     0,     6,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     0,     0,     4,     0,
       4,     1,     2,     1,     1,     1,     2,     7,     5,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     0,     4,     1,     2
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
        case 26:
#line 83 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2081 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);/*je crois que c'est la block d'une fonctionne, à vérifier*/}
#line 2087 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2093 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2099 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 208 "parse.y" /* yacc.c:1646  */
    {printf("variable : %s \n",(yyvsp[-1].val)); /*variables*/}
#line 2105 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 209 "parse.y" /* yacc.c:1646  */
    {create_variable((yyvsp[-1].val),(yyvsp[-2].val),"description");	/*type=2; printf("type : %s variable :%s \n",$1,); variables*/}
#line 2111 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 214 "parse.y" /* yacc.c:1646  */
    {/*ajouter_typedef($2);*/}
#line 2117 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 265 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2123 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 265 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2129 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 266 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2135 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 266 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2141 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 305 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2147 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 305 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2153 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 306 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2159 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 306 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2165 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 307 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2171 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 307 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2177 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 308 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2183 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 308 "parse.y" /* yacc.c:1646  */
    {fin_block(tmp);}
#line 2189 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 351 "parse.y" /* yacc.c:1646  */
    {printf(" tableau %s \n",(yyvsp[-2].val));}
#line 2195 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 362 "parse.y" /* yacc.c:1646  */
    {/*cree nouvelle liste pour passer en parametre à tmp=new_block list l=list_create();*/}
#line 2201 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 362 "parse.y" /* yacc.c:1646  */
    {}
#line 2207 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 389 "parse.y" /* yacc.c:1646  */
    {add_parameter((yyvsp[0].val),(yyvsp[-1].val),"descri");}
#line 2213 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 481 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2219 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 481 "parse.y" /* yacc.c:1646  */
    {fin_block("block0");/*"block0 car tmp fait bugguer; à régler*/}
#line 2225 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 482 "parse.y" /* yacc.c:1646  */
    {tmp=new_block(list_create());}
#line 2231 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 482 "parse.y" /* yacc.c:1646  */
    {fin_block("block0");}
#line 2237 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 535 "parse.y" /* yacc.c:1646  */
    {name_function((yyvsp[0].val),(yyvsp[-1].val),"description");}
#line 2243 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2247 "parse.tab.c" /* yacc.c:1646  */
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
#line 543 "parse.y" /* yacc.c:1906  */

void yyerror(const char *s){
	fprintf(stderr,"syntaxe error %s",s);
}
