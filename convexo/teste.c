#include <stdio.h>
#include "points_planes.h"
#include "geometry.h"
#include "entradas_saidas.h"
pl teste_1;
double comprimento_lado(pt,pt);
int convex_cond(pl);
double area(pl);
int main(int argc, char const *argv[]) {
teste_1 = entradas();
int cond = convex_cond(teste_1);
saidas(cond,teste_1);
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
