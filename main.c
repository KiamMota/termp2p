#include "include/user.h"
#include "include/init.h"
#include "include/text.h"
#include "curses.h"

int main() {

  initscr();
  start_color();
  raw();
  
  user *usr = init_user();
  init_pair(1, COLOR_RED, COLOR_WHITE);

  WINDOW* send_message = newwin(1, 50, 0, 0);
  wbkgd(send_message, COLOR_PAIR(1));
  menu();
  get_nickname(usr);
  /*todo: system control*/
  clear();
  wrefresh(send_message);
  move(2, 0);
  while (1) {
    write(usr, send_message);
    send(usr);
    refresh();
  }
  endwin();
  return 0;
}
