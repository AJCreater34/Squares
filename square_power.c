// C program to implement
// the above approach
#include <math.h>
#include <stdio.h>
#include <cs50.h>

// Driver code
int main()
{
	double base, power, result;
	base = get_int("Base: ");
	power = get_int("Power: ");

	// Calculate the result
	result = pow(base, power);
	printf("%.1lf^%.1lf = %.2lf",
		base, power, result);
	return 0;
}


