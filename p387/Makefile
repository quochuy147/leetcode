.DEFAULT_GOAL: all
all: clean main
	./first-unique-character-in-a-string
clean:
	rm -fv first-unique-character-in-a-string
main:
	gcc -o first-unique-character-in-a-string first-unique-character-in-a-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o first-unique-character-in-a-string first-unique-character-in-a-string.c
	./first-unique-character-in-a-string
	gcov first-unique-character-in-a-string.c
rm:
	rm -fv first-unique-character-in-a-string
	rm -fv first-unique-character-in-a-string.gcno
	rm -fv first-unique-character-in-a-string.gcda
	rm -fv first-unique-character-in-a-string.c.gcov