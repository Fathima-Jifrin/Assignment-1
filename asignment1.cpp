#include<iostream>
using namespace std;
int main() 
{
  //assignment operator
  cout<<"ASSIGNMENT OPERATOR"<<endl;
  int a=5;
  cout<<a<<endl;
  a+=3;
  cout<<a<<endl;
  a/=2;
  cout<<a<<endl;
  a*=3;
  cout<<a<<endl;
  a%=5;
  cout<<a<<endl;

  //comparison operator
  cout<<"COMPARISON OPERATOR"<<endl;
  int p=10;
  int q=5;
  cout<<"equal to:"<<(p==q)<<endl;
  cout<<"not equal to:"<<(p!=q)<<endl;
  cout<<"greater than:"<<(p>q)<<endl;
  cout<<"less than:"<<(p<q)<<endl;
  cout<<"greater than equal to:"<<(p>=q)<<endl;

  //logical operator
  cout<<"LOGICAL OPERATOR"<<endl;
  int x=8,y=3;
  cout<<"logical and :"<<((x+y>5)&&(x-y>5))<<endl;
  cout<<"logical or :"<<((x+y>5)||(x-y>5))<<endl;
  cout<<"logical not :"<<!((x+y>5)||(x-y>5))<<endl;
}