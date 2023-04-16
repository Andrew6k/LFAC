

all:
	flex LFAC.l
	yacc -d LFAC.y
	gcc lex.yy.c y.tab.c
rm:
	rm a.out
	rm y.tab.h
	rm y.tab.c
	rm lex.yy.c
	rm symbol_table.txt