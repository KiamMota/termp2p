#include "include/user.h"
#include "include/init.h"
#include "include/text.h"

int main() {

  user *usr = init_user();
  menu();
  get_nickname(usr);
  /*todo: system control*/
  while (1) {
    write(usr);
    send(usr);
  }
  return 0;
}
