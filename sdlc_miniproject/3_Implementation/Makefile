PROJECT_NAME = ScientificCalculator

BUILD = build

SRC =src/operations.c\
main.c

TEST_SRC = src/operations.c\
unity/unity_source.c\
test/operations_test.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all
$(TEST_NAME):test

.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm


BUILD = build
$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) -lm

run:$(PROJECT_NAME)
	./${PROJECT_OUTPUT}
doc:
	make -C documentation

test:$(TEST_SRC) $(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)

runtest:$(TEST_NAME)
	./$(TEST_OUTPUT)


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
$(BUILD):
	mkdir build
