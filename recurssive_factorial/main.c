//Factorial using recursion

#include<stdio.h>
#include<time.h>

int factorial(int);
int main()
{
   int num, fact;
   clock_t start, end;
	float cpu_time_used;
	start=clock();

   printf("Enter a number:");
   scanf("%d",&num);

   fact =factorial(num);
   printf("\nfactorial of %d is: %d",num, fact);

   end=clock();
	printf("\nTime taken = %1f",cpu_time_used=((double) (end - start)) /CLOCKS_PER_SEC);
}
int factorial(int n)
{

   if(n==0)
      return(1);

   return(n*factorial(n-1));
}
