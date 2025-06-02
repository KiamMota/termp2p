CC = gcc
CFLAGS = -Wall
BUILD = build
INC=include 
tg=termp2p
EXTERN=extern

SRC = $(wildcard *.c)
OBJ = $(patsubst $(DOTC)/%.o, $(BUILD)/%.c, $(SRC))

$(BUILD)/%.o: $(DOTC)/%.c
	$(CC) $(CFLAGS) -c -I$(INC) -I$(EXTERN)/pdcurses $< -o $@

tg: $(OBJ)
	$(CC) $(CFLAGS) -L$(EXTERN)/pdcurses -o $@ $^ -lXCurses

.PHONY: clean
	rm -r $(BUILD)/*



