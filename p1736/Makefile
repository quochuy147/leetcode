.DEAFAULT_GOAL: all
all: clean main
	./latest-time-by-replacing-hidden-digits
clean:
	rm -fv latest-time-by-replacing-hidden-digits
main:
	gcc -o latest-time-by-replacing-hidden-digits latest-time-by-replacing-hidden-digits.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o latest-time-by-replacing-hidden-digits latest-time-by-replacing-hidden-digits.c
	./latest-time-by-replacing-hidden-digits
	gcov latest-time-by-replacing-hidden-digits.c
rm:
	rm -fv latest-time-by-replacing-hidden-digits
	rm -fv latest-time-by-replacing-hidden-digits.gcno
	rm -fv latest-time-by-replacing-hidden-digits.gcda
	rm -fv latest-time-by-replacing-hidden-digits.c.gcov