
game: lex.yy.c input.tab.c 
	gcc -g main.c UserInput/input.tab.c UserInput/lex.yy.c -lfl -ly -o game 

UserInput/lex.yy.c: input.l
	flex  UserInput/input.l

UserInput/input.tab.c: input.y
	bison -dv UserInput/input.y

clean:
	rm -f UserInput/lex.yy.c 
	rm -f UserInput/input.output
	rm -f UserInput/input.tab.h
	rm -f UserInput/input.tab.c
	rm -f UserInput/game 
