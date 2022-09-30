#include<stdio.h>
#include<conio.h>
#include "Library.h"

void main(){
    double angle_at_chowk;
    struct Road abc, xyz;
    // set coefficient of x y and constant of  5x + y - 3 = 0
    abc.a=5;
    abc.b=1;
    abc.c=-3;
    
    // set coefficient of x y and constant of  2x + 3y + 1 = 0
    xyz.a=2;
    xyz.b=3;
    xyz.c=1;

    angle_at_chowk = find_angle(abc, xyz);
    printf("Angle at which these roads meets at 123 Chowk: %lf\n", angle_at_chowk);
}
