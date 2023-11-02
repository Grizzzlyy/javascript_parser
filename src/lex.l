 /* DECLARATIONS */

 /* Auxiliary declarations start here */

%{
	#include <stdio.h> /* for printf */
    #include "y.tab.h" /* for constants and yyparse */
    #include "main.h" /* for yyerror */
    /* #define DEBUG_LEX */

    void count(); /* to track position */
    int g_column = 0;
    char* g_filename;
    int g_lineno = 1;
%}

 /* tell the compiler yywrap() not defined */
%option noyywrap

%x l_str1 l_str2 l_str3 multiline_comment

singleline_comment		[/][/].*

 /* LITERALS */
l_int       [0-9][0-9]*
l_int_error   [0][0-9]+
l_int_oct   [0][0-7]+
l_int_hex   [0][xX][0-9a-fA-F]+
l_float     ([0-9]*[\.][0-9]+([eE][-]?[0-9]+)?)|([0-9]+[eE][-]?[0-9]+)
l_bool      ("true")|("false")

 /* OPERATORS */
op_and_assign   "+="|"-="|"*="|"/="|"%="|"**="|">>>="|">>="|"<<="|"&="|"|="|"^="
op_arithm_sum   "+"|"-"
op_arithm       "**"|"/"|"%"
op_inc          "++"|"--"
op_logic        "=="|"==="|"!="|"!=="|">"|"<"|">="|"<="|"||"|"&&"
op_bit          &|"|"|^|<<|>>|>>>

%% /* RULES */
 
 /* KEYWORDS */
"as" {
    count();
    #ifdef DEBUG_LEX
    printf("<as>");
    #else
    return K_AS;
    #endif
}
"break" {
    count();
    #ifdef DEBUG_LEX
    printf("<break>");
    #else
    return K_BREAK;
    #endif
}
"case" {
    count();
    #ifdef DEBUG_LEX
    printf("<case>");
    #else
    return K_CASE;
    #endif
}
"catch" {
    count();
    #ifdef DEBUG_LEX
    printf("<catch>");
    #else
    return K_CATCH;
    #endif
}
"class" {
    count();
    #ifdef DEBUG_LEX
    printf("<class>");
    #else
    return K_CLASS;
    #endif
}
"const" {
    count();
    #ifdef DEBUG_LEX
    printf("<const>");
    #else
    return K_CONST;
    #endif
}
"continue" {
    count();
    #ifdef DEBUG_LEX
    printf("<continue>");
    #else
    return K_CONTINUE;
    #endif
}
"default" {
    count();
    #ifdef DEBUG_LEX
    printf("<default>");
    #else
    return K_DEFAULT;
    #endif
}
"delete" {
    count();
    #ifdef DEBUG_LEX
    printf("<delete>");
    #else
    return K_DELETE;
    #endif
}
"do" {
    count();
    #ifdef DEBUG_LEX
    printf("<do>");
    #else
    return K_DO;
    #endif
}
"else" {
    count();
    #ifdef DEBUG_LEX
    printf("<else>");
    #else
    return K_ELSE;
    #endif
}
"extends" {
    count();
    #ifdef DEBUG_LEX
    printf("<extends>");
    #else
    return K_EXTENDS;
    #endif
}
"finally" {
    count();
    #ifdef DEBUG_LEX
    printf("<finally>");
    #else
    return K_FINALLY;
    #endif
}
"for" {
    count();
    #ifdef DEBUG_LEX
    printf("<for>");
    #else
    return K_FOR;
    #endif
}
"from" {
    count();
    #ifdef DEBUG_LEX
    printf("<from>");
    #else
    return K_FROM;
    #endif
}
"function" {
    count();
    #ifdef DEBUG_LEX
    printf("<function>");
    #else
    return K_FUNCTION;
    #endif
}
"if" {
    count();
    #ifdef DEBUG_LEX
    printf("<if>");
    #else
    return K_IF;
    #endif
}
"in" {
    count();
    #ifdef DEBUG_LEX
    printf("<in>");
    #else
    return K_IN;
    #endif
}
"import" {
    count();
    #ifdef DEBUG_LEX
    printf("<import>");
    #else
    return K_IMPORT;
    #endif
}
"instanceof" {
    count();
    #ifdef DEBUG_LEX
    printf("<instanceof>");
    #else
    return K_INSTANCEOF;
    #endif
}
"let" {
    count();
    #ifdef DEBUG_LEX
    printf("<let>");
    #else
    return K_LET;
    #endif
}
"new" {
    count();
    #ifdef DEBUG_LEX
    printf("<new>");
    #else
    return K_NEW;
    #endif
}
"null" {
    count();
    #ifdef DEBUG_LEX
    printf("<null>");
    #else
    return K_NULL;
    #endif
}
"of" {
    count();
    #ifdef DEBUG_LEX
    printf("<of>");
    #else
    return K_OF;
    #endif
}
"return" {
    count();
    #ifdef DEBUG_LEX
    printf("<return>");
    #else
    return K_RETURN;
    #endif
}
"switch" {
    count();
    #ifdef DEBUG_LEX
    printf("<switch>");
    #else
    return K_SWITCH;
    #endif
}
"this" {
    count();
    #ifdef DEBUG_LEX
    printf("<this>");
    #else
    return K_THIS;
    #endif
}
"throw" {
    count();
    #ifdef DEBUG_LEX
    printf("<throw>");
    #else
    return K_THROW;
    #endif
}
"try" {
    count();
    #ifdef DEBUG_LEX
    printf("<try>");
    #else
    return K_TRY;
    #endif
}
"typeof" {
    count();
    #ifdef DEBUG_LEX
    printf("<typeof>");
    #else
    return K_TYPEOF;
    #endif
}
"var" {
    count();
    #ifdef DEBUG_LEX
    printf("<var>");
    #else
    return K_VAR;
    #endif
}
"while" {
    count();
    #ifdef DEBUG_LEX
    printf("<while>");
    #else
    return K_WHILE;
    #endif
}

 /* LITERALS */

 /* numbers */
 /* float before int */
{l_float} {
    count();
    #ifdef DEBUG_LEX
    printf("<float>");
    #else
    return L_FLOAT;
    #endif
}
{l_int_oct} {
    count();
    #ifdef DEBUG_LEX
    printf("<int_oct>");
    #else
    return L_INT_OCT;
    #endif
}
{l_int_error} { /* int error before int */
    yyerror("Decimals with leading zeros are now allowed.");
}
{l_int} {
    count();
    #ifdef DEBUG_LEX
    printf("<int>");
    #else
    return L_INT;
    #endif
}
{l_int_hex} {
    count();
    #ifdef DEBUG_LEX
    printf("<int_hex>");
    #else
    return L_INT_HEX;
    #endif
}
{l_bool} {
    count();
    #ifdef DEBUG_LEX
    printf("<bool>");
    #else
    return L_BOOL;
    #endif
}

 /* strings */
