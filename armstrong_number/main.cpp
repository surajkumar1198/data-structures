#include<iostream>
using namespace std;
int main()
{
    int Number,Remainder,Sum=0,Temp;
    for(Number=0;Number<=500;Number++)
    { Sum=0;
    Temp=Number;
    while(Temp)
    {
        Remainder=Temp%10;
        Sum=Sum+Remainder*Remainder*Remainder;
        Temp=Temp/10;

    }
    if(Sum==Number)
    {
        cout<<Number<<" is an armstrong number\n" ;
    }

}}
