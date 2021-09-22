.DEFAULT_GOAL: all
all: clean main
	./ransom-note
clean:
	rm -fv  ransom-note
main:
	gcc -o ransom-note ransom-note.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o ransom-note ransom-note.c
	./ransom-note
	gcov ransom-note.c
rm:
	rm -fv ransom-note
	rm -fv ransom-note.gcno
	rm -fv ransom-note.gcda
	rm -fv ransom-note.c.gcov