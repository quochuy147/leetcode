.DEFAULT_GOAL: all
all: clean main
	./replace-all-digits-with-characters
clean:
	rm -fv replace-all-digits-with-characters
main:
	gcc -o replace-all-digits-with-characters replace-all-digits-with-characters.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o replace-all-digits-with-characters replace-all-digits-with-characters.c
	./replace-all-digits-with-characters
	gcov replace-all-digits-with-characters.c
rm:
	rm -fv replace-all-digits-with-characters
	rm -fv replace-all-digits-with-characters.gcno
	rm -fv replace-all-digits-with-characters.gcda
	rm -fv replace-all-digits-with-characters.c.gcov