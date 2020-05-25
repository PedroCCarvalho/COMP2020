lex jucompiler.ld
yacc -d jucompiler.y
cc -o jucompiler tree.c y.tab.c lex.yy.c
./jucompiler -t < test_cases/string_error2.java