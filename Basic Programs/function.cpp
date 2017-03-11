#include<iostream>
using namespace std;

int function(int x,int y)
{
  int sum = x+y;
  cout<<"sum = "<<sum<<endl;
  int diff = x-y;
  cout<<"Difference = "<<diff<<endl;
  int mul = x*y;
  cout<<"Multipication = "<<mul<<endl;
  int div = x/y;
  cout<<"Division = "<<div<<endl;
}
int main()
{
  int n,m;
  cout<<"Enter number 1:"<<endl;
  cin>>n;
  cout<<"Enter number 2:"<<endl;
  cin>>m;
  function(n,m);
  return 0 ;
}
