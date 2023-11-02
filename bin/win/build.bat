@ECHO OFF
cd ..\..\
bison .\src\yacc.y -o .\build\y.tab.c --defines=.\build\y.tab.h
flex  -o.\build\lex.yy.c .\src\lex.l 
gcc .\src\main.c .\build\lex.yy.c .\build\y.tab.c -o .\build\parser -I .\src -g
cd bin\win
pause