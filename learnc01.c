/*
 * Prompt user for the length and width of a rectangle and compute its area 
 * (areaOfARectangle.c)
 */
#include <stdio.h>
 
int main() {
   double length, width, area; // Declare 3 floating-point variables
   printf ("Edited");
 
   printf("This program will compute the area of your rectangle"); //program message
   printf("\n"); //new line space

   printf("Enter the length of your rectangle: ");  // Prompting message
   scanf("%lf", &length);         // Read input into variable length

   printf("Enter the width of your rectangle: ");  // Prompting message
   scanf("%lf", &width);         // Read input into variable length

   // Compute area
   area =  length * width;
 
   // Print the results
   printf("The area of your rectangle is %lf.\n", area);
 
   return 0;
}
