
#include <iostream>

using namespace std;
class Matrix
{
  int arr[2];
  public:
  void get_array()
  {
      for(int i=0;i<4;i++)
      {
              cin>>arr[i];
      }
  }
  void display()
  {
     for(int i=0;i<4;i++)
      {
              cout<<arr[i]<<" ";
      } 
  }
};

int main()
{

    Matrix obj;
    cout<<"enter 4 values of array: ";
    obj.get_array();
    cout<<"array entered is: ";
    obj.display();
    return 0;
}