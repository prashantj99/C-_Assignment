//MACRO
#define PI 3.14159

/*
define Road equation 
*/
struct Road
{
    int a, b, c;
};

struct Shape
{
    double x_cord[3], y_cord[3];
};

//functions
//find the angle between the paths
double  find_angle(struct Road, struct Road);

//find area of shape
double find_area(struct Shape s);