#include "include/init.h"

void menu()
{
  printf("welcome to termp2p \n");
  printf("[1] - join in room \n");
  printf("[2] - create a room\n");
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

void get_nickname(user* usr)
{
  char name[14];
  printf("enter your nickname: ");
  fgets(name, sizeof(name), stdin);
  if(strcmp(name, "") == 0) return;
  name[strcspn(name, "\n")] = '\0';
  strcpy(usr->nickame, name);
}

