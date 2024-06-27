// C program to implement
// the above approach
#include <math.h>
#include <stdio.h>
#include <cs50.h>

// Driver code
int main()
{

  double number, squareRoot;

	number = get_int("number: ");

	// Computing the square root
	squareRoot = sqrt(number);

	printf("Square root of %.2lf = %.2lf\n", number, squareRoot);
	return 0;
}
