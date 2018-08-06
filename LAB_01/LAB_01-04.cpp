#include<iostream>
using namespace std;
class factorial
{
public:
    int fact(int n)
    {

        if (n>=1)
        {
            return n*fact(n-1);
        }
        else
        {
            return 1;
        }
    }
};
int main ()

{
    factorial a;
     int n ;
        cout<<"enter a number : "<<endl;
        cin>>n;
    cout<<"factorial = "<<a.fact(n)<<endl;
    return 0;
}

