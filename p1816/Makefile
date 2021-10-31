.DEFAULT_GOAL: all
all: clean main
	./truncate-sentence
clean:
	rm -fv truncate-sentence
main:
	gcc -o truncate-sentence truncate-sentence.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o truncate-sentence truncate-sentence.c
	./truncate-sentence
	gcov truncate-sentence.c
rm:
	rm -fv truncate-sentence
	rm -fv truncate-sentence.gcno
	rm -fv truncate-sentence.gcda
	rm -fv truncate-sentence.c.gcov