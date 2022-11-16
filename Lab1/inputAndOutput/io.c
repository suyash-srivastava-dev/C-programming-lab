#include <stdio.h>
 
int main()
{
 
   // Declaring the variables
   int number;
   char character;
   float float_number;
 
   // --- Integer ---
 
   // Taking input for integer 
   printf("Enter the integer: ");
   scanf("%d", &number);
 
   // Printing Output of integer
   printf("\nEntered integer is: %d", number);
   
 
   // --- Float ---
 
   // Taking input of float
   printf("\nEnter the float: ");
   scanf("%f", &float_number);
 
   // Printing Output of float
   
   printf("\nEntered float is: %f", float_number);
 
   // --- Character ---
 
   // Taking input of Character
   printf("\n\nEnter the Character: ");
   scanf("%s", &character);
 
   // Printing Output of Character
   printf("\nEntered Character is: %c\n", character);
 
   return 0;
}
