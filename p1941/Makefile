.DEAFAULT_GOAL: all
all: clean main
	./check-if-all-characters-have-equal-number-of-occurrences
clean:
	rm -fv check-if-all-characters-have-equal-number-of-occurrences
main:
	gcc -o check-if-all-characters-have-equal-number-of-occurrences check-if-all-characters-have-equal-number-of-occurrences.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o check-if-all-characters-have-equal-number-of-occurrences check-if-all-characters-have-equal-number-of-occurrences.c
	./check-if-all-characters-have-equal-number-of-occurrences
	gcov check-if-all-characters-have-equal-number-of-occurrences.c
rm:
	rm -fv check-if-all-characters-have-equal-number-of-occurrences
	rm -fv check-if-all-characters-have-equal-number-of-occurrences.gcno
	rm -fv check-if-all-characters-have-equal-number-of-occurrences.gcda
	rm -fv check-if-all-characters-have-equal-number-of-occurrences.c.gcov