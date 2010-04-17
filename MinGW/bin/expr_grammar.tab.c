/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     LE_AUTO = 258,
     LE_DOUBLE = 259,
     LE_INT = 260,
     LE_STRUCT = 261,
     LE_BREAK = 262,
     LE_ELSE = 263,
     LE_LONG = 264,
     LE_SWITCH = 265,
     LE_CASE = 266,
     LE_ENUM = 267,
     LE_REGISTER = 268,
     LE_TYPEDEF = 269,
     LE_CHAR = 270,
     LE_EXTERN = 271,
     LE_RETURN = 272,
     LE_UNION = 273,
     LE_CONST = 274,
     LE_FLOAT = 275,
     LE_SHORT = 276,
     LE_UNSIGNED = 277,
     LE_CONTINUE = 278,
     LE_FOR = 279,
     LE_SIGNED = 280,
     LE_VOID = 281,
     LE_DEFAULT = 282,
     LE_GOTO = 283,
     LE_SIZEOF = 284,
     LE_VOLATILE = 285,
     LE_DO = 286,
     LE_IF = 287,
     LE_STATIC = 288,
     LE_WHILE = 289,
     LE_NEW = 290,
     LE_DELETE = 291,
     LE_THIS = 292,
     LE_OPERATOR = 293,
     LE_CLASS = 294,
     LE_PUBLIC = 295,
     LE_PROTECTED = 296,
     LE_PRIVATE = 297,
     LE_VIRTUAL = 298,
     LE_FRIEND = 299,
     LE_INLINE = 300,
     LE_OVERLOAD = 301,
     LE_TEMPLATE = 302,
     LE_TYPENAME = 303,
     LE_THROW = 304,
     LE_CATCH = 305,
     LE_IDENTIFIER = 306,
     LE_STRINGliteral = 307,
     LE_FLOATINGconstant = 308,
     LE_INTEGERconstant = 309,
     LE_CHARACTERconstant = 310,
     LE_OCTALconstant = 311,
     LE_HEXconstant = 312,
     LE_POUNDPOUND = 313,
     LE_CComment = 314,
     LE_CPPComment = 315,
     LE_NAMESPACE = 316,
     LE_USING = 317,
     LE_TYPEDEFname = 318,
     LE_ARROW = 319,
     LE_ICR = 320,
     LE_DECR = 321,
     LE_LS = 322,
     LE_RS = 323,
     LE_LE = 324,
     LE_GE = 325,
     LE_EQ = 326,
     LE_NE = 327,
     LE_ANDAND = 328,
     LE_OROR = 329,
     LE_ELLIPSIS = 330,
     LE_CLCL = 331,
     LE_DOTstar = 332,
     LE_ARROWstar = 333,
     LE_MULTassign = 334,
     LE_DIVassign = 335,
     LE_MODassign = 336,
     LE_PLUSassign = 337,
     LE_MINUSassign = 338,
     LE_LSassign = 339,
     LE_RSassign = 340,
     LE_ANDassign = 341,
     LE_ERassign = 342,
     LE_ORassign = 343,
     LE_MACRO = 344,
     LE_DYNAMIC_CAST = 345,
     LE_STATIC_CAST = 346,
     LE_CONST_CAST = 347,
     LE_REINTERPRET_CAST = 348
   };
