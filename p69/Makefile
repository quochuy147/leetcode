.DEFAULT_GOAL: all
all: clean main
	./sqrtx
clean:
	rm -fv sqrtx
main:
	gcc -o sqrtx sqrtx.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o sqrtx sqrtx.c
	./sqrtx
	gcov sqrtx.c
rm:
	rm -fv sqrtx
	rm -fv sqrtx.gcno
	rm -fv sqrtx.gcda
	rm -fv sqrtx.c.gcov