.DEFAULT_GOAL: all
all: clean main
	./check-if-the-sentence-is-pangram
clean:
	rm -fv check-if-the-sentence-is-pangram
main:
	gcc -o check-if-the-sentence-is-pangram check-if-the-sentence-is-pangram.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o check-if-the-sentence-is-pangram check-if-the-sentence-is-pangram.c
	./check-if-the-sentence-is-pangram
	gcov check-if-the-sentence-is-pangram.c
rm:
	rm -fv check-if-the-sentence-is-pangram
	rm -fv check-if-the-sentence-is-pangram.gcno
	rm -fv check-if-the-sentence-is-pangram.gcda
	rm -fv check-if-the-sentence-is-pangram.c.gcov