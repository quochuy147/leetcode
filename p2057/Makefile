.DEFAULT_GOAL: all
all: clean main
	./smallest-index-with-equal-value
clean:
	rm -fv smallest-index-with-equal-value
main:
	gcc -o smallest-index-with-equal-value smallest-index-with-equal-value.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o smallest-index-with-equal-value smallest-index-with-equal-value.c
	./smallest-index-with-equal-value
	gcov smallest-index-with-equal-value.c
rm:
	rm -fv smallest-index-with-equal-value
	rm -fv smallest-index-with-equal-value.gcno
	rm -fv smallest-index-with-equal-value.gcda
	rm -fv smallest-index-with-equal-value.c.gcov
	rm -fv array.h.gcov	