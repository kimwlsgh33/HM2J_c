#include "db.h"
#include <stdio.h>

int main(void) {
  init_db();
  // write_db(100, "test");
  RESULT *test = read_db("test");
  if (test == NULL) {
    printf("%s\n", test->name);
    printf("%d\n", test->point);
  }

  close_db();
  return 0;
}
