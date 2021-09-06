.DEFAULT_GOAL: all
all: clean main
	./excel-sheet-column-number
clean:
	rm -fv excel-sheet-column-number
main:
	gcc -o excel-sheet-column-number excel-sheet-column-number.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o excel-sheet-column-number excel-sheet-column-number.c
	./excel-sheet-column-number
	gcov excel-sheet-column-number.c
rm:
	rm -fv excel-sheet-column-number
	rm -fv excel-sheet-column-number.gcno
	rm -fv excel-sheet-column-number.gcda
	rm -fv excel-sheet-column-number.c.gcov