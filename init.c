#include "include/init.h"
#include <curses.h>
#include <string.h>

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
    loop:
    printw("enter your nickname: ");
    getnstr(name, sizeof(name));
    if (strlen(name) == 0) return;
    for(int i = 0; i<sizeof(name); i++){
      if(name[i] == ' ')
      {
        printw("the nickname has characters that are not allowed! \n");
        memset(name, 0, sizeof(name));
        goto loop;    
      }
    }
  
    
    strcpy(usr->nickname, name);
}