"\"" {
    count();
    BEGIN(l_str1);
}

<l_str1> 
{
    <<EOF>> {
        yyerror("EOF before enclosing string quotes. Expected '\"'.");
    }
    "\n" {
        yyerror("Newline character \"\\n\" before enclosing string quotes. Expected '\"'.");
    }
    "\\\"" {
        count();
    }
    "\"" {
        count(); 
        #ifdef DEBUG_LEX
        printf("<str>");
        BEGIN(0);
        #else
        BEGIN(0);
        return L_STR;
        #endif
    }
    "\\\n"|"\\\\"|. {
        count();
    }
}

"\'" {
    count();
    BEGIN(l_str2);
}

<l_str2> 
{
    <<EOF>> {
        yyerror("EOF before enclosing string quotes. Expected \"'\".");
    }
    "\n" {
        yyerror("Newline character \"\\n\" before enclosing string quotes. Expected \"'\".");
    }
    "\\\'" {
        count();
    }
    "\'" {
        count(); 
        #ifdef DEBUG_LEX
        printf("<str>");
        BEGIN(0);
        #else
        BEGIN(0);
        return L_STR;
        #endif
    }
    "\\\n"|"\\\\"|. {
        count();
    }
}

"`" {
    count();
    BEGIN(l_str3);
}

<l_str3> 
{
    <<EOF>> {
        yyerror("EOF before enclosing string quotes. Expected '`'.");
    }
    "`" {
        count(); 
        #ifdef DEBUG_LEX
        printf("<str>");
        BEGIN(0);
        #else
        BEGIN(0);
        return L_STR;
        #endif
    }
    "\\\n"|"\\"|"\n"|. {
        count();
    }
}

 /* comments */

 /* singleline comment */
{singleline_comment} {
    #ifdef DEBUG_LEX
    printf("<comment_1>");
    #endif
    count();
}

 /* multiline comment */
"/*" {
    count();
    BEGIN(multiline_comment);
}

