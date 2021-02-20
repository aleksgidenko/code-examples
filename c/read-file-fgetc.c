#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;

  // open file
  fp = fopen("./shakespeare.txt", "r");
  if (fp == NULL) {
    perror("Failed to open file");
    return(-1);
  }

  // get size of file
  fseek(fp, 0, SEEK_END);
  long len = ftell(fp);
  rewind(fp);

  // allocate memory for file contents
  char *contents = malloc(len * sizeof(char));

  // copy file contents into memory
  int i = 0;
  do {
    contents[i++] = fgetc(fp);
    if (feof(fp)) break;
  } while(1);

  // print contents
  printf("%s", contents);

  // close file
  fclose(fp);
  return(0);
}