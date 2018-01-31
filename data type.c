#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.
    int n1,sum1;
    double n2,sum2;
    char s1[100];
    // Read and save an integer, double, and String to your variables.
   printf("Enter int");
    scanf("%d",&n1);

    printf("\n\nEnter double");
    scanf("%lf",&n2);

    printf("Enter string");
    fgets(s1);   
    printf("%s",s1);
    // Print the sum of both integer variables on a new line.
    sum1=n1+i;
    printf("\nsum  %d",sum1);
    
    // Print the sum of the double variables on a new line.
    sum2=n2+d;
    printf("\nsum2  %lf",sum2);
    /*/ Concatenate and print the String variables on a new line
	//while(s1!='\0')
	//{l++;
	//}
	
    // The 's' variable above should be printed first.
 */
 return 0;
}
