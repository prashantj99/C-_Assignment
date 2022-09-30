#include<stdio.h>
#include<conio.h>
#include"Library.h"

void main(){
    struct Shape s;
    //coordinate of shape
    s.x_cord[0]=20.077; s.y_cord[0]=11.598;
    s.x_cord[1]=26.526; s.y_cord[1]=90.138;
    s.x_cord[2]=23.674; s.y_cord[2]=32.579;

    double area_under_A = find_area(s);
    printf("Area to be coloured black: %lf\n", area_under_A);
}