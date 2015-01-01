// Triangle.cpp : Defines the entry point for the console application.
//
	`11
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

/*  dist.c: distance between 2 points            */
/*                                               */
/*  This program computes the                    */
/*  distance between two points.                 */

#include <stdio.h>
#include <math.h>


int main() {
	/*  Declare variables.  */
	double x1, y1, x2, y2, x3, y3;
	double a, b, c;
	double A, B, C;

	/*  Initialize variables.  */
	x1 = 1; y1 = 5;
	x2 = 4; y2 = 7;
	x3 = 5; y3 = 3; 

	/*  Compute distance.  */
	a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));

	/*  Print distance.  */
	printf("Distance between points 2 and 1: %8.4f\n", a);
	printf("Distance between points 3 and 2: %8.4f\n", b);
	printf("Distance between points 3 and 1: %8.4f\n", c);

	/* Compute/Print Angle */
	A = acos((b*b + c*c - a*a) / (2 * b*c));
	B = acos((a*a + b*b - c*c) / (2 * a*b));
	C = acos((a*a + c*c - b*b) / (2 * a*c));
	printf("Angle A: %8.4f\n", A);
	printf("Angle B: %8.4f\n", B);
	printf("Angle C: %8.4f\n", C);

	/* Angle Sums */
	printf("Angle Sum in Radians: %8.4f\n", A + B + C);
	printf("Angle Sum in Degrees: %8.4f\n", (A + B + C) * (180/(3.1415)));

}

