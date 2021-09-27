.DEFAULT_GOAL: all
all: clean main
	./best-time-to-buy-and-sell-stock
clean:
	rm -fv best-time-to-buy-and-sell-stock
main:
	gcc -o best-time-to-buy-and-sell-stock best-time-to-buy-and-sell-stock.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o best-time-to-buy-and-sell-stock best-time-to-buy-and-sell-stock.c
	./best-time-to-buy-and-sell-stock
	gcov best-time-to-buy-and-sell-stock.c
rm:
	rm -fv best-time-to-buy-and-sell-stock
	rm -fv best-time-to-buy-and-sell-stock.gcno
	rm -fv best-time-to-buy-and-sell-stock.gcda
	rm -fv best-time-to-buy-and-sell-stock.c.gcov
	rm -fv array.h.gcov