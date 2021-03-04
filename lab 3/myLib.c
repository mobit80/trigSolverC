/* My library */
#include<stdio.h>
#include<math.h>


FILE *OutFile;


void sphere(float radius)
{
	OutFile = fopen("lab3out.txt", "a");

	float pi, surface, volume;
	pi = M_PI;
	surface = 4.0*pi*(radius*radius);
	volume = (4.0/3.0)*pi*(radius*radius*radius);
	fprintf(OutFile, "Surface area: %8.3f cm^2 \n", surface);
	fprintf(OutFile, "Sphere volume: %8.3f cm^3 \n", volume);

	fclose(OutFile);
}

float volCylinder(float radius, float height)
{
	OutFile = fopen("lab3out.txt", "a");

	float pi, volume;
	pi = M_PI;
	volume = pi*(radius*radius)*height;
	fprintf(OutFile, "Cylinder volume: %8.3f ft^3 \n", volume);
	
	fclose(OutFile);
}

float sumFloats(float x[], int numFloats)
{
	OutFile = fopen("lab3out.txt", "a");

	float sum =0.0;
	float sortSum =0.0;

	for (int i = 0; i < (numFloats-1); i++)
	{
		sum += x[i];
	}
	
	fprintf(OutFile, "Sum of floats: %8.8f \n", sum);

	for (int j = 0; j < (numFloats-1); j++)
	{
		float temp;
		int *pt;
		int k;
		pt = &j;
		k = j + 1;
		while (k < numFloats)
		{
			if (x[j] > x[k])
			{
				*pt = k;
			}
			k += 1;
		}
		temp = x[j];
		x[j] = x[*pt];
		x[*pt] = temp;
	}
	
	for ( int i = 0; i < (numFloats-1); i++)
	{
		sortSum += x[i];
	}
	fprintf(OutFile, "Sum of floats, sorted: %8.11f \n", sortSum);
	
	fprintf(OutFile, "The answers to these two sums should be different due to the point at which rounding begins within the number changing. \n");

	fclose(OutFile);

}

double sine(float angle)
{
	OutFile = fopen("lab3out.txt", "a");

	float power, factorial, total, x, pi;
	x = angle;
	pi = M_PI;
	x = (pi*x)/180.0;
	
	total=0.0;
	for (int i=0; i<20; i++)
	{
		factorial = 1.0;
		power = 1.0;
		for (int j= 1; j<= 2*i+1; j++)
		{
			factorial = factorial * j;
			power *= x;
		}
		total += ((i%2?-1.0:1.0)/factorial)*power;	
	}
	fprintf(OutFile, "sin(%8.3f) = %8.3frad\n", x, total);

	fclose(OutFile);
}


























