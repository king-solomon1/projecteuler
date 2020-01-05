#include<iostream>
#define MAX 4000000
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int t1=1,t2=2,sum,se=2;
    while(1)
    {
        sum=t1+t2;
        if(sum>=MAX)
            break;
        if(sum%2==0)
            se+=sum;
        t1=t2;
        t2=sum;
    }
    cout<<"sum of even terms of fibonacci are "<<se;

}
