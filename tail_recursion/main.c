#include<stdio.h>
#include<conio.h>
#include<time.h>
int recur(int n,int result)
{
   if(n==0||n==1)
        return result;
  else
        return (recur(n-1,n*result));
   }


  int main()
  {
      clock_t time;
      int n,fact;
      printf("\nEnter a number = ");
      scanf("%d",&n);
      time=clock();
      fact=recur(n,1);
      printf("\n Factorial  of %d = %d ",n,fact);
    time=clock()-time;
    printf("\nTime taken = %lf ",((double)(time))/CLOCKS_PER_SEC);
    return 0;
  }
