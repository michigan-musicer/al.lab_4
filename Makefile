lab04: lab04.c
	gcc lab04.c lab04.h -o lab04
	./lab04

examples: lab04_examples.c
	gcc lab04_examples.c lab04.h -o examples
	./examples