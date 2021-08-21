.DEFAULT_GOAL: all
all: clean main
	./find-smallest-letter-greater-than-target
clean:
	rm -fv find-smallest-letter-greater-than-target
main:
	gcc -o find-smallest-letter-greater-than-target find-smallest-letter-greater-than-target.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o find-smallest-letter-greater-than-target find-smallest-letter-greater-than-target.c
	./find-smallest-letter-greater-than-target
	gcov find-smallest-letter-greater-than-target.c
rm:
	rm -fv find-smallest-letter-greater-than-target.exe
	rm -fv find-smallest-letter-greater-than-target.gcda
	rm -fv find-smallest-letter-greater-than-target.gcno
	rm -fv find-smallest-letter-greater-than-target.c.gcov

