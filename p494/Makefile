.DEFAUT_GOAL: all
all: clean main
	./target-sum
clean:
	rm -fv target-sum
main:
	gcc -o target-sum target-sum.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o target-sum target-sum.c
	./target-sum
	gcov target-sum.c
rm:
	rm -fv target-sum
	rm -fv target-sum.gcno
	rm -fv target-sum.gcda
	rm -fv target-sum.c.gcov