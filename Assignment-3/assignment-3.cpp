#include<iostream>
using namespace std;
class evnodd
{private:
    int x;
    public:
evnodd(int a)
{
x=a;
}
void A()
{
if(x%2==0)
{
cout<<"even";
}
else
{
    cout<<"odd";
}
}
};

int main()
{
    int a;
    cout<<"enter the no you want to compare"<<endl;
    cin>>a;
    evnodd obj(a);
obj.A();
return 0;
 }
