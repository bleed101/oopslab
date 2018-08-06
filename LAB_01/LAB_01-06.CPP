#include<iostream>
using namespace std;
class s
{
public:
    int s[10],t[10];
    void copy(char *s,char *t)
    {
      while(*s)
      {
          s++;
      }
      while(*s++=*t++);
    }
};
int main()
{
    s f;
    char k[10],l[10];
    cout<<f.copy(*k,*l)<<endl;
    return 0;
}

