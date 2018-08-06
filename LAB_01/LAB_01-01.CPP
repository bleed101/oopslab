#include<iostream>
using namespace std;

void week(int *a,int *c)
{
int b;
b=*a%*c;
if(b==0)
cout<<*a<<endl;
else
cout<<*a+*c-b<<endl;
}
int main()
{
int i,j;
printf("Enter the value of i and j");
scanf("%d%d",&i,&j);
week(&i,&j);
return 0;
}

