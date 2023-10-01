#include<iostream>
void Pakistan(float a,float b);
void Ireland(float a,float b);
void India(float a,float b);
void England(float a,float b);
void Canada(float a,float b);
using namespace std;
main(){
float a,b;
string c;
cout<<"Enter the country's name: ";
cin>>c;
cout<<"Enter the ticket price in dollars: $";
cin>>a;
if(c=="Pakistan")
Pakistan(a,b);
else if(c=="Ireland")
Ireland(a,b);
else if(c=="India")
India(a,b);
else if(c=="England")
England(a,b);
else
Canada(a,b);

}
void Pakistan(float a,float b)
{
b=a-a*0.05;
cout<<"Final ticket price after discount: $"<<b;
}
void Ireland(float a,float b)
{
b=a-a*0.1;
cout<<"Final ticket price after discount: $"<<b;
}
void India(float a,float b)
{
b=a-a*0.2;
cout<<"Final ticket price after discount: $"<<b;
}
void England(float a,float b)
{
b=a-a*0.3;
cout<<"Final ticket price after discount: $"<<b;
}
void Canada(float a,float b)
{
b=a-a*0.45;
cout<<"Final ticket price after discount: $"<<b;
}