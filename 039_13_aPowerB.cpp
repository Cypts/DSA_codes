#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}
int main()
{
    int a=3,b=5;
    cout<<power(a,b);
}
