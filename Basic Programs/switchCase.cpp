#include<iostream>
using namespace std;

int main()
{
  char grade;
  cout<<"Enter the grade :"<<endl;
  cin>>grade;
  switch(grade)
  {
    case 'A': cout<<"Excellent"<<endl;
    break;
    case 'B': cout<<"Good"<<endl;
    break;
    case 'C': cout<<"Average"<<endl;
    break;
    case 'D': cout<<"Poor"<<endl;
    break;
    default:
    cout<<"Invalid!"<<endl;
  }
  return 0;
}
