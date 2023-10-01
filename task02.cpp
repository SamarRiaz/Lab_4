#include<iostream>
void tf(std::string a);
using namespace std;
main(){
string a;
cout<<"Enter 'true' or 'false':";
cin>>a;
tf(a);
}
void tf(std::string a)
{
if(a=="true")
cout<<"false";
if(a=="false")
cout<<"true";
}

