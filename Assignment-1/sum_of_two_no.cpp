
//sum of two no using opps

#include<iostream>
using namespace std;
class sum
{private:
	int x,y,z;
	public:
	   sum(int a,int b)//constructor
		{
			x=a;
			y=b;
		}
		 void sumofno() //sum function
		{
			
			z=x+y;
		}
		void display()//display function
		{
			cout<<z;
		}
	
};
int main()
{int a,b;
cout<<"enter no to be added" ;
cin>>a>>b;
sum obj( a, b);

obj.sumofno();
obj.display();
return 0;

	 
}
