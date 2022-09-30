#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"Library.h"

void main(){
    
    double distance;
    // Latitude and Longitude values of Bhopal as 23.259933 N, 77.412613 E 
    double lat1 = 23.259933;
	double lon1 = 77.412613;

    // Latitude and Longitude values of Bangalore as 12.9716 N, 77.5946 E.
	double lat2 = 12.9716;
	double lon2 = 77.5946;
    distance = find_distance(lat1, lon1, lat2, lon2);
    printf("Distance Between Saurabh Sir and Prateek Sir: %lf\n", distance);
}