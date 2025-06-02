#include "include/user.h"
#include "include/init.h"
#include "include/text.h"
#include "curses.h"

int main() {
  initscr();
  cbreak();
  
  user *usr = init_user();
  menu();
  get_nickname(usr);
  while (1) {
    write(usr);
    send(usr);
  }
  endwin();
  return 0;
}
