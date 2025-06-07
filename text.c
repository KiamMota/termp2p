#include "include/text.h"
#include <stdio.h>
#include <string.h>

void write(user* usr) {
  memset(usr->buffer, 0, USER_BUFFER);
  fgets(usr->buffer, USER_BUFFER, stdin);
}

void send(user* usr)
{
  printf("[%s]: %s \n", usr->nickname, usr->buffer);
  memset(usr->buffer, 0, USER_BUFFER);
}

