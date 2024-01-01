//This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. 
//Example:
//s = "Life is beautiful"
//The required output is:
//Hello, World!
//Life is beautiful

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World! /n %s", s);   
    return 0;
}
