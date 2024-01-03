//Declare 4 variables: two of type int and two of type float.
//Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
//Use the + and - operator to perform the following operations:
//Print the sum and difference of two int variable on a new line.
//Print the sum and difference of two float variable rounded to one decimal place on a new line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    int sumab = a + b;
    int diffab = a - b;
    float sumcd = c + d;
    float diffcd = c - d;

    printf("%d %d\n", sumab, diffab);
    printf("%0.1f %0.1f", sumcd, diffcd);
    
    return 0;
}