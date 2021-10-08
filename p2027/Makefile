.DEFAULT_GOAL: all
all: clean main
	./minimum-moves-to-convert-string
clean:	
	rm -fv minimum-moves-to-convert-string
main:
	gcc -o minimum-moves-to-convert-string minimum-moves-to-convert-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o minimum-moves-to-convert-string minimum-moves-to-convert-string.c
	./minimum-moves-to-convert-string
	gcov minimum-moves-to-convert-string.c
rm:
	rm -fv minimum-moves-to-convert-string
	rm -fv minimum-moves-to-convert-string.gcno
	rm -fv minimum-moves-to-convert-string.gcda
	rm -fv minimum-moves-to-convert-string.c.gcov