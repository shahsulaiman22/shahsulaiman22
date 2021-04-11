/** C program to convert kilometer into meter. 
/ * centimeter and millimeter
*/
#include<stdio.h>

int main ()
{
float meter,centimeter, millimeter, kilometer;
	/*
* Take length in kilimeter as input from user
*/	printf("Enter length in Kilometer (km) \n");
	scanf("%f", &kilometer);
	/*
	* 1 km = 1000 m, 1 km = 100000 cm, 1 km = 1000000 mm
	*/
	printf("%.4f kilometer = %. 4f Meter\n" , kilometer, meter);
	printf("%.4f Kilometr =  % . 4f Centimeter\n", kilometer, centimeter);
	printf("%. 4f kilometr = %. 4f Millimetr\n" , kilometer, millimeter);
	
	return 0;
	
}
