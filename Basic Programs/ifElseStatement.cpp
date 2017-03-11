#include<iostream>
using namespace std;

int main()
{
  int age;
  cout<<"Enter an age :"<<endl;
  cin>>age;
  if(age>0 && age<=12)
  {
    cout<<"Child"<<endl;
  }
  else if(age>12 && age<=19)
  {
    cout<<"Teenager"<<endl;
  }
  else
  cout<<"Adult"<<endl;
  return 0;
}
