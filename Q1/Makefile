CC = gcc

SRCS = main.c expression_tree.c arithmetic_operations.c fibonacci.c
EXEC = program

TEST_SRCS = fibonacci_test.c fibonacci.c
TEST_EXEC = test_program


build:
	@gcc $(SRCS) -o $(EXEC)

run: build
	@./$(EXEC)

clean:
	@rm -f ./$(EXEC)


test-build:
	@gcc $(TEST_SRCS) -o $(TEST_EXEC)

test: test-build
	@./$(TEST_EXEC)

clean-all:
	@rm -f ./$(EXEC) ./$(TEST_EXEC)
