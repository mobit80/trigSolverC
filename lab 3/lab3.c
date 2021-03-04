/*
 Westin Reasons
 2347 Special Topics Programming Lab 3
 04/19/2020
*/

#include<stdlib.h>
#include<stdio.h>
#include "myLib.h"

void main()

{
	float radius, height, value, v1, v2, v3;
	int entries;

	printf("Enter the radius of a sphere: ");
	scanf("%f \n", &radius);
	sphere(radius);

	printf("enter the radius and height of a sphere: ");
	scanf("%f %f \n", &radius, &height);
	volCylinder(radius, height);

	printf("enter the number of floats in an array: ");
	scanf("%d \n", &entries);
	float x[entries];
	printf("enter floats to populate array: ");
	for (int i = 0; i < entries; i++)
	{
		scanf("%f", &x[i]);
	}
	sumFloats(x, entries);

	printf("enter 3 values for sin calculations: ");
	scanf("%f %f %f", &v1, &v2, &v3);
	sine(v1);
	sine(v2);
	sine(v3);

}

