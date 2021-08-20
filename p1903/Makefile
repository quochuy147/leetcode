.DEFAULT_GOAL: all
all: clean main
	./largest-odd-number-in-string
clean:
	rm -fv largest-odd-number-in-string
main:
	gcc -o largest-odd-number-in-string largest-odd-number-in-string.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o largest-odd-number-in-string largest-odd-number-in-string.c
	./largest-odd-number-in-string
	gcov largest-odd-number-in-string.c
rm:
	rm -fv  largest-odd-number-in-string.exe
	rm -fv largest-odd-number-in-string.gcda
	rm -fv largest-odd-number-in-string.gcno
	rm -fv largest-odd-number-in-string.c.gcov 