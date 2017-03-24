#include<stdio.h>
#ifndef POINTS_PLANES_H
#define POINTS_PLANES_H
typedef struct point
{
  double x;
  double y;
} pt ;
typedef struct plane
{
 pt point[4];
} pl ;
#endif
