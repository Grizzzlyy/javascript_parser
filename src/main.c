#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define RESET   "\033[0m"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


extern char* g_filename;
extern int g_lineno;
extern int g_column;
extern FILE* yyin;

void yyerror(const char* error_description){
    if(!strncmp(error_description, "syntax error", strlen("syntax error")))
        g_column -= 1;
    //print error description and position
    #if defined(_WIN32) | defined(WIN32)
    printf("\nERROR: %s\n", error_description);
    printf("In file %s:%d:%d\n", g_filename, g_lineno, g_column);
    #elif __unix
    printf(BOLDRED "\nERROR: " RESET "%s\n", error_description);
    printf("In file " BOLDWHITE "%s:%d:%d\n" RESET, g_filename, g_lineno, g_column);
    #endif
    //skip normal code:
    rewind(yyin);
    int cur_ch;
    int cur_lineno=1;
    while(cur_lineno!=g_lineno)
    {
        cur_ch = fgetc(yyin);
        if(cur_ch == '\n') cur_lineno++;
    }
    // print string with error
    cur_ch = fgetc(yyin);
    for (int col_n = 0; cur_ch!='\n' && cur_ch!=EOF;col_n++)
    {
        if(col_n == g_column) {
            #if defined(_WIN32) | defined(WIN32)
            printf("%c", cur_ch);
            #elif __unix
            printf(BOLDRED "%c" RESET, cur_ch);
            #endif
        }
        else {
            #if defined(_WIN32) | defined(WIN32)
            printf("%c", cur_ch);
            #elif __unix
            printf(BOLDWHITE "%c" RESET, cur_ch);
            #endif
        }
        cur_ch = fgetc(yyin);
    }
    printf("\n");
    //print marker ^
    for (int i = 0; i < g_column; i++) printf(" ");
    printf("^\n");
    
    //close file and exit
    fclose(yyin);
    exit(1);
}
