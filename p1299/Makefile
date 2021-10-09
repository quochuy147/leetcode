.DEFAULT_GOAL: all
all: clean main
	./replace-elements-with-greatest-element-on-right-side
clean:
	rm -fv replace-elements-with-greatest-element-on-right-side
main:
	gcc -o replace-elements-with-greatest-element-on-right-side replace-elements-with-greatest-element-on-right-side.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o replace-elements-with-greatest-element-on-right-side replace-elements-with-greatest-element-on-right-side.c
	./replace-elements-with-greatest-element-on-right-side
	gcov replace-elements-with-greatest-element-on-right-side.c
rm:
	rm -fv replace-elements-with-greatest-element-on-right-side
	rm -fv replace-elements-with-greatest-element-on-right-side.gcno
	rm -fv replace-elements-with-greatest-element-on-right-side.gcda
	rm -fv replace-elements-with-greatest-element-on-right-side.c.gcov
	rm -fv array.h.gcov