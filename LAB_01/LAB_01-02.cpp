#include<iostream>
using namespace std;
int count(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        s++;
    }
    return s;
}
int main()
{

    int p,c;
    cout<<"enter a number";
    cin>>p;
    c=count(p);
    cout<<"number of digits : "<<c;
    return 0;
}
