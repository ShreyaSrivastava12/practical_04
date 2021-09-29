#include<iostream>
using namespace std;
namespace first
{
int add (int x,int y)
{
cout<<x+y<<"\n" ;
}
}
namespace second
{
float add(float a,float b)
{
cout<< a+b<<"\n";
}
}
int main()
{
first::add(1,2);
second::add(1.2,2);
second::add(1,2.1);
second::add(1.1,2.1);
first::add(0,0);
return 0;
}
