#include "include/buffer.h"

void reescaling_buffer(buffer_state* buffer)
{
  if(sizeof(buffer->buffer) > 1024)
  {
   buffer->size += buffer->size; 
  }else return;
}
