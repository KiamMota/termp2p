#include "include/text.h"
#include "curses.h"
#include <string.h>

char commands[48][48] = 
{
"drop-table", "no-way", "meh"
};

void write(user* usr) {
    printw("[%s]: ", usr->nickname);
    getnstr(usr->buffer, USER_BUFFER - 1);    
}

void send(user* usr)
{
  int x,y;
  getyx(stdscr, y, x);
  printw("[%s]: %s \n", usr->nickname, usr->buffer);
  move(y, 0); clrtoeol();
  memset(usr->buffer, 0, USER_BUFFER);
}

