CC = gcc
CFLAGS = -Wall
BUILD = build
INC=include 
tg=termp2p

SRC = $(wildcard *.c)
OBJ = $(patsubst ./%.c, $(BUILD)/%.o, $(SRC))

$(BUILD)/%.o: $(DOTC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

tg: $(OBJ)
	$(CC) $(CFLAGS) -I$(INC) -o $@ $^ 

.PHONY: clean
	rm -r $(BUILD)/*



