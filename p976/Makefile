.DEFAULT_GOAL : all
all: clean main
	./largest-perimeter-triangle
clean:
	rm -fv largest-perimeter-triangle
main: 
	gcc -o largest-perimeter-triangle largest-perimeter-triangle.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o largest-perimeter-triangle largest-perimeter-triangle.c
	./largest-perimeter-triangle
	gcov largest-perimeter-triangle.c
rm:
	rm -fv largest-perimeter-triangle.exe
	rm -fv largest-perimeter-triangle.gcda
	rm -fv largest-perimeter-triangle.gcno
	rm -fv largest-perimeter-triangle.c.gcov