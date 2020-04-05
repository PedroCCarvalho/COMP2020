lex jucompiler.l
yacc -d jucompiler.y
cc -o jucompiler tree.c y.tab.c lex.yy.c
./jucompiler -e2 < test_cases/blocks.java