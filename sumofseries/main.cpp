#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n,x,sum=0;
    int i;
    cout<<"\nEnter a number = ";
    cin>>n;
    x=n-1;
    for(i=1;i<=10;i++)
    {
       if(i%2==0)
        sum=(float)(sum-(pow(x,i)/(float)i));
       else
        sum=(float)(sum+(pow(x,i)/(float)i));
    }
    cout<<"\nsum of series = "<<sum;
}
