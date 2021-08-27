.DEFAULT_GOAL: all
all: clean main
	./x-of-a-kind-in-a-deck-of-cards
clean:
	rm -fv x-of-a-kind-in-a-deck-of-cards
main:
	gcc -o x-of-a-kind-in-a-deck-of-cards x-of-a-kind-in-a-deck-of-cards.c
cover:
	gcc -fprofile-arcs -ftest-coverage -o x-of-a-kind-in-a-deck-of-cards x-of-a-kind-in-a-deck-of-cards.c
	./x-of-a-kind-in-a-deck-of-cards
	gcov x-of-a-kind-in-a-deck-of-cards.c
rm:
	rm -fv x-of-a-kind-in-a-deck-of-cards
	rm -fv x-of-a-kind-in-a-deck-of-cards.gcda
	rm -fv x-of-a-kind-in-a-deck-of-cards.gcno
	rm -fv x-of-a-kind-in-a-deck-of-cards.c.gcov