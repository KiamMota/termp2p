#include <stdio.h>
#include <string.h>
#include "include/user.h"
#include "include/buffer.h"

void menu();
char get_choice();
void get_nickname(user* usr);

int main()
{
  user* usr = init_user();
  char choice = 0;
  menu();
  choice = get_choice();
  get_nickname(usr);
  return 0;
}

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
  usr->nickame = name;
}
