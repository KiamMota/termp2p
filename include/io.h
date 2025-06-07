#include "user.h"
#include "buffer.h"

#ifndef _IO_H_
#define _IO_H_

#define save_cursor() printf("\033[s")
#define restore_cursor() printf("\033[u")

void write(user* usr);
void send(user* usr);
#endif
