#include "include/init.h"
#include "include/user.h"
#include "include/text.h"

int main()
{
  user* usr = init_user();
  menu();
  get_nickname(usr);
  write(usr);
  send(usr);
  return 0;
}