<multiline_comment>
{
    <<EOF>> {
        yyerror("Multiline comment not closed, found EOF. Expected '*/'.");
    }
    "*/" {
        count();
        #ifdef DEBUG_LEX
        printf("<comment_2>");
        #endif
        BEGIN(0);
    }
    .|"\n" {
        count();
    }
}



 /* IDENTIFIER */
[$_a-zA-Z][$_a-zA-Z0-9]* {
    count();
    #ifdef DEBUG_LEX
    printf("<id>");
    #else
    return ID;
    #endif
}


 /* OPERATORS */

"=>" {
    count();
    #ifdef DEBUG_LEX
    printf("<=>>");
    #else
    return ARROW;
    #endif
}

 /* assignment */
 = {
    count();
    #ifdef DEBUG_LEX
    printf("<=>");
    #else
    return *yytext;
    #endif
 }
{op_and_assign} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_and_assign>");
    #else
    return OP_AND_ASSIGN;
    #endif
 }


 /* arithmetic operators */
 /* + and - can be unary, so separetely from other arithm ops */
{op_arithm_sum} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_arithm_sum>");
    #else
    return OP_ARITHM_SUM;
    #endif
}
{op_arithm} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_arithm>");
    #else
    return OP_ARITHM;
    #endif
}
"*" { /* separetely from op_arithm because can be used in import *  */
    count();
    #ifdef DEBUG_LEX
    printf("<*>");
    #else
    return *yytext;
    #endif
}
{op_inc} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_inc>");
    #else
    return OP_INC;
    #endif
}

 /* logic operations */
{op_logic} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_logic>");
    #else
    return OP_LOGIC;
    #endif
}
! {
    count();
    #ifdef DEBUG_LEX
    printf("<op_logic_not>");
    #else
    return *yytext;
    #endif
}
 /* bitwise operations */
{op_bit} {
    count();
    #ifdef DEBUG_LEX
    printf("<op_bit>");
    #else
    return OP_BIT;
    #endif
}
~ {
    count();
    #ifdef DEBUG_LEX
    printf("<~>");
    #else
    return *yytext;
    #endif
}

 /* OTHER */
 /* access element property */
"." {
    count();
    #ifdef DEBUG_LEX
    printf("<.>");
    #else
    return *yytext;
    #endif
}
"," {
    count();
    #ifdef DEBUG_LEX
    printf("<,>");
    #else
    return *yytext;
    #endif
}
":" {
    count();
    #ifdef DEBUG_LEX
    printf("<:>");
    #else
    return *yytext;
    #endif
}
"?" {
    count();
    #ifdef DEBUG_LEX
    printf("<?>");
    #else
    return *yytext;
    #endif
}
";" {
    count();
    #ifdef DEBUG_LEX
    printf("<;>");
    #else
    return *yytext;
    #endif
}


 /* brackets */
"(" {
    count();
    #ifdef DEBUG_LEX
    printf("<(>");
    #else
    return *yytext;
    #endif
}
")" {
    count();
    #ifdef DEBUG_LEX
    printf("<)>");
    #else
    return *yytext;
    #endif
}
"{" {
    count();
    #ifdef DEBUG_LEX
    printf("<{>");
    #else
    return *yytext;
    #endif
}
"}" {
    count();
    #ifdef DEBUG_LEX
    printf("<}>");
    #else
    return *yytext;
    #endif
}
"[" {
    count();
    #ifdef DEBUG_LEX
    printf("<[>");
    #else
    return *yytext;
    #endif
}
"]" {
    count();
    #ifdef DEBUG_LEX
    printf("<]>");
    #else
    return *yytext;
    #endif
}

[\t\n ] {
    count();
    #ifdef DEBUG_LEX
    printf("%c", yytext[0]);
    #endif
}

<<EOF>> {
    #ifdef DEBUG_LEX
    printf("<EOF>");
    #endif
    return 0;
}

. {
    yyerror("Not javascript symbol.");
}

%%  
void count() {
    for (int i = 0; yytext[i] != '\0'; i++) {
        if (yytext[i] == '\n') {
            g_lineno++;
            g_column = 0;
        } else {
            g_column++;
        }
    }
}

 /* AUXILIARY FUNCTIONS */
 int main(int argc, char* argv[])
{
	if(argc==2)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
        g_filename = argv[1];
        #ifdef DEBUG_LEX
    	yylex();
        #else
        yyparse();
        printf("Syntax check completed, everything is fine\n");
        #endif
        return 0;
	}
    else {
        printf("Usage: bin_name file_to_scan\n");
        return 1;
    }
}
