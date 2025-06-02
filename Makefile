CC = gcc
CFLAGS = -Wall
BUILD = build
INC=include 
tg=termp2p

SRC = $(wildcard *.c)
OBJ = $(patsubst $(DOTC)/%.o, $(BUILD)/%.c, $(SRC))

$(BUILD)/%.o: $(DOTC)/%.c
	$(CC) $(CFLAGS) -c -I$(INC) $< -o $@

tg: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
	rm -r $(BUILD)/*



