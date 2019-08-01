#include<stdio.h>
#include<conio.h>
#include<time.h>
int Factorial(int n);
int main()
{
    clock_t time;
    int fact;
    int n;
    printf("\nEnter a number = ");
    scanf("%d",&n);
    time=clock();
    fact=Factorial(n);
    printf("\nFactorial of %d = %d ",n,fact);
    time=clock()-time;
    printf("\nTime taken = %lf",((double)time)/CLOCKS_PER_SEC);

}
   int Factorial(int n)
   {
       int k=1,i;
    for(i=1;i<=n;i++)
    {
        k=k*i;
    }
return k;
}
