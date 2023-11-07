lab04: lab04.c
	gcc lab04.c lab04.h -o lab04 -lm
	./lab04

examples: lab04_examples.c
	gcc lab04_examples.c lab04.h -o examples
	./examples

solution: lab04_solution.c
	gcc lab04_solution.c lab04.h -o solution -lm
	./solution