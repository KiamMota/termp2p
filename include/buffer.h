#include <stdio.h>

#ifndef _BUFFER_H_
#define _BUFFER_H_

typedef struct {
  int size;
  const char* buffer;
} buffer_state;

buffer_state* init_buffer_state();
void reescaling_buffer(buffer_state* buffer);

#endif
