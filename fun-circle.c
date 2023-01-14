//program for get the circle diameter,circumference,radious.
#include<stdio.h>
#include<math.h>//used for get the pi value written as (M_PI)
double diameter(double radius);
double circumference(double radius);
double area(double radius);
int main()
{
	float radius,dia,circ,a;
	printf("enter the radious of circle: ");
	scanf("%f",&radius);
	dia= diameter(radius);
	circ= circumference(radius);
	a= area(radius);
	printf("The Diameter of the Circle is %.2f units.\n",dia);
	printf("The Diameter of the Circle is %.2f units.\n",circ);
	printf("The Diameter of the Circle is %.2f sq.units.\n",a);
	
	return 0;
}
double diameter(double radius)
{
	return(2*radius);
}
double circumference(double radius)
{
	return(2*M_PI*radius);
}
double area(double radius)
{
	return(2*radius*radius);
}
