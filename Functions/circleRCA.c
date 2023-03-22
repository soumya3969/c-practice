//find circumference,radius and area of circle.
#include<stdio.h>
#include<math.h>
double dia(double r)
{
	return (2*r);
}
double cir(double r)
{
	return (2*M_PI*r);
}
double area(double r)
{
	return(M_PI*r*r);
}
int main()
{
	float r,d,c,a;
	printf("EMTER THE RADIUS OF THE CIRCLE: ");
	scanf("%f",&r);
	d=dia(r);
	printf("Diameter of the circle is :%.2f\n",d);
	c=cir(r);
	printf("Circumference of the circle is :%.2f\n",c);
	a=area(r);
	printf("Area of the circle is :%.2f\n",a);
	return 0;
}
