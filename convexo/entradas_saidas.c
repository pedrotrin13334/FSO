#include "entradas_saidas.h"
double area(pl);
pl entradas(void)
{ pl teste_1;
  pt teste[4];
for(int i=0;i<=3;i++)
{
  scanf("%lf %lf",&teste[i].x,&teste[i].y);
  teste_1.point[i].x = teste[i].x;
  teste_1.point[i].y = teste[i].y;
}
return teste_1;
}

void saidas(int cond, pl teste_1)
{
  if(cond == 1)
  {
    printf("e convexo\n");
    double total = area(teste_1);
    printf("%lf",total);
  }
  else
  {
    printf("nao e convexo\n");
  }
}
