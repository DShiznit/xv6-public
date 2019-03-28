#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "current readcount = %d\n", getreadcount());
  exit();
}
