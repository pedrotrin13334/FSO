#include<stdio.h>
int main(int argc,char **argv)
{int i = 2;
printf("# de parametros: %d\n",argc);
printf("Nome do executavel:");
while(argv[0][i] != '\0')
{
printf("%c",argv[0][i]);
i++;
}
printf("\n");
for(int j = 1 ; j < argc ; j++)
{
  printf("Parametro #%d: %s\n",j,argv[j]);
}


return 0;
}
