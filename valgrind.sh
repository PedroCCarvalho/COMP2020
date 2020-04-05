lex jucompiler.l
yacc -d -v jucompiler.y
cc -o jucompiler tree.c y.tab.c lex.yy.c
zip jac.zip jucompiler.l jucompiler.y tree.h tree.c 
valgrind --leak-check=yes ./jucompiler < test_cases/essencial.java -t