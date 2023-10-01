# include <iostream>
void time (int a, int b);
using namespace std;
main ()
{
int b;
int a;
cout<<"Enter the number of hours: ";
cin>>a;
cout<<"Enter the number of minutes: ";
cin>>b;
time (a,b);
}
void time (int a, int b)
{
int convert;
convert=a*60;
if(convert<b)
cout<<b;
if (convert>b)

cout<<a;
}