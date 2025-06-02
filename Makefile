CC = gcc
CFLAGS = -Wall
BUILD = build
INC=include 
PD=extern/pdcurses/x11
tg=termp2p

SRC = $(wildcard *.c)
OBJ = $(patsubst ./%.c, $(BUILD)/%.o, $(SRC))

$(BUILD)/%.o: $(DOTC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

tg: $(OBJ)
	LD_LIBRARY_PATH=$(pwd)/extern/pdcurses/x11:$$LD_LIBRARY_PATH $(CC) $(CFLAGS) -I$(INC) -L$(PD) -o $@ $^ -lXCurses

.PHONY: clean
	rm -r $(BUILD)/*