#endif
/* Tokens.  */
#define LE_AUTO 258
#define LE_DOUBLE 259
#define LE_INT 260
#define LE_STRUCT 261
#define LE_BREAK 262
#define LE_ELSE 263
#define LE_LONG 264
#define LE_SWITCH 265
#define LE_CASE 266
#define LE_ENUM 267
#define LE_REGISTER 268
#define LE_TYPEDEF 269
#define LE_CHAR 270
#define LE_EXTERN 271
#define LE_RETURN 272
#define LE_UNION 273
#define LE_CONST 274
#define LE_FLOAT 275
#define LE_SHORT 276
#define LE_UNSIGNED 277
#define LE_CONTINUE 278
#define LE_FOR 279
#define LE_SIGNED 280
#define LE_VOID 281
#define LE_DEFAULT 282
#define LE_GOTO 283
#define LE_SIZEOF 284
#define LE_VOLATILE 285
#define LE_DO 286
#define LE_IF 287
#define LE_STATIC 288
#define LE_WHILE 289
#define LE_NEW 290
#define LE_DELETE 291
#define LE_THIS 292
#define LE_OPERATOR 293
#define LE_CLASS 294
#define LE_PUBLIC 295
#define LE_PROTECTED 296
#define LE_PRIVATE 297
#define LE_VIRTUAL 298
#define LE_FRIEND 299
#define LE_INLINE 300
#define LE_OVERLOAD 301
#define LE_TEMPLATE 302
#define LE_TYPENAME 303
#define LE_THROW 304
#define LE_CATCH 305
#define LE_IDENTIFIER 306
#define LE_STRINGliteral 307
#define LE_FLOATINGconstant 308
#define LE_INTEGERconstant 309
#define LE_CHARACTERconstant 310
#define LE_OCTALconstant 311
#define LE_HEXconstant 312
#define LE_POUNDPOUND 313
#define LE_CComment 314
#define LE_CPPComment 315
#define LE_NAMESPACE 316
#define LE_USING 317
#define LE_TYPEDEFname 318
#define LE_ARROW 319
#define LE_ICR 320
#define LE_DECR 321
#define LE_LS 322
#define LE_RS 323
#define LE_LE 324
#define LE_GE 325
#define LE_EQ 326
#define LE_NE 327
#define LE_ANDAND 328
#define LE_OROR 329
#define LE_ELLIPSIS 330
#define LE_CLCL 331
#define LE_DOTstar 332
#define LE_ARROWstar 333
#define LE_MULTassign 334
#define LE_DIVassign 335
#define LE_MODassign 336
#define LE_PLUSassign 337
#define LE_MINUSassign 338
#define LE_LSassign 339
#define LE_RSassign 340
#define LE_ANDassign 341
#define LE_ERassign 342
#define LE_ORassign 343
#define LE_MACRO 344
#define LE_DYNAMIC_CAST 345
#define LE_STATIC_CAST 346
#define LE_CONST_CAST 347
#define LE_REINTERPRET_CAST 348




/* Copy the first part of user declarations.  */

   
// Copyright Eran Ifrah(c)


/*************** Includes and Defines *****************************/
#include "string"
#include "vector"
#include "stdio.h"
#include "map"
#include "expression_result.h"

#define YYSTYPE std::string
#define YYDEBUG 0        /* get the pretty debugging code to compile*/

void cl_expr_error(char *string);

static ExpressionResult result;

//---------------------------------------------
// externs defined in the lexer
//---------------------------------------------
extern char *cl_expr_text;
extern int cl_expr_lex();
extern int cl_expr_parse();
extern int cl_expr_lineno;
extern std::vector<std::string> currentScope;
extern bool setExprLexerInput(const std::string &in);
extern void cl_expr_lex_clean();

