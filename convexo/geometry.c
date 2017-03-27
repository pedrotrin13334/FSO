#include<stdio.h>
#include "points_planes.h"
#include "geometry.h"
#include<math.h>
#include<stdlib.h>
double comprimento_lado(pt ponto1, pt ponto2)
{
  double ponto_rx = ponto1.x - ponto2.x;
  double ponto_ry = ponto1.y - ponto2.y;
  printf("%f %f\n",ponto_rx,ponto_ry);
  double comprimento = ponto_rx*ponto_rx + ponto_ry*ponto_ry;
  printf("%f\n",comprimento);
  comprimento = pow(comprimento,0.5);
  return comprimento;
}
double area(pl quad)
{ double vr1,vr2 =0;
  for (int i = 0; i < 3; i++) {
  vr1 += quad.point[i].x * quad.point[i+1].y;
}
  vr1 += quad.point[3].x * quad.point[0].y;
for (int i = 0; i < 3; i++) {
vr2 -= quad.point[i].y * quad.point[i+1].x;
}
vr2 -= quad.point[3].y * quad.point[0].x;
double total = (vr2 + vr1)/2;
return abs(total);
};
int convex_cond(pl quadrilatero)
{
  double d1 = (quadrilatero.point[1].x - quadrilatero.point[0].x)*(quadrilatero.point[2].y - quadrilatero.point[0].y)
  - (quadrilatero.point[1].y - quadrilatero.point[0].y)*(quadrilatero.point[2].x - quadrilatero.point[0].x);
  double d2 = (quadrilatero.point[3].x - quadrilatero.point[0].x)*(quadrilatero.point[2].y - quadrilatero.point[0].y)
  - (quadrilatero.point[3].y - quadrilatero.point[0].y)*(quadrilatero.point[2].x - quadrilatero.point[0].x);
  if(d1<0&&d2<0 || d1>0&&d2>0)
  {
    return 0;
  }
  else{
  double d3 = (quadrilatero.point[0].x - quadrilatero.point[1].x)*(quadrilatero.point[3].y - quadrilatero.point[1].y)
  - (quadrilatero.point[0].y - quadrilatero.point[1].y)*(quadrilatero.point[3].x - quadrilatero.point[1].x);
  double d4 = (quadrilatero.point[2].x - quadrilatero.point[1].x)*(quadrilatero.point[3].y - quadrilatero.point[1].y)
  - (quadrilatero.point[2].y - quadrilatero.point[1].y)*(quadrilatero.point[3].x - quadrilatero.point[1].x);
  if (d3<0&&d4<0 || d3>0&&d4>0) {
    return 0;
    }
  else
  {
    return 1;
  }
}
}

//d = (x-x1)(y2-y1) -(y-y1)(x2-x1)
