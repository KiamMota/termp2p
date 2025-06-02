#include <stdio.h>
#include "buffer.h"

#ifndef _USER_H
#define _USER_H

#define USER_BUFFER 255

typedef struct{
  char* nickname;
  char* buffer;
  const char* ip;
  int port;
  const char* chat_connected;
} user;

user* init_user();
int start_creater(user* user, const char* ip, int port);
int destroy_user(user** user);

#endif
