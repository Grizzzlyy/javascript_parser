%{
    #include "main.h"
    #include <stdio.h>
int yywrap()
{
        return 1;
} 
int yydebug=1;
%}
%token K_ASYNC
%token K_EXTENDS
%token K_AS
%token K_BREAK // break
%token K_CASE // case
%token K_CATCH // catch
%token K_CLASS // class
%token K_CONST // const
%token K_CONTINUE // continue
%token K_DEFAULT // default
%token K_DELETE // delete
%token K_DO // do
%token K_ELSE // else
//%token K_FALSE // false
%token K_FINALLY // finally
%token K_FOR // for
%token K_FROM
%token K_FUNCTION // function
%token K_IF // if
%token K_IN // in
%token K_IMPORT
%token K_INSTANCEOF // instanceof
%token K_LET // let
%token K_NEW // new
%token K_NULL // null
%token K_OF
%token K_RETURN // return
%token K_SWITCH // switch
%token K_THIS // this
%token K_THROW // throw
//%token K_TRUE // true
%token K_TRY // try
%token K_TYPEOF // typeof
%token K_VAR // var
%token K_WHILE // while
// LITERALS
%token L_INT
%token L_INT_OCT
%token L_INT_HEX
%token L_FLOAT
%token L_BOOL

%token L_STR

//IDENTIFIER
%token ID

//OPERATORS
%token ARROW
%token OP_AND_ASSIGN
%token OP_ARITHM_SUM
%token OP_ARITHM
%token OP_INC

%token OP_LOGIC

%token OP_BIT


%nonassoc EXPR
%right ',' 
%right '.'
%right '=' OP_AND_ASSIGN 
%left '?' ':'
%left OP_LOGIC
%left OP_BIT
%left K_IN K_INSTANCEOF
%right OP_ARITHM_SUM 
%left OP_ARITHM '*'
%right '!' '~' K_TYPEOF K_DELETE OP_INC
%left K_NEW
%nonassoc FIX
%nonassoc '(' ')'

%%
prog: beginning
        |
        ;
beginning:  part_of_code
        | beginning part_of_code
        ;
part_of_code: body
            | designs
            | import
            | function_dec
            | class_dec
            ;
function_dec:'(' K_FUNCTION function_body ')' '('')' ';' 
            | '(' K_ASYNC '(' ')' ARROW  body ')' '(' ')' ';'
            | '(' '(' ')' ARROW  body ')' '(' ')' ';'
            | K_FUNCTION ID function_body %prec FIX
            ;
class_dec: K_CLASS ID '{' ID code_block_class '}' 
         | K_CLASS ID K_EXTENDS ID '{'ID code_block_class'}'
         | K_CLASS ID K_EXTENDS ID '.' sequence_id'{'ID code_block_class'}'

import: K_IMPORT L_STR ';'
        | K_IMPORT import_content1 K_FROM L_STR ';'
        ;
import_content1: ID 
                | '*' K_AS ID 
                | '{' import_content2 '}'
                | ID ',' '{' import_content2 '}'
                | ID ',' '*' K_AS ID 
                ;
import_content2: ID
                | ID K_AS ID
                | K_DEFAULT K_AS ID
                | L_STR K_AS ID
                | import_content2 ',' import_content2 
                ;
body: '{' '}'
	| '{' code_inside '}'

code_block_class: '(' ')' body
                | '(' args ')' body 
                | code_block_class ID '(' ')' body
                | code_block_class ID '(' args ')' body 
 

code_inside: designs
           | body
           | function_dec  
           | class_dec       
           | code_inside designs
           | code_inside body
           | code_inside function_dec
           | code_inside class_dec
           ;
designs: ID ':' designs          
       | expr ';'
       | declaration ';'
       | interrupt ';'
       | try_catch 
       | if
       | ';'			
       | switch 
       | while 
       | do_while 
       | for
       ;
ret_block_obj:  ID ':' expr ';'
                | ret_block_obj ID ':' expr
                | ret_block_obj ID ':' expr ';'
                ;
if:  K_IF '(' expr ')' part_of_code
   | K_IF '(' expr ')' block K_ELSE block
   | K_IF '(' expr ')' block K_ELSE if
   ;
block: body
     | declaration ';'
     | expr ';'
     | ';'
     | interrupt ';'
     ;	
while: K_WHILE '(' expr ')' part_of_code;
do_while: K_DO part_of_code K_WHILE '(' expr ')' ';'
                ;

try_catch: K_TRY body K_FINALLY body 
                    | K_TRY body K_CATCH '(' '{' ID '}' ')' body
                    | K_TRY body K_CATCH '(' '{' ID ',' sequence_id'}' ')' body
                    | K_TRY body K_CATCH '(' ID ')' body K_FINALLY body
                    | K_TRY body K_CATCH '(' ID ')' body
                    ;
sequence_id: ID 
        | ID ',' sequence_id 
                    
