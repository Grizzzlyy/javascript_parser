/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./src/yacc.y"

    #include "main.h"
    #include <stdio.h>
int yywrap()
{
        return 1;
} 
int yydebug=1;

#line 81 "./build/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_K_ASYNC = 3,                    /* K_ASYNC  */
  YYSYMBOL_K_EXTENDS = 4,                  /* K_EXTENDS  */
  YYSYMBOL_K_AS = 5,                       /* K_AS  */
  YYSYMBOL_K_BREAK = 6,                    /* K_BREAK  */
  YYSYMBOL_K_CASE = 7,                     /* K_CASE  */
  YYSYMBOL_K_CATCH = 8,                    /* K_CATCH  */
  YYSYMBOL_K_CLASS = 9,                    /* K_CLASS  */
  YYSYMBOL_K_CONST = 10,                   /* K_CONST  */
  YYSYMBOL_K_CONTINUE = 11,                /* K_CONTINUE  */
  YYSYMBOL_K_DEFAULT = 12,                 /* K_DEFAULT  */
  YYSYMBOL_K_DELETE = 13,                  /* K_DELETE  */
  YYSYMBOL_K_DO = 14,                      /* K_DO  */
  YYSYMBOL_K_ELSE = 15,                    /* K_ELSE  */
  YYSYMBOL_K_FINALLY = 16,                 /* K_FINALLY  */
  YYSYMBOL_K_FOR = 17,                     /* K_FOR  */
  YYSYMBOL_K_FROM = 18,                    /* K_FROM  */
  YYSYMBOL_K_FUNCTION = 19,                /* K_FUNCTION  */
  YYSYMBOL_K_IF = 20,                      /* K_IF  */
  YYSYMBOL_K_IN = 21,                      /* K_IN  */
  YYSYMBOL_K_IMPORT = 22,                  /* K_IMPORT  */
  YYSYMBOL_K_INSTANCEOF = 23,              /* K_INSTANCEOF  */
  YYSYMBOL_K_LET = 24,                     /* K_LET  */
  YYSYMBOL_K_NEW = 25,                     /* K_NEW  */
  YYSYMBOL_K_NULL = 26,                    /* K_NULL  */
  YYSYMBOL_K_OF = 27,                      /* K_OF  */
  YYSYMBOL_K_RETURN = 28,                  /* K_RETURN  */
  YYSYMBOL_K_SWITCH = 29,                  /* K_SWITCH  */
  YYSYMBOL_K_THIS = 30,                    /* K_THIS  */
  YYSYMBOL_K_THROW = 31,                   /* K_THROW  */
  YYSYMBOL_K_TRY = 32,                     /* K_TRY  */
  YYSYMBOL_K_TYPEOF = 33,                  /* K_TYPEOF  */
  YYSYMBOL_K_VAR = 34,                     /* K_VAR  */
  YYSYMBOL_K_WHILE = 35,                   /* K_WHILE  */
  YYSYMBOL_L_INT = 36,                     /* L_INT  */
  YYSYMBOL_L_INT_OCT = 37,                 /* L_INT_OCT  */
  YYSYMBOL_L_INT_HEX = 38,                 /* L_INT_HEX  */
  YYSYMBOL_L_FLOAT = 39,                   /* L_FLOAT  */
  YYSYMBOL_L_BOOL = 40,                    /* L_BOOL  */
  YYSYMBOL_L_STR = 41,                     /* L_STR  */
  YYSYMBOL_ID = 42,                        /* ID  */
  YYSYMBOL_ARROW = 43,                     /* ARROW  */
  YYSYMBOL_OP_AND_ASSIGN = 44,             /* OP_AND_ASSIGN  */
  YYSYMBOL_OP_ARITHM_SUM = 45,             /* OP_ARITHM_SUM  */
  YYSYMBOL_OP_ARITHM = 46,                 /* OP_ARITHM  */
  YYSYMBOL_OP_INC = 47,                    /* OP_INC  */
  YYSYMBOL_OP_LOGIC = 48,                  /* OP_LOGIC  */
  YYSYMBOL_OP_BIT = 49,                    /* OP_BIT  */
  YYSYMBOL_EXPR = 50,                      /* EXPR  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* '.'  */
  YYSYMBOL_53_ = 53,                       /* '='  */
  YYSYMBOL_54_ = 54,                       /* '?'  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '!'  */
  YYSYMBOL_58_ = 58,                       /* '~'  */
  YYSYMBOL_FIX = 59,                       /* FIX  */
  YYSYMBOL_60_ = 60,                       /* '('  */
  YYSYMBOL_61_ = 61,                       /* ')'  */
  YYSYMBOL_62_ = 62,                       /* ';'  */
  YYSYMBOL_63_ = 63,                       /* '{'  */
  YYSYMBOL_64_ = 64,                       /* '}'  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_prog = 68,                      /* prog  */
  YYSYMBOL_beginning = 69,                 /* beginning  */
  YYSYMBOL_part_of_code = 70,              /* part_of_code  */
  YYSYMBOL_function_dec = 71,              /* function_dec  */
  YYSYMBOL_class_dec = 72,                 /* class_dec  */
  YYSYMBOL_import = 73,                    /* import  */
  YYSYMBOL_import_content1 = 74,           /* import_content1  */
  YYSYMBOL_import_content2 = 75,           /* import_content2  */
  YYSYMBOL_body = 76,                      /* body  */
  YYSYMBOL_code_block_class = 77,          /* code_block_class  */
  YYSYMBOL_code_inside = 78,               /* code_inside  */
  YYSYMBOL_designs = 79,                   /* designs  */
  YYSYMBOL_ret_block_obj = 80,             /* ret_block_obj  */
  YYSYMBOL_if = 81,                        /* if  */
  YYSYMBOL_block = 82,                     /* block  */
  YYSYMBOL_while = 83,                     /* while  */
  YYSYMBOL_do_while = 84,                  /* do_while  */
  YYSYMBOL_try_catch = 85,                 /* try_catch  */
  YYSYMBOL_sequence_id = 86,               /* sequence_id  */
  YYSYMBOL_for = 87,                       /* for  */
  YYSYMBOL_initialization = 88,            /* initialization  */
  YYSYMBOL_afterthought = 89,              /* afterthought  */
  YYSYMBOL_condition = 90,                 /* condition  */
  YYSYMBOL_switch = 91,                    /* switch  */
  YYSYMBOL_in_switch = 92,                 /* in_switch  */
  YYSYMBOL_default = 93,                   /* default  */
  YYSYMBOL_case = 94,                      /* case  */
  YYSYMBOL_declaration = 95,               /* declaration  */
  YYSYMBOL_type = 96,                      /* type  */
  YYSYMBOL_expr_logic = 97,                /* expr_logic  */
  YYSYMBOL_expr_arithmetic = 98,           /* expr_arithmetic  */
  YYSYMBOL_expr = 99,                      /* expr  */
  YYSYMBOL_new = 100,                      /* new  */
  YYSYMBOL_delete = 101,                   /* delete  */
  YYSYMBOL_brekets_with_content = 102,     /* brekets_with_content  */
  YYSYMBOL_number = 103,                   /* number  */
  YYSYMBOL_val_cant_assign = 104,          /* val_cant_assign  */
  YYSYMBOL_variable = 105,                 /* variable  */
  YYSYMBOL_method = 106,                   /* method  */
  YYSYMBOL_inner_obj = 107,                /* inner_obj  */
  YYSYMBOL_req_inner = 108,                /* req_inner  */
  YYSYMBOL_arr_prototype = 109,            /* arr_prototype  */
  YYSYMBOL_function_body = 110,            /* function_body  */
  YYSYMBOL_args = 111,                     /* args  */
  YYSYMBOL_interrupt = 112                 /* interrupt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  119
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2014

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,     2,     2,     2,
      60,    61,    56,     2,    51,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    62,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,    58,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    85,    85,    86,    88,    89,    91,    92,    93,    94,
      95,    97,    98,    99,   100,   102,   103,   104,   106,   107,
     109,   110,   111,   112,   113,   115,   116,   117,   118,   119,
     121,   122,   124,   125,   126,   127,   130,   131,   132,   133,
     134,   135,   136,   137,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   151,   152,   153,   155,   156,
     157,   159,   160,   161,   162,   163,   165,   166,   169,   170,
     171,   172,   173,   175,   176,   178,   179,   180,   181,   182,
     185,   186,   186,   188,   188,   190,   190,   192,   193,   194,
     196,   197,   199,   200,   201,   202,   203,   205,   206,   207,
     208,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     220,   221,   222,   224,   225,   226,   227,   228,   229,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   261,   264,   265,
     267,   268,   269,   270,   271,   272,   275,   276,   277,   278,
     279,   282,   283,   284,   285,   288,   289,   290,   291,   292,
     294,   298,   299,   300,   301,   303,   304,   305,   306,   308,
     309,   310,   311,   312,   313,   314,   315,   317,   318,   320,
     321,   322,   324,   325,   326,   327,   328,   329,   330,   331,
     332
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "K_ASYNC", "K_EXTENDS",
  "K_AS", "K_BREAK", "K_CASE", "K_CATCH", "K_CLASS", "K_CONST",
  "K_CONTINUE", "K_DEFAULT", "K_DELETE", "K_DO", "K_ELSE", "K_FINALLY",
  "K_FOR", "K_FROM", "K_FUNCTION", "K_IF", "K_IN", "K_IMPORT",
  "K_INSTANCEOF", "K_LET", "K_NEW", "K_NULL", "K_OF", "K_RETURN",
  "K_SWITCH", "K_THIS", "K_THROW", "K_TRY", "K_TYPEOF", "K_VAR", "K_WHILE",
  "L_INT", "L_INT_OCT", "L_INT_HEX", "L_FLOAT", "L_BOOL", "L_STR", "ID",
  "ARROW", "OP_AND_ASSIGN", "OP_ARITHM_SUM", "OP_ARITHM", "OP_INC",
  "OP_LOGIC", "OP_BIT", "EXPR", "','", "'.'", "'='", "'?'", "':'", "'*'",
  "'!'", "'~'", "FIX", "'('", "')'", "';'", "'{'", "'}'", "'['", "']'",
  "$accept", "prog", "beginning", "part_of_code", "function_dec",
  "class_dec", "import", "import_content1", "import_content2", "body",
  "code_block_class", "code_inside", "designs", "ret_block_obj", "if",
  "block", "while", "do_while", "try_catch", "sequence_id", "for",
  "initialization", "afterthought", "condition", "switch", "in_switch",
  "default", "case", "declaration", "type", "expr_logic",
  "expr_arithmetic", "expr", "new", "delete", "brekets_with_content",
  "number", "val_cant_assign", "variable", "method", "inner_obj",
  "req_inner", "arr_prototype", "function_body", "args", "interrupt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-373)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     538,    59,   111,  -373,   140,    45,   538,   -23,     1,    -3,
     239,  -373,    55,  -373,  1375,   168,    76,  1411,   -27,  1411,
    -373,   171,  -373,  -373,  -373,  -373,  -373,   167,     4,  1411,
      55,  1411,  1411,   246,  -373,   596,   992,   257,   538,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,   129,   212,  -373,  -373,   181,  -373,  -373,   221,   298,
     287,  -373,   213,  -373,    15,  -373,   269,   286,  -373,    55,
     134,   314,   353,   269,    57,  -373,  1411,   296,   313,   360,
      54,   349,   134,   347,  1411,   101,  1910,  1411,   327,  -373,
     319,  1910,   656,   328,  -373,  1411,   331,  1411,   834,  -373,
     134,  -373,  -373,   315,   269,  1160,  1728,   102,    17,  -373,
    -373,  -373,  -373,   716,  -373,   158,  1034,  -373,    -1,  -373,
    -373,   332,  -373,   323,   338,  1411,  1411,  1411,  1411,  1411,
    1411,  1411,  -373,   331,  1411,  1411,  -373,   331,  1447,  1203,
    1411,   321,  -373,   340,   354,   256,   325,   305,   335,   351,
     362,  1910,  -373,   352,   -27,   151,  1745,  -373,   242,   365,
     403,   407,   409,   182,   374,   364,   366,  -373,   -12,  1762,
    -373,   367,   357,   -27,  1779,   363,   376,   279,  -373,   375,
     377,   392,   389,  1411,   892,  -373,  -373,  -373,  -373,  -373,
     319,  -373,  -373,   115,  1076,  -373,   390,  1483,  -373,   279,
    -373,   127,    71,  1910,    58,  -373,   376,   279,  1922,   376,
     104,  -373,  1934,  -373,  1796,   139,  1246,   238,   387,  -373,
    1411,  1411,  1411,  1411,    49,  1411,  -373,   421,   -27,   776,
     459,    54,  -373,   424,   426,   427,    54,  -373,   408,  1519,
     416,  -373,   410,  1519,    -9,  -373,   538,   321,   430,   431,
     415,   -27,   331,  1922,    89,  1704,  -373,   425,  1118,  -373,
    -373,  1555,   106,  -373,  1946,  1411,  -373,  1591,  1289,  -373,
    -373,  -373,  1813,   437,   439,    95,     9,  1830,   254,  1847,
     433,  1910,  1411,  1411,  1922,   441,  -373,   473,  -373,   481,
     483,   159,   297,   445,   461,   188,  -373,  -373,  -373,   450,
    -373,  1716,  1411,    27,  1922,   462,   482,  -373,   363,   -27,
     465,   467,   376,   269,   319,  -373,   110,  1958,  -373,  1627,
     202,   200,  -373,  1332,  -373,   478,   468,   387,   -27,   194,
     470,  -373,   471,   538,   538,  1411,  1864,  1881,   950,   517,
     519,   520,  -373,  -373,  -373,  1668,  1411,   484,  -373,   472,
    -373,   343,   -27,   210,   321,   485,   479,   490,  -373,   502,
    -373,  1663,   225,  -373,  -373,   437,   512,    46,  -373,   -27,
     135,  -373,  -373,  -373,   495,  1910,   538,   538,  -373,  -373,
    -373,  -373,   245,  1686,   497,  -373,   152,   480,  -373,  1411,
     506,   549,   437,   521,   524,  -373,   525,   228,  -373,  -373,
     387,  -373,  -373,   -27,   261,   538,  -373,  -373,  -373,  -373,
    -373,   538,   420,   574,  1898,   538,   -27,   523,   -27,   527,
     528,  -373,    51,  -373,   -27,  -373,   538,  -373,   574,   538,
     480,  -373,   530,  -373,   531,  -373,  -373,  -373,   538,   574,
     -27,  -373,  -373
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   197,     0,   111,   199,     0,     0,     0,     0,     0,
       0,   112,     0,   138,   193,     0,   132,     0,     0,     0,
     110,     0,   157,   159,   158,   156,   113,   161,   165,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     2,     4,
       9,    10,     8,     6,     7,    49,    52,    53,    48,    54,
      51,     0,     0,   134,   135,     0,   130,   131,   119,   129,
     128,   163,     0,   198,     0,   200,     0,     0,   165,     0,
     148,     0,    82,     0,     0,   169,     0,     0,    20,     0,
       0,     0,   147,   165,     0,     0,   194,     0,     0,   133,
       0,   192,     0,     0,   145,     0,     0,     0,     0,   127,
     120,   114,   115,     0,     0,     0,     0,   161,   165,    30,
      38,    39,    37,     0,    36,     0,     0,   181,     0,     1,
       5,     0,    46,   101,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,   121,     0,     0,     0,
       0,   170,    47,     0,     0,     0,     0,   165,     0,    80,
       0,    81,    14,   189,     0,     0,     0,    18,     0,     0,
       0,     0,    25,     0,     0,     0,     0,   195,     0,     0,
     166,     0,     0,     0,     0,   171,   162,   143,    44,     0,
     169,     0,   136,     0,     0,    31,    42,    43,    41,    40,
       0,   164,   182,     0,     0,   183,   106,     0,   146,   123,
     122,   117,   125,   142,     0,   126,   160,   144,   124,   167,
       0,   140,   139,   150,     0,     0,     0,     0,     0,   149,
       0,     0,     0,    86,   101,     0,   188,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,    22,     0,     0,
       0,   196,     0,     0,     0,    68,     0,   172,     0,     0,
       0,     0,     0,   175,     0,   176,   179,   177,     0,   184,
     185,     0,     0,   105,   102,     0,   141,     0,     0,   151,
     168,   153,     0,     0,     0,     0,     0,     0,   143,     0,
       0,    85,     0,     0,   190,   191,   187,    50,    58,     6,
       0,     0,     0,     0,     0,     0,    27,    28,    26,    29,
      19,   176,     0,     0,   176,     0,     0,    66,   174,     0,
       0,     0,   137,     0,     0,   186,     0,   107,   104,     0,
     118,     0,   152,     0,   154,    73,     0,     0,     0,     0,
       0,    15,     0,     0,     0,    84,     0,     0,     0,    46,
      45,    47,    24,    23,    55,    56,     0,     0,    89,     0,
      91,    90,     0,     0,   173,     0,     0,     0,   178,   180,
     109,     0,     0,   116,   155,     0,     0,     0,    32,     0,
       0,    67,    77,    79,     0,    83,     0,     0,    64,    61,
      60,    59,     0,     0,     0,    57,     0,     0,    87,     0,
       0,    72,     0,     0,     0,    11,     0,     0,   103,    74,
       0,    16,    33,     0,     0,     0,    76,    78,    62,    63,
      65,    97,     0,    92,     0,    96,     0,     0,     0,     0,
       0,   108,     0,    34,     0,    75,    98,    88,    93,    99,
      94,    71,     0,    69,     0,    13,    17,    35,   100,    95,
       0,    12,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -369,    -6,   -30,   -24,  -373,  -373,   126,   -15,
    -314,  -373,   -29,  -373,   251,   259,  -373,  -373,  -373,  -336,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -372,   -70,   522,
    -373,  -373,    -5,  -373,  -373,  -168,  -373,  -373,    11,  -116,
    -182,  -373,   576,   -69,  -226,  -219
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    37,    38,    39,    40,    41,    42,    81,   163,    43,
     276,   113,    44,   168,    45,   290,    46,    47,    48,   326,
      49,   148,   374,   280,    50,   349,   350,   351,    51,    52,
      53,    54,    55,    56,    57,   141,    58,    59,    60,   176,
     115,   257,    61,    75,   155,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   285,   149,    93,   152,   110,   114,   247,   256,    86,
     293,   111,    91,   367,    94,   413,    70,   206,   412,   143,
     112,   209,   124,    82,    99,    97,   101,   102,   106,   399,
     240,   118,   120,   305,   346,   180,    92,    72,    97,   347,
     428,   100,   426,    73,   125,   126,   430,   127,   128,   329,
     194,   330,   241,   130,   306,   131,   417,    76,   439,    98,
     438,    74,   110,   114,    66,   195,   160,   151,   111,   178,
     282,   156,   184,   331,    66,    67,   283,   112,   144,   106,
     145,   124,   169,   186,   189,    67,   422,    68,   330,   187,
     174,   348,   177,   330,   124,   161,   162,    68,   188,   153,
     106,    63,   197,   125,   126,    69,   127,   128,   211,   129,
     401,   193,   130,   265,   131,   436,   125,   126,   154,   384,
     199,   200,   201,   202,   203,   204,   205,   131,    88,   207,
     208,   313,   359,   212,   214,   215,   312,   153,   124,   226,
     354,    36,   165,   166,   404,   165,   171,   165,   171,    74,
     124,   165,   171,    64,    96,   178,   328,   183,   245,   291,
     125,   126,   124,   127,   128,   167,   258,   263,   266,   130,
     318,   131,   125,   126,   360,   124,   128,   153,   253,   255,
     121,   259,    65,   131,   125,   126,   137,   127,   128,   203,
     129,   122,   264,   130,   139,   131,   403,   125,   126,   140,
     127,   128,   227,   129,   124,   270,   130,   411,   131,   190,
     121,   272,   228,   286,   289,   277,   278,   279,   281,    96,
     284,   339,   191,   288,   292,   124,   125,   126,    87,   127,
     128,    95,   129,   236,   301,   130,   311,   131,   304,   236,
     307,   165,   171,   132,   358,   227,   237,   125,   126,   103,
     127,   128,   343,   203,   123,   369,   317,   119,   131,     5,
     320,   392,   201,   203,   363,   104,   165,   171,   382,   165,
     171,    12,    13,   133,   393,   142,    16,   336,   337,    19,
      77,    78,    22,    23,    24,    25,    26,    27,    83,   398,
     273,    29,   421,    30,   355,    79,   121,   345,   230,   125,
     126,   274,    80,    31,    32,   231,   105,   408,   137,    90,
     131,    36,   227,   368,   201,   333,   139,   219,   203,   134,
     124,   140,   424,   379,   125,   126,   221,   372,   373,    74,
     375,   135,   222,   383,   136,   131,   172,   391,    88,   137,
     138,   386,   125,   126,   173,   127,   128,   139,   129,   146,
     389,   130,   140,   131,   402,   390,   201,   295,   157,   340,
     165,   171,   299,     3,   158,   159,     5,   164,    97,   170,
     406,   407,    66,   175,   196,   179,   197,    11,    12,    13,
     198,   216,   217,    16,   414,   220,    19,    20,   423,    22,
      23,    24,    25,    26,    27,   147,   218,   223,    29,   425,
      30,   431,   121,   433,   224,   225,   120,   232,   233,   437,
      31,    32,   234,    84,   235,   238,    90,   244,    36,   183,
     120,   239,   243,   139,   120,   442,     1,   346,   248,     2,
       3,     4,   120,     5,     6,   251,   249,     7,   250,     8,
       9,   252,    10,   261,    11,    12,    13,   275,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   153,   294,    29,   296,    30,   297,   298,
     300,   302,   308,   303,   309,   310,   314,    31,    32,   325,
      33,   327,    34,    35,   427,    36,     1,   346,   -64,     2,
       3,     4,   227,     5,     6,   335,   -61,     7,   338,     8,
       9,   236,    10,   342,    11,    12,    13,   341,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   352,   353,    29,   356,    30,   357,   365,
     370,   366,   -62,   371,   -63,   -65,   388,    31,    32,   387,
      33,   395,    34,    35,     1,    36,   394,     2,     3,     4,
     396,     5,     6,   190,   400,     7,   405,     8,     9,   410,
      10,   415,    11,    12,    13,   416,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   389,   418,    29,   419,    30,   420,   432,   434,   380,
     435,   440,    89,   441,   150,    31,    32,   381,    33,     0,
      34,    35,     1,    36,     0,     2,     3,     4,     0,     5,
       6,     0,     0,     7,     0,     8,     9,     0,     0,     0,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   107,   108,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,    34,    35,
     109,    36,     1,     0,     0,     2,     3,     4,     0,     5,
       6,     0,     0,     7,     0,     8,     9,     0,     0,     0,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,    34,    35,
     109,    36,     1,     0,     0,     2,     3,     4,     0,     5,
       6,     0,     0,     7,     0,     8,     9,     0,     0,     0,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,    34,    35,
     185,    36,     1,     0,     0,     2,     3,     4,     0,     5,
       6,     0,     0,     7,     0,     8,     9,     0,    10,     0,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,   287,    35,
       1,    36,     0,     0,     3,     4,     0,     5,     6,     0,
       0,     7,     0,    66,     9,     0,     0,     0,    11,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    84,     0,    34,    90,     1,    36,
       0,     0,     3,     4,     0,     5,     6,     0,     0,     7,
       0,   254,     9,     0,     0,     0,    11,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    84,     0,    34,    90,     1,    36,     0,     0,
       3,     4,     0,     5,     0,     0,     0,     0,     0,    66,
       9,     0,     0,     0,    11,    12,    13,     0,    14,     0,
      16,    17,     0,    19,    20,     0,    22,    23,    24,    25,
      26,    27,    83,     0,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    31,    32,     0,
      84,    66,   378,    35,     0,    36,     0,    12,    13,     0,
       0,     0,    16,     0,     0,    19,     0,     0,    22,    23,
      24,    25,    26,    27,    83,     0,     0,    29,     0,    30,
       0,     0,     0,   116,     0,     0,     0,     5,     0,    31,
      32,     0,    84,    66,     0,    90,     0,    36,   117,    12,
      13,     0,     0,     0,    16,     0,     0,    19,     0,     0,
      22,    23,    24,    25,    26,    27,    83,     0,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     5,
       0,    31,    32,     0,    84,    66,     0,    90,     0,    36,
     192,    12,    13,     0,     0,     0,    16,     0,     0,    19,
       0,     0,    22,    23,    24,    25,    26,    27,    83,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     5,     0,    31,    32,     0,    84,    66,     0,    90,
       0,    36,   260,    12,    13,     0,     0,     0,    16,     0,
       0,    19,     0,     0,    22,    23,    24,    25,    26,    27,
      83,     0,     0,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     5,     0,    31,    32,     0,    84,    66,
       0,    90,     0,    36,   315,    12,    13,     0,     0,     0,
      16,     0,     0,    19,     0,     0,    22,    23,    24,    25,
      26,    27,    83,     0,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    31,    32,     0,
      84,   181,    66,    90,     0,    36,     0,     0,    12,    13,
       0,     0,     0,    16,     0,     0,    19,     0,     0,    22,
      23,    24,    25,    26,    27,    83,     0,     0,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     5,
      31,    32,     0,    84,   213,    66,    90,     0,    36,     0,
       0,    12,    13,     0,     0,     0,    16,     0,     0,    19,
       0,     0,    22,    23,    24,    25,    26,    27,    83,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    31,    32,     0,    84,   271,    66,    90,
       0,    36,     0,     0,    12,    13,     0,     0,     0,    16,
       0,     0,    19,     0,     0,    22,    23,    24,    25,    26,
      27,    83,     0,     0,    29,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     5,    31,    32,     0,    84,
     322,    66,    90,     0,    36,     0,     0,    12,    13,     0,
       0,     0,    16,     0,     0,    19,     0,     0,    22,    23,
      24,    25,    26,    27,    83,     0,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     5,    31,
      32,     0,    84,   364,    66,    90,     0,    36,     0,     0,
      12,    13,     0,     0,     0,    16,     0,     0,    19,     0,
       0,    22,    23,    24,    25,    26,    27,    83,     0,     0,
      29,     0,    30,     0,     5,     0,     0,     0,     0,     0,
      66,     0,    31,    32,     0,    84,    12,    13,    85,     0,
      36,    16,     0,     0,    19,     0,     0,    22,    23,    24,
      25,    26,    27,    83,     0,     0,    29,     0,    30,     0,
       5,     0,     0,     0,     0,     0,     8,     0,    31,    32,
       0,    84,    12,    13,    90,     0,    36,    16,     0,     0,
      19,     0,     0,    22,    23,    24,    25,    26,    27,    83,
       0,     0,    29,     0,    30,     0,     5,     0,     0,     0,
       0,     0,     8,     0,    31,    32,     0,    33,    12,    13,
     210,     0,    36,    16,     0,     0,    19,     0,     0,    22,
      23,    24,    25,    26,    27,    83,     0,     0,    29,     0,
      30,     0,     5,     0,     0,     0,     0,     0,   254,     0,
      31,    32,     0,    33,    12,    13,   262,     0,    36,    16,
       0,     0,    19,     0,     0,    22,    23,    24,    25,    26,
      27,    83,     0,     0,    29,     0,    30,     0,     5,     0,
       0,     0,     0,     0,    66,     0,    31,    32,     0,    84,
      12,    13,    90,     0,    36,    16,     0,     0,    19,     0,
       0,    22,    23,    24,    25,    26,    27,    83,     0,     0,
      29,     0,    30,     0,     5,     0,     0,     0,     0,     0,
      66,     0,    31,    32,     0,    84,    12,    13,   316,     0,
      36,    16,     0,     0,    19,     0,     0,    22,    23,    24,
      25,    26,    27,    83,     0,     0,    29,     0,    30,     0,
       5,     0,     0,     0,     0,     0,    66,     0,    31,    32,
       0,    84,    12,    13,   321,     0,    36,    16,     0,     0,
      19,     0,     0,    22,    23,    24,    25,    26,    27,    83,
       0,     0,    29,     0,    30,     0,     5,     0,     0,     0,
       0,     0,    66,     0,    31,    32,     0,    84,    12,    13,
     362,   124,    36,    16,     0,     0,    19,     0,     0,    22,
      23,    24,    25,    26,    27,    83,     0,     0,    29,   124,
      30,     0,     0,   125,   126,     0,   127,   128,     0,   129,
      31,    32,   130,    84,   131,     0,   397,   124,    36,     0,
     385,   125,   126,     0,   127,   128,     0,   129,     0,   124,
     130,     0,   131,     0,     0,     0,     0,     0,   409,   125,
     126,   124,   127,   128,     0,     0,     0,     0,   130,     0,
     131,   125,   126,     0,   127,   128,   132,     0,   124,     0,
     130,     0,   131,   125,   126,     0,   127,   128,   344,   129,
       0,     0,   130,     0,   131,   124,     0,     0,     0,   182,
     125,   126,     0,   127,   128,     0,   129,     0,     0,   130,
       0,   131,   124,     0,     0,     0,   229,   125,   126,     0,
     127,   128,     0,   129,     0,     0,   130,     0,   131,   124,
       0,     0,     0,   242,   125,   126,     0,   127,   128,     0,
     129,     0,     0,   130,     0,   131,   124,     0,     0,     0,
     246,   125,   126,     0,   127,   128,     0,   268,     0,     0,
     130,     0,   131,   124,     0,     0,     0,   269,   125,   126,
       0,   127,   128,     0,   323,     0,     0,   130,     0,   131,
     124,     0,     0,     0,   324,   125,   126,     0,   127,   128,
       0,   129,     0,     0,   130,     0,   131,   124,     0,     0,
       0,   332,   125,   126,     0,   127,   128,     0,   129,     0,
       0,   130,     0,   131,   124,     0,     0,     0,   334,   125,
     126,     0,   127,   128,     0,   129,     0,     0,   130,     0,
     131,   124,     0,     0,     0,   376,   125,   126,     0,   127,
     128,     0,   129,   124,     0,   130,     0,   131,     0,     0,
       0,     0,   377,   125,   126,   124,   127,   128,     0,   129,
       0,     0,   130,   429,   131,   125,   126,   124,   127,   128,
       0,   129,     0,     0,   130,     0,   131,   125,   126,   124,
     127,   128,     0,     0,     0,     0,   130,     0,   131,   125,
     126,   124,   267,   128,     0,     0,     0,     0,   130,     0,
     131,   125,   126,     0,   319,   128,     0,     0,     0,     0,
     130,     0,   131,   125,   126,     0,   361,   128,     0,     0,
       0,     0,   130,     0,   131
};

static const yytype_int16 yycheck[] =
{
       6,   227,    72,    18,    73,    35,    35,   175,   190,    14,
     229,    35,    17,   327,    19,   387,     5,   133,   387,     4,
      35,   137,    23,    12,    29,    21,    31,    32,    33,   365,
      42,    36,    38,    42,     7,   104,    63,    60,    21,    12,
     412,    30,   411,    42,    45,    46,   415,    48,    49,   275,
      51,    42,    64,    54,    63,    56,   392,    60,   430,    55,
     429,    60,    92,    92,    19,    66,    12,    72,    92,    98,
      21,    76,    55,    64,    19,    30,    27,    92,    63,    84,
      69,    23,    87,   113,   113,    30,   400,    42,    42,   113,
      95,    64,    97,    42,    23,    41,    42,    42,   113,    42,
     105,    42,    53,    45,    46,    60,    48,    49,   138,    51,
      64,   116,    54,    55,    56,    64,    45,    46,    61,   338,
     125,   126,   127,   128,   129,   130,   131,    56,    52,   134,
     135,    42,   314,   138,   139,   140,   252,    42,    23,   154,
     308,    65,    41,    42,   370,    41,    42,    41,    42,    60,
      23,    41,    42,    42,    52,   184,    61,    55,   173,   229,
      45,    46,    23,    48,    49,    64,    51,   197,    64,    54,
      64,    56,    45,    46,    64,    23,    49,    42,   183,   184,
      51,    66,    42,    56,    45,    46,    52,    48,    49,   194,
      51,    62,   197,    54,    60,    56,    61,    45,    46,    65,
      48,    49,    51,    51,    23,    66,    54,    55,    56,    51,
      51,   216,    61,   228,   229,   220,   221,   222,   223,    52,
     225,    62,    64,   229,   229,    23,    45,    46,    60,    48,
      49,    60,    51,    51,   239,    54,   251,    56,   243,    51,
     246,    41,    42,    62,   313,    51,    64,    45,    46,     3,
      48,    49,    64,   258,    42,    61,   261,     0,    56,    13,
     265,    51,   267,   268,    64,    19,    41,    42,   338,    41,
      42,    25,    26,    52,    64,    62,    30,   282,   283,    33,
      41,    42,    36,    37,    38,    39,    40,    41,    42,    64,
      52,    45,    64,    47,   309,    56,    51,   302,    56,    45,
      46,    63,    63,    57,    58,    63,    60,    62,    52,    63,
      56,    65,    51,   328,   319,    61,    60,    61,   323,    21,
      23,    65,    61,   338,    45,    46,    21,   333,   334,    60,
     335,    44,    27,   338,    47,    56,     8,   352,    52,    52,
      53,   346,    45,    46,    16,    48,    49,    60,    51,    35,
       7,    54,    65,    56,   369,    12,   361,   231,    62,    62,
      41,    42,   236,    10,    51,     5,    13,    18,    21,    42,
     376,   377,    19,    42,    42,    60,    53,    24,    25,    26,
      42,    60,    42,    30,   389,    60,    33,    34,   403,    36,
      37,    38,    39,    40,    41,    42,    42,    62,    45,   405,
      47,   416,    51,   418,    42,    53,   412,    42,     5,   424,
      57,    58,     5,    60,     5,    41,    63,    60,    65,    55,
     426,    55,    55,    60,   430,   440,     6,     7,    52,     9,
      10,    11,   438,    13,    14,    43,    61,    17,    61,    19,
      20,    52,    22,    53,    24,    25,    26,    60,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    42,     5,    45,    42,    47,    42,    42,
      62,    55,    42,    63,    43,    60,    51,    57,    58,    42,
      60,    42,    62,    63,    64,    65,     6,     7,    15,     9,
      10,    11,    51,    13,    14,    62,    15,    17,    15,    19,
      20,    51,    22,    42,    24,    25,    26,    62,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    61,    42,    45,    61,    47,    61,    51,
      60,    63,    15,    62,    15,    15,    64,    57,    58,    55,
      60,    62,    62,    63,     6,    65,    61,     9,    10,    11,
      60,    13,    14,    51,    42,    17,    61,    19,    20,    62,
      22,    55,    24,    25,    26,    16,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     7,    61,    45,    60,    47,    61,    64,    61,   338,
      62,    61,    16,    62,    72,    57,    58,   338,    60,    -1,
      62,    63,     6,    65,    -1,     9,    10,    11,    -1,    13,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,    63,
      64,    65,     6,    -1,    -1,     9,    10,    11,    -1,    13,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,    63,
      64,    65,     6,    -1,    -1,     9,    10,    11,    -1,    13,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,    63,
      64,    65,     6,    -1,    -1,     9,    10,    11,    -1,    13,
      14,    -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,    63,
       6,    65,    -1,    -1,    10,    11,    -1,    13,    14,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    60,    -1,    62,    63,     6,    65,
      -1,    -1,    10,    11,    -1,    13,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    63,     6,    65,    -1,    -1,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    -1,
      30,    31,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    57,    58,    -1,
      60,    19,    62,    63,    -1,    65,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    13,    -1,    57,
      58,    -1,    60,    19,    -1,    63,    -1,    65,    66,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    57,    58,    -1,    60,    19,    -1,    63,    -1,    65,
      66,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    57,    58,    -1,    60,    19,    -1,    63,
      -1,    65,    66,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    57,    58,    -1,    60,    19,
      -1,    63,    -1,    65,    66,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    57,    58,    -1,
      60,    61,    19,    63,    -1,    65,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      57,    58,    -1,    60,    61,    19,    63,    -1,    65,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    57,    58,    -1,    60,    61,    19,    63,
      -1,    65,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    57,    58,    -1,    60,
      61,    19,    63,    -1,    65,    -1,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    57,
      58,    -1,    60,    61,    19,    63,    -1,    65,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    -1,    47,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    57,    58,    -1,    60,    25,    26,    63,    -1,
      65,    30,    -1,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    47,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    57,    58,
      -1,    60,    25,    26,    63,    -1,    65,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    47,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    57,    58,    -1,    60,    25,    26,
      63,    -1,    65,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    -1,
      47,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      57,    58,    -1,    60,    25,    26,    63,    -1,    65,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    57,    58,    -1,    60,
      25,    26,    63,    -1,    65,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    -1,    47,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    57,    58,    -1,    60,    25,    26,    63,    -1,
      65,    30,    -1,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    47,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    57,    58,
      -1,    60,    25,    26,    63,    -1,    65,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    47,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    57,    58,    -1,    60,    25,    26,
      63,    23,    65,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    23,
      47,    -1,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      57,    58,    54,    60,    56,    -1,    63,    23,    65,    -1,
      62,    45,    46,    -1,    48,    49,    -1,    51,    -1,    23,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    45,
      46,    23,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    45,    46,    -1,    48,    49,    62,    -1,    23,    -1,
      54,    -1,    56,    45,    46,    -1,    48,    49,    62,    51,
      -1,    -1,    54,    -1,    56,    23,    -1,    -1,    -1,    61,
      45,    46,    -1,    48,    49,    -1,    51,    -1,    -1,    54,
      -1,    56,    23,    -1,    -1,    -1,    61,    45,    46,    -1,
      48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,    23,
      -1,    -1,    -1,    61,    45,    46,    -1,    48,    49,    -1,
      51,    -1,    -1,    54,    -1,    56,    23,    -1,    -1,    -1,
      61,    45,    46,    -1,    48,    49,    -1,    51,    -1,    -1,
      54,    -1,    56,    23,    -1,    -1,    -1,    61,    45,    46,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      23,    -1,    -1,    -1,    61,    45,    46,    -1,    48,    49,
      -1,    51,    -1,    -1,    54,    -1,    56,    23,    -1,    -1,
      -1,    61,    45,    46,    -1,    48,    49,    -1,    51,    -1,
      -1,    54,    -1,    56,    23,    -1,    -1,    -1,    61,    45,
      46,    -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,
      56,    23,    -1,    -1,    -1,    61,    45,    46,    -1,    48,
      49,    -1,    51,    23,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    45,    46,    23,    48,    49,    -1,    51,
      -1,    -1,    54,    55,    56,    45,    46,    23,    48,    49,
      -1,    51,    -1,    -1,    54,    -1,    56,    45,    46,    23,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    45,
      46,    23,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    45,    46,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    45,    46,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     9,    10,    11,    13,    14,    17,    19,    20,
      22,    24,    25,    26,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    45,
      47,    57,    58,    60,    62,    63,    65,    68,    69,    70,
      71,    72,    73,    76,    79,    81,    83,    84,    85,    87,
      91,    95,    96,    97,    98,    99,   100,   101,   103,   104,
     105,   109,   112,    42,    42,    42,    19,    30,    42,    60,
     105,    70,    60,    42,    60,   110,    60,    41,    42,    56,
      63,    74,   105,    42,    60,    63,    99,    60,    52,   109,
      63,    99,    63,    76,    99,    60,    52,    21,    55,    99,
     105,    99,    99,     3,    19,    60,    99,    41,    42,    64,
      71,    72,    76,    78,    79,   107,    51,    66,    99,     0,
      70,    51,    62,    42,    23,    45,    46,    48,    49,    51,
      54,    56,    62,    52,    21,    44,    47,    52,    53,    60,
      65,   102,    62,     4,    63,   105,    35,    42,    88,    95,
      96,    99,   110,    42,    61,   111,    99,    62,    51,     5,
      12,    41,    42,    75,    18,    41,    42,    64,    80,    99,
      42,    42,     8,    16,    99,    42,   106,    99,    79,    60,
     110,    61,    61,    55,    55,    64,    71,    72,    76,    79,
      51,    64,    66,    99,    51,    66,    42,    53,    42,    99,
      99,    99,    99,    99,    99,    99,   106,    99,    99,   106,
      63,    71,    99,    61,    99,    99,    60,    42,    42,    61,
      60,    21,    27,    62,    42,    53,    76,    51,    61,    61,
      56,    63,    42,     5,     5,     5,    51,    64,    41,    55,
      42,    64,    61,    55,    60,    76,    61,   102,    52,    61,
      61,    43,    52,    99,    19,    99,   107,   108,    51,    66,
      66,    53,    63,    71,    99,    55,    64,    48,    51,    61,
      66,    61,    99,    52,    63,    60,    77,    99,    99,    99,
      90,    99,    21,    27,    99,   111,    76,    62,    70,    76,
      82,    95,    99,   112,     5,    75,    42,    42,    42,    75,
      62,    99,    55,    63,    99,    42,    63,    70,    42,    43,
      60,    76,   106,    42,    51,    66,    63,    99,    64,    48,
      99,    63,    61,    51,    61,    42,    86,    42,    61,   111,
      42,    64,    61,    61,    61,    62,    99,    99,    15,    62,
      62,    62,    42,    64,    62,    99,     7,    12,    64,    92,
      93,    94,    61,    42,   102,    76,    61,    61,   110,   107,
      64,    48,    63,    64,    61,    51,    63,    77,    76,    61,
      60,    62,    70,    70,    89,    99,    61,    61,    62,    76,
      81,    82,    95,    99,   112,    62,    99,    55,    64,     7,
      12,    76,    51,    64,    61,    62,    60,    63,    64,    86,
      42,    64,    76,    61,   111,    61,    70,    70,    62,    62,
      62,    55,    69,    94,    99,    55,    16,    86,    61,    60,
      61,    64,    77,    76,    61,    70,    69,    64,    94,    55,
      69,    76,    64,    76,    61,    62,    64,    76,    69,    94,
      61,    62,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    82,    82,    83,    84,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      92,    92,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     7,    10,     9,     3,     6,     8,    10,     3,     5,
       1,     3,     3,     5,     5,     1,     3,     3,     3,     3,
       2,     3,     3,     4,     5,     6,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     5,     7,
       7,     1,     2,     2,     1,     2,     5,     7,     4,     9,
      11,     9,     7,     1,     3,     9,     8,     7,     8,     7,
       1,     1,     0,     1,     0,     1,     0,     7,     9,     6,
       1,     1,     3,     4,     4,     5,     3,     3,     4,     4,
       5,     2,     4,     7,     5,     4,     3,     5,     8,     6,
       1,     1,     1,     1,     2,     2,     6,     3,     5,     1,
       2,     2,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     1,     3,
       3,     4,     3,     3,     3,     2,     3,     2,     2,     4,
       2,     3,     4,     3,     4,     5,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     4,     2,
       2,     1,     2,     4,     3,     3,     3,     3,     5,     1,
       3,     2,     3,     3,     4,     4,     5,     4,     3,     1,
       3,     3,     2,     1,     2,     3,     4,     1,     2,     1,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1788 "./build/y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 335 "./src/yacc.y"
