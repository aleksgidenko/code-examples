#include "stdio.h"

int main(int argc, char* argv[]) {
  for (int i=0; i<argc; i++) {
    printf("idx = %d, arg = %s\n", i, argv[i]);
  }
  return 0;
}