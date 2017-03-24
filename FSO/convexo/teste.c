#include <stdio.h>
#include "points_planes.h"
#include "geometry.h"
pt teste[4];
pl teste_1;
double comprimento_lado(pt,pt);
int convex_cond(pl);
double area(pl);
int main(int argc, char const *argv[]) {

for(int i=0;i<=3;i++)
{
  scanf("%lf %lf",&teste[i].x,&teste[i].y);
  teste_1.point[i].x = teste[i].x;
  teste_1.point[i].y = teste[i].y;
}

int cond = convex_cond(teste_1);
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
  /*for(int i=0;i<=3;i++)
  {
    teste_1.points[i].x = i;
    teste_1.points[i].y = (-1)*i;
  }
  for(int i = 0; i <= 3; i++) {
    printf("%d %d\n",teste_1.points[i].x,teste_1.points[i].y);
  }*/

    return 0;
}