/*************** Standard ytab.c continues here *********************/


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  21
/* YYNRULES -- Number of rules. */
#define YYNRULES  54
/* YYNRULES -- Number of states. */
#define YYNSTATES  82

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,     2,
      97,    99,    98,     2,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   101,
      95,     2,    96,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    13,    14,    16,
      18,    20,    22,    24,    26,    28,    30,    32,    34,    35,
      37,    41,    46,    51,    59,    66,    69,    73,    77,    84,
      90,    99,   102,   103,   107,   108,   110,   112,   114,   116,
     118,   119,   121,   122,   125,   128,   129,   131,   133,   140,
     144,   145,   148,   151,   152
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
     105,     0,    -1,    -1,   105,   106,    -1,    -1,   107,   112,
      -1,     1,    -1,    -1,    19,    -1,     5,    -1,    15,    -1,
      21,    -1,     9,    -1,    20,    -1,     4,    -1,    25,    -1,
      22,    -1,    26,    -1,    -1,   111,    -1,   110,    94,   111,
      -1,   108,   122,    51,   119,    -1,   108,   122,   109,   119,
      -1,   108,   122,    51,    95,   110,    96,   119,    -1,   120,
     116,    95,   121,    96,    97,    -1,   120,    37,    -1,   120,
      98,    37,    -1,   120,    98,   113,    -1,   120,    97,   121,
      99,   119,   113,    -1,   120,   122,   113,   114,   115,    -1,
     120,    97,    97,   121,    99,   119,   113,    99,    -1,    51,
     124,    -1,    -1,    95,   110,    96,    -1,    -1,    97,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    -1,   100,
      -1,    -1,   118,    98,    -1,   118,   117,    -1,    -1,   101,
      -1,   102,    -1,   122,    51,    95,   110,    96,   119,    -1,
     122,    51,   119,    -1,    -1,   122,   123,    -1,    51,    76,
      -1,    -1,   103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    94,    94,    95,    98,    98,    99,   108,   109,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   124,   125,
     126,   130,   132,   134,   138,   148,   158,   167,   177,   186,
     198,   210,   212,   213,   216,   217,   225,   226,   227,   228,
     231,   232,   235,   236,   239,   242,   243,   244,   247,   257,
     267,   268,   271,   274,   275
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LE_AUTO", "LE_DOUBLE", "LE_INT",
  "LE_STRUCT", "LE_BREAK", "LE_ELSE", "LE_LONG", "LE_SWITCH", "LE_CASE",
  "LE_ENUM", "LE_REGISTER", "LE_TYPEDEF", "LE_CHAR", "LE_EXTERN",
  "LE_RETURN", "LE_UNION", "LE_CONST", "LE_FLOAT", "LE_SHORT",
  "LE_UNSIGNED", "LE_CONTINUE", "LE_FOR", "LE_SIGNED", "LE_VOID",
  "LE_DEFAULT", "LE_GOTO", "LE_SIZEOF", "LE_VOLATILE", "LE_DO", "LE_IF",
  "LE_STATIC", "LE_WHILE", "LE_NEW", "LE_DELETE", "LE_THIS", "LE_OPERATOR",
  "LE_CLASS", "LE_PUBLIC", "LE_PROTECTED", "LE_PRIVATE", "LE_VIRTUAL",
  "LE_FRIEND", "LE_INLINE", "LE_OVERLOAD", "LE_TEMPLATE", "LE_TYPENAME",
  "LE_THROW", "LE_CATCH", "LE_IDENTIFIER", "LE_STRINGliteral",
  "LE_FLOATINGconstant", "LE_INTEGERconstant", "LE_CHARACTERconstant",
  "LE_OCTALconstant", "LE_HEXconstant", "LE_POUNDPOUND", "LE_CComment",
  "LE_CPPComment", "LE_NAMESPACE", "LE_USING", "LE_TYPEDEFname",
  "LE_ARROW", "LE_ICR", "LE_DECR", "LE_LS", "LE_RS", "LE_LE", "LE_GE",
  "LE_EQ", "LE_NE", "LE_ANDAND", "LE_OROR", "LE_ELLIPSIS", "LE_CLCL",
  "LE_DOTstar", "LE_ARROWstar", "LE_MULTassign", "LE_DIVassign",
  "LE_MODassign", "LE_PLUSassign", "LE_MINUSassign", "LE_LSassign",
  "LE_RSassign", "LE_ANDassign", "LE_ERassign", "LE_ORassign", "LE_MACRO",
  "LE_DYNAMIC_CAST", "LE_STATIC_CAST", "LE_CONST_CAST",
  "LE_REINTERPRET_CAST", "','", "'<'", "'>'", "'('", "'*'", "')'", "'&'",
  "';'", "':'", "'['", "$accept", "translation_unit", "primary_expr", "@1",
  "const_spec", "basic_type_name", "parameter_list", "template_parameter",
  "simple_expr", "identifier_name", "optional_template_init_list",
  "optinal_postifx", "special_cast", "amp_item", "star_list",
  "special_star_amp", "stmnt_starter", "cast_type",
  "nested_scope_specifier", "scope_specifier", "array_brackets", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     345,   346,   347,   348,    44,    60,    62,    40,    42,    41,
      38,    59,    58,    91
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   104,   105,   105,   107,   106,   106,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     4,     4,     7,     6,     2,     3,     3,     6,     5,
       8,     2,     0,     3,     0,     1,     1,     1,     1,     1,
       0,     1,     0,     2,     2,     0,     1,     1,     6,     3,
       0,     2,     2,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     1,     6,     3,    45,    46,    47,     5,    50,
      25,    36,    37,    38,    39,    50,     0,     0,     0,    50,
       0,     0,    26,    53,    27,    50,    53,    32,    51,     0,
      42,    42,    54,    31,     0,    52,     7,    34,    42,    40,
       0,     7,    49,     0,     8,    50,     0,    19,    35,    29,
       0,    43,    41,    44,    28,     0,    24,     0,     7,    33,
       0,    42,    14,     9,    12,    10,    13,    11,    16,    15,
      17,    42,    42,    20,    30,    48,     7,    21,    22,     0,
      42,    23
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     1,     4,     5,    45,    72,    46,    47,     8,    24,
      37,    49,    17,    53,    39,    40,     9,    20,    21,    28,
      33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yysigned_char yypact[] =
{
     -82,     0,   -82,   -82,   -82,   -52,   -82,   -82,   -82,   -34,
     -82,   -82,   -82,   -82,   -82,   -77,   -22,   -70,   -23,   -82,
     -68,   -16,   -82,   -65,   -82,   -82,   -67,   -53,   -82,   -45,
     -82,   -63,   -82,   -82,   -41,   -82,   -17,   -37,   -82,   -81,
      10,   -17,   -82,   -35,   -82,   -82,   -55,   -82,   -82,   -82,
      10,   -82,   -82,   -82,   -82,   -48,   -82,     1,    46,   -82,
     -32,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -62,   -82,   -82,   -82,   -82,   -17,   -82,   -82,   -28,
     -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -82,   -82,   -82,   -82,   -82,   -82,   -29,    11,   -82,   -10,
     -82,   -82,   -82,   -82,   -82,   -27,   -82,    -1,    -2,   -82,
     -82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -19
static const yysigned_char yytable[] =
{
       2,     3,    44,    10,    42,    62,    63,    18,    27,    35,
      64,    50,    55,    35,    35,    22,    65,    51,    29,    52,
      19,    66,    67,    68,    34,    25,    69,    70,    26,    23,
      54,    30,    41,    76,    75,    31,    32,    -4,    32,    58,
      60,    59,    36,    57,    77,    78,    58,    79,    61,     6,
       7,    -4,    71,    81,    38,    43,    11,    12,    13,    14,
      48,    23,    56,    15,    16,    44,    58,    74,    80,    73,
       0,     0,     0,     0,     0,     0,     0,   -18,     0,   -18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -4,    -4,    -4,    -4,     0,     0,     0,    -4,    -4,     0,
       0,    -4,    -4
};

static const yysigned_char yycheck[] =
{
       0,     1,    19,    37,    31,     4,     5,     9,    18,    76,
       9,    38,    41,    76,    76,    37,    15,    98,    19,   100,
      97,    20,    21,    22,    25,    95,    25,    26,    51,    51,
      40,    99,    95,    95,    61,    51,   103,    37,   103,    94,
      50,    96,    95,    45,    71,    72,    94,    76,    96,   101,
     102,    51,    51,    80,    99,    96,    90,    91,    92,    93,
      97,    51,    97,    97,    98,    19,    94,    99,    96,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,   101,   102
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,   105,     0,     1,   106,   107,   101,   102,   112,   120,
      37,    90,    91,    92,    93,    97,    98,   116,   122,    97,
     121,   122,    37,    51,   113,    95,    51,   113,   123,   121,
      99,    51,   103,   124,   121,    76,    95,   114,    99,   118,
     119,    95,   119,    96,    19,   108,   110,   111,    97,   115,
     119,    98,   100,   117,   113,   110,    97,   122,    94,    96,
     113,    96,     4,     5,     9,    15,    20,    21,    22,    25,
      26,    51,   109,   111,    99,   119,    95,   119,   119,   110,
      96,   119
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 4:

    {result.Reset();;}
    break;

  case 6:

    { 
								yyclearin;	//clear lookahead token
								yyerrok;
								//fprintf(stderr, "CodeLite: syntax error, unexpected token '%s' found at line %d \n", cl_expr_text, cl_expr_lineno);
								//fflush(stderr);
								expr_syncParser();
						;}
    break;

  case 7:

    {(yyval) = ""; ;}
    break;

  case 8:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 9:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 10:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 11:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 12:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 13:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 14:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 15:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 16:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 17:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 18:

    {(yyval) = "";;}
    break;

  case 19:

    {(yyval) = (yyvsp[0]);;}
    break;

  case 20:

    {(yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);;}
    break;

  case 21:

    {(yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + " " + (yyvsp[-1]) +(yyvsp[0]);;}
    break;

  case 22:

    {(yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + " " + (yyvsp[-1]) +(yyvsp[0]);;}
    break;

  case 23:

    {(yyval) = (yyvsp[-6]) + " " + (yyvsp[-5]) + " " + (yyvsp[-4]) +(yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]);;}
    break;

  case 24:

    {
						expr_FuncArgList(); 
						(yyval) = (yyvsp[-2]);
						result.m_isaType = true;
						result.m_name = (yyvsp[-2]);
						result.m_isFunc = false;
						printf("Rule 1\n");
						//result.Print();
					;}
    break;

  case 25:

    {
						(yyval) = (yyvsp[0]);
						result.m_isaType = false;
						result.m_name = (yyval);
						result.m_isFunc = false;
						result.m_isThis = true;
						result.m_isPtr = true;
						//result.Print();
					;}
    break;

  case 26:

    {
						(yyval) = (yyvsp[0]);
						result.m_isaType = false;
						result.m_name = (yyval);
						result.m_isFunc = false;
						result.m_isThis = true;
						//result.Print();
					;}
    break;

  case 27:

    {
						(yyval) = (yyvsp[0]);
						result.m_isaType = false;
						result.m_name = (yyval);
						result.m_isFunc = false;
						result.m_isThis = false;
						result.m_isPtr = false;
						//result.Print();
					;}
    break;

  case 28:

    {
						(yyval) = (yyvsp[-3]);
						result.m_isaType = true;
						result.m_name = (yyval);
						result.m_isFunc = false;
						result.m_isThis = false;
						//result.Print();
					;}
    break;

  case 29:

    {
						result.m_isaType = false;
						result.m_name = (yyvsp[-2]);
						result.m_isThis = false;
						(yyvsp[-3]).erase((yyvsp[-3]).find_last_not_of(":")+1);
						result.m_scope = (yyvsp[-3]);
						result.m_isTemplate = (yyvsp[-1]).empty() ? false : true;
						result.m_templateInitList = (yyvsp[-1]);
						//result.Print();
					;}
    break;

  case 30:

    {
						(yyval) = (yyvsp[-4]);
						result.m_isaType = true;
						result.m_name = (yyval);
						result.m_isFunc = false;
						result.m_isThis = false;
						//result.Print();
					;}
    break;

  case 31:

    {(yyval) = (yyvsp[-1]);;}
    break;

  case 32:

    {(yyval) = "";;}
    break;

  case 33:

    {(yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);;}
    break;

  case 34:

    {(yyval) = "";;}
    break;

  case 35:

    {
						(yyval) = (yyvsp[0]); 
						expr_FuncArgList();
						result.m_isFunc = true;
					;}
    break;

  case 36:

    {(yyval) = (yyvsp[0]);;}
    break;

  case 37:

    {(yyval) = (yyvsp[0]);;}
    break;

  case 38:

    {(yyval) = (yyvsp[0]);;}
    break;

  case 39:

    {(yyval) = (yyvsp[0]);;}
    break;

  case 40:

    {(yyval) = ""; ;}
    break;

  case 41:

    { (yyval) = (yyvsp[0]); ;}
    break;

  case 42:

    {(yyval) = ""; ;}
    break;

  case 43:

    {(yyval) = (yyvsp[-1]) + (yyvsp[0]);;}
    break;

  case 44:

    { (yyval) = (yyvsp[-1]) + (yyvsp[0]); ;}
    break;

  case 45:

    {(yyval) = "";;}
    break;

  case 46:

    { (yyval) = ";";;}
    break;

  case 47:

    { (yyval) = ":";;}
    break;

  case 48:

    {
					(yyval) = (yyvsp[-5]) + (yyvsp[-4]); 
					(yyvsp[-5]).erase((yyvsp[-5]).find_last_not_of(":")+1);
					result.m_scope = (yyvsp[-5]); 
					result.m_name = (yyvsp[-4]);
					result.m_isPtr = ((yyvsp[0]).find("*") != (size_t)-1);;
					result.m_isTemplate = true;
					result.m_templateInitList = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]);
				;}
    break;

  case 49:

    {
					(yyval) = (yyvsp[-2]) + (yyvsp[-1]); 
					(yyvsp[-2]).erase((yyvsp[-2]).find_last_not_of(":")+1);
					result.m_scope = (yyvsp[-2]); 
					result.m_name = (yyvsp[-1]);
					result.m_isPtr = ((yyvsp[0]).find("*") != (size_t)-1);;
				;}
    break;

  case 50:

    {(yyval) = "";;}
    break;

  case 51:

    {	(yyval) = (yyvsp[-1]) + (yyvsp[0]);;}
    break;

  case 52:

    {(yyval) = (yyvsp[-1])+ (yyvsp[0]);;}
    break;

  case 53:

    { (yyval) = ""; ;}
    break;

  case 54:

    { expr_consumBracketsContent('['); (yyval) = "[]";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}




void yyerror(char *s) {}

void expr_consumBracketsContent(char openBrace)
{
	char closeBrace;
	
	switch(openBrace) {
	case '(': closeBrace = ')'; break;
	case '[': closeBrace = ']'; break;
	case '<': closeBrace = '>'; break;
	case '{': closeBrace = '}'; break;
	default:
		openBrace = '(';
		closeBrace = ')';
		break;
	}
	
	int depth = 1;
	while(depth > 0)
	{
		int ch = cl_expr_lex();
		//printf("ch=%d\n", ch);
		//fflush(stdout);
		if(ch == 0){
			break;
		}
		
		if(ch == closeBrace)
		{
			depth--;
			continue;
		}
		else if(ch == openBrace)
		{
			depth ++ ;
			continue;
		}
	}
}

void expr_FuncArgList()
{
	int depth = 1;
	while(depth > 0)
	{
		int ch = cl_expr_lex();
		//printf("ch=%d\n", ch);
		//fflush(stdout);
		if(ch ==0){
			break;
		}
		
		if(ch == ')')
		{
			depth--;
			continue;
		}
		else if(ch == '(')
		{
			depth ++ ;
			continue;
		}
	}
}

void expr_consumeTemplateDecl()
{
	int depth = 1;
	while(depth > 0)
	{
		int ch = cl_expr_lex();
		//printf("ch=%d\n", ch);
		fflush(stdout);
		if(ch ==0){
			break;
		}
		
		if(ch == '>')
		{
			depth--;
			continue;
		}
		else if(ch == '<')
		{
			depth ++ ;
			continue;
		}
	}
}

void expr_syncParser(){
	//dont do anything, a hook to allow us to implement some
	//nice error recovery if needed
}

// return the scope name at the end of the input string
ExpressionResult &parse_expression(const std::string &in)
{
	result.Reset();
	//provide the lexer with new input
	if( !setExprLexerInput(in) ){
		return result;
	}
	
	//printf("parsing...\n");
	cl_expr_parse();
	//do the lexer cleanup
	cl_expr_lex_clean();
	
	return result;
}


