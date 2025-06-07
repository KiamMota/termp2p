#include "include/init.h"
#include <string.h>

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
}

void get_nickname(user* usr) {
    char name[16];
    loop:
    printf("enter your nickname: ");
    fgets(name, sizeof(name), stdin);
    if (strlen(name) == 0) return;
    for(int i = 0; i<sizeof(name); i++){
      if(name[i] == ' ')
      {
        printf("the nickname has characters that are not allowed! \n");
        memset(name, 0, sizeof(name));
        goto loop;    
      }
    }
  
    
    strcpy(usr->nickname, name);
}
