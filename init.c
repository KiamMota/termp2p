#include "include/init.h"
#include <curses.h>

void menu()
{
  printw("welcome to termp2p \n");
  printw("[1] - join in room \n");
  printw("[2] - create a room\n");
}

char get_coice()
{
  char choice;
  fgets(&choice, sizeof(choice), stdin);  
  loop:
    if(choice != 1 || choice != 2) 
  goto loop;
  
  return choice;
}

void get_nickname(user* usr) {
    char name[16];
    printw("enter your nickname: ");
    getnstr(name, 15);
    if (strlen(name) == 0) return;
    strcpy(usr->nickname, name);
}
