.DEFAULT_GOAL: all
all: clean main
	./length-of-last-word
clean:
	rm -fv length-of-last-word
main:
	gcc -o length-of-last-word length-of-last-word.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o length-of-last-word length-of-last-word.c
	./length-of-last-word
	gcov length-of-last-word.c
rm:
	rm -fv length-of-last-word
	rm -fv length-of-last-word.gcda
	rm -fv length-of-last-word.gcno
	rm -fv length-of-last-word.c.gcov