.DEFAULT_GOAL: all
all: clean main
	./repeated-substring-pattern
clean:
	rm -fv repeated-substring-pattern
main:
	gcc -o repeated-substring-pattern repeated-substring-pattern.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o repeated-substring-pattern repeated-substring-pattern.c
	./repeated-substring-pattern
	gcov repeated-substring-pattern.c
rm:
	rm -fv repeated-substring-pattern
	rm -fv repeated-substring-pattern.gcno
	rm -fv repeated-substring-pattern.gcda
	rm -fv repeated-substring-pattern.c.gcov