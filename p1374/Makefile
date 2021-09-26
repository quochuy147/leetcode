.DEFAULT_GOAL: all
all: clean main
	./generate-a-string-with-characters-that-have-odd-counts
clean:
	rm -fv generate-a-string-with-characters-that-have-odd-counts
main:
	gcc -o generate-a-string-with-characters-that-have-odd-counts generate-a-string-with-characters-that-have-odd-counts.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o generate-a-string-with-characters-that-have-odd-counts generate-a-string-with-characters-that-have-odd-counts.c
	./generate-a-string-with-characters-that-have-odd-counts
	gcov generate-a-string-with-characters-that-have-odd-counts.c
rm:
	rm -fv generate-a-string-with-characters-that-have-odd-counts
	rm -fv generate-a-string-with-characters-that-have-odd-counts.gcno
	rm -fv generate-a-string-with-characters-that-have-odd-counts.gcda
	rm -fv generate-a-string-with-characters-that-have-odd-counts.c.gcov