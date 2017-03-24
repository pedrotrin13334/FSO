#include <stdio.h>
int main(int argc, char const *argv[]) {
  FILE* fp;
  fp =  fopen("ola_mundo.txt","w");
  fprintf(fp, "ola mundo!\n");   
  return 0;
}
