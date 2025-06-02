#include "include/text.h"
#include "curses.h"
#include <string.h>

void write(user* usr, WINDOW* msg) {
    werase(msg);
    mvwprintw(msg, 1, 1, " > ");
    wrefresh(msg);
    wgetnstr(msg, usr->buffer, USER_BUFFER - 1);
}

void send(user* usr)
{
  
  printw("[%s]: %s \n", usr->nickname, usr->buffer);
  memset(usr->buffer, 0, USER_BUFFER);
}

