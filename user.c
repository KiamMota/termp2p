#include "include/user.h"
#include <stdlib.h>

user* init_user(){
  user* usr = (user *)malloc(sizeof(user));
  if(!usr) return NULL;
  usr->buffer = (char *)malloc(255);
  usr->nickname = (char *)malloc(255);
  usr->ip = "no ip";
  usr->port = 0;
  usr->chat_connected = "no chat";
  return usr;  
}


