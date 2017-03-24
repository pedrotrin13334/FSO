#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char teste[256],teste_1[256];
  int idade;
  FILE* fp;
  printf("Digite seu nome:");
  scanf("%255s",teste);
  printf("Digite sua idade:");
  scanf("%d",&idade );
  strcpy(teste_1,teste);
  strcat(teste_1,".txt");
  fp = fopen(teste_1,"w");
  fprintf(fp,"Seu nome:%s \n",teste);
  fprintf(fp,"Sua idade:%d \n",idade);
  return 0;
}
