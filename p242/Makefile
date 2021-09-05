.DEFAULT_GOAL: all
all: clean main
	./valid-anagram
clean:	
	rm -fv valid-anagram
main:
	gcc -o valid-anagram valid-anagram.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o valid-anagram valid-anagram.c
	./valid-anagram
	gcov valid-anagram.c
rm:
	rm -fv valid-anagram
	rm -fv valid-anagram.gcno
	rm -fv valid-anagram.gcda
	rm -fv valid-anagram.c.gcov