#include<iostream>
using namespace std;

int main()
{
  int n,m;
  cout<<"Enter the value of m :"<<endl;
  cin>>m;
  cout<<"Enter the value of n :"<<endl;
  cin>>n;
  int temp = m;
  m=n;
  n=temp;
  cout<<"Swapping is done!"<<endl;
  cout<<"New value of m is = "<<m<<endl;
  cout<<"New value of n is = "<<n<<endl;
}
