
go: lex.yy.c input.tab.c 
	gcc -g input.tab.c lex.yy.c -lfl -ly -o go 

lex.yy.c: input.l
	flex  input.l

input.tab.c: input.y
	bison -dv input.y

clean:
	rm -f lex.yy.c 
	rm -f input.output
	rm -f input.tab.h
	rm -f input.tab.c
	rm -f go 
