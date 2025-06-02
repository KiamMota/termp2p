#include "include/text.h"
#include <stdio.h>

void write(user* usr)
{
  if (strcmp(usr->nickame, "no nick") != 0) {
      printf("[%s]: ", usr->nickame);
      fgets(usr->buffer, USER_BUFFER, stdin);
  }else{
    printf("unvalid nick!");
  }
}

void send(user* usr)
{
  printf("[%s]: %s \n", usr->nickame, usr->buffer);
}
