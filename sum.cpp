#include<iostream>
using namespace std;
int sum(int,int=0);
int main()
{
 int a,b;
 cout<<"enter any two number:";
 cin>>a>>b;
 cout<<"sum = "<<sum(a,b);
 return 0;
 }
 int sum(int x, int y)
{
 return(x+y);
}
