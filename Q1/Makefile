CC = gcc

SRCS = main.c expression_tree.c arithmetic_operations.c fibonacci.c
EXEC = program

build:
	@gcc $(SRCS) -o $(EXEC)

run: build
	@./$(EXEC)

clean:
	@rm -f ./$(EXEC)
