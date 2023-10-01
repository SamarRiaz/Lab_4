# include <iostream>
void bonus(int a, int b);
using namespace std;
main ()
{
int a;
int b;

cout<<"Enter your position: ";
cin>>a;
cout<<"Enter your friend's position: ";
cin>>b;
bonus (a,b);
}
void bonus(int a, int b)
{
if (b-a>6)
cout<<"false";
if (b-a<=6)
cout<<"true";
}