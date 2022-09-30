#include <stdio.h>
#include <math.h>
#include "Library.h"

// "Angle at which these roads meets"
double find_angle(struct Road r1, struct Road r2)
{
    double slope_r1=(double)(-r1.a)/r1.b;
    double slope_r2=(double)(-r2.a)/r2.b;
    double angle=abs((slope_r1-slope_r2)/(1+slope_r1*slope_r2));
    return angle;
}

//find distance b/w two points in km
double find_distance(double lat1, double lon1, double lat2, double lon2)
{
    // distance between latitudes
    // and longitudes
    double dLat = (lat2 - lat1)*PI/180.0;
    double dLon = (lon2 - lon1)*PI/ 180.0;

    // convert to radians
    lat1 = (lat1) * PI / 180.0;
    lat2 = (lat2) * PI / 180.0;

    // apply formulae
    double a = pow(sin(dLat / 2), 2) +
            pow(sin(dLon / 2), 2) *
            cos(lat1) * cos(lat2);
    double rad = 6371;
    double c = 2 * asin(sqrt(a));
    return rad * c;
}

//find area of shape
double find_area(struct Shape s)
{
    double area;

    for(int i=0; i<3; i++)
    {
        area+=s.x_cord[i%3]*s.y_cord[(i+1)%3]-s.x_cord[(i+1)%3]*s.y_cord[i%3];
    }
    
    area=area/2;

    return area > 0 ? area : -area;
}