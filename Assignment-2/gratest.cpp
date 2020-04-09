//greatest in three no using opps

#include<iostream>
using namespace std;
class gratest
{private:
	int num1,num2,num3;
	public:
	void get(int a,int b,int c)
	{
	if(a>b&&a>c)
	{
		num1=a;
		if(b>c)
		{
			num2=b;
			num3=c;
		}
		else
		num2=c;
		num3=a;
	}
	else if(b>c)
	{
		num1=b;
		if(a>c)
		{
			num2=c;
			num3=a;
		}
		else
		num2=a;
		num3=b;
	}
	else

		num1=c;
		if(a>b)
		{
		num2=b;
		num3=c;
    	}
		else num2=b;
		num3=a;

}
	void display()
	{
		cout<<"greatest no is"<<num1;
	}

};
int main()
{
	int a,b,c;
	cout<<"enter the numbers you want to compare" ;
	cin>>a>>b>>c;
	gratest o;
	o.get(a,b,c);
	o.display();
	return 0;

}