for: K_FOR '(' initialization ';' condition ';' afterthought ')' part_of_code
                | K_FOR '(' type ID K_IN expr ')' part_of_code 
                | K_FOR '(' ID K_IN expr ')' part_of_code 
                | K_FOR '(' type ID K_OF expr ')' part_of_code 
                | K_FOR '(' ID K_OF expr ')' part_of_code 
                ;

initialization: declaration
              | expr %prec EXPR|;
              
afterthought: expr %prec EXPR |;

condition: expr %prec EXPR |;      

switch: K_SWITCH '(' expr ')' '{' in_switch '}'
                 | K_SWITCH '(' expr ')' '{' K_DEFAULT ':' beginning '}'
                 | K_SWITCH '(' expr ')' '{' '}'
                 ;
in_switch: case
        | default
        ;
default: K_DEFAULT ':' case
       | K_DEFAULT ':' beginning case
       | case K_DEFAULT ':' beginning
       | case K_DEFAULT ':' beginning case
       | case K_DEFAULT ':'
       ;
case:  K_CASE expr ':'
        | K_CASE expr ':' beginning
        | case K_CASE expr ':'
        | case K_CASE expr ':' beginning
        ;
declaration: type ID //G
           | type ID '=' expr 
           | type ID '=' expr OP_LOGIC '{' '}'
           | type ID '=' '{' '}'
           | type ID '=' function_dec
	   | declaration ',' ID
           | declaration ',' ID '=' expr
           | declaration ',' ID '=' expr OP_LOGIC '{' '}'
           | declaration ',' ID '=' '{' '}'
	   ;
type: K_VAR
    | K_CONST
    | K_LET
    ;
expr_logic: L_BOOL
          | '!' expr %prec K_TYPEOF 
	  | '~' expr %prec K_TYPEOF 
          | variable '=' expr OP_LOGIC '{' '}'
          | expr OP_LOGIC expr 
          | expr '?' expr ':' expr 
          ;
expr_arithmetic: number
               | OP_INC variable
               | variable OP_INC
               | expr OP_ARITHM expr 
               | expr OP_ARITHM_SUM expr
               | variable OP_AND_ASSIGN expr
               | expr OP_BIT expr
               | expr '*' expr
               | OP_ARITHM_SUM expr %prec K_TYPEOF
               ;
expr: variable 
	| val_cant_assign
	| new
	| delete
        | K_THIS
        | K_THIS arr_prototype
        | expr_logic
        | expr_arithmetic
        | '(' expr ')'
	| '(' expr ')' '.' method 
        | K_NULL
        | variable '=' expr
        | variable '=' function_dec 
        | variable '=' '{' '}'
        | expr ',' expr
        | ID K_IN expr
        | val_cant_assign K_IN expr
	| K_TYPEOF expr %prec K_TYPEOF 
	| expr K_INSTANCEOF ID %prec K_TYPEOF 
        ;
new: K_NEW variable
	;

delete: K_DELETE variable    					
        | K_DELETE '(' variable ')'
        ;
brekets_with_content: '(' ')'				
	| '(' expr ')'
        | '(' expr ',' ')'
        | brekets_with_content '(' ')' %prec '('
        | brekets_with_content '(' expr ')' %prec '('
        | brekets_with_content '(' expr ',' ')' %prec '('
        ;

number: L_FLOAT
        | L_INT
        | L_INT_HEX
        | L_INT_OCT
        | number '.' method
        ;

val_cant_assign: L_STR
        | L_STR '.' method
        | arr_prototype
        | '{' inner_obj '}'
	;

variable: ID %prec FIX								
        | K_THIS '.' ID
	| variable '.' method
        | variable '[' expr ']'
        | K_FUNCTION function_body %prec FIX
        /* | K_FUNCTION ID function_body %prec FIX */
        | variable brekets_with_content %prec FIX
        ;	

        ;
method: ID %prec FIX
        | ID brekets_with_content %prec FIX
        | method '.' ID brekets_with_content %prec FIX
        | method '.' ID %prec FIX
        ;       	
inner_obj:  L_STR ':' expr
	| ID ':' expr
	| inner_obj ',' req_inner 
        | ID ':' K_FUNCTION ID function_body
	;
req_inner: inner_obj %prec FIX
        |  req_inner ',' inner_obj
arr_prototype:  '[' ']'
                | '[' ',' ']'
		| '[' expr ']'
		| '[' ',' expr ']'
                | '[' expr ',' ']'
		| '[' ',' expr ',' ']'
                ;
function_body: '(' args ')' body
             | '(' ')' body
             ;
args:  ID
    | ID '=' expr
    | args ',' args
    ;
interrupt: K_THROW expr
                | K_RETURN
                | K_RETURN expr 
                | K_RETURN '{' '}'
                | K_RETURN '{' ret_block_obj '}'
                | K_BREAK  
                | K_BREAK ID  
                | K_CONTINUE 
                | K_CONTINUE ID 
                ;

%%