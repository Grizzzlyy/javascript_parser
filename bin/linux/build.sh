cd ../../
yacc ./src/yacc.y -o ./build/y.tab.c --header=./build/y.tab.h
lex -o "./build/lex.yy.c" ./src/lex.l 
gcc ./src/main.c ./build/lex.yy.c ./build/y.tab.c -o ./build/parser -I ./src
