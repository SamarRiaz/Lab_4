# include <iostream>
void flowerShop(int redRose, int whiteRose, int tulip);
using namespace std;
main ()
{
int rose;
int w_rose;
int tuli;
cout<<"Red Rose: ";
cin>>rose;
cout<<"White Rose: ";
cin>>w_rose;
cout<<"Tulips: ";
cin>>tuli;
flowerShop(rose,w_rose,tuli);
}
void flowerShop(int rose, int w_rose, int tuli)
{
float r_price;
float w_price;
float t_price;
float total;
float disc;
float f_price;
r_price=2.00*rose;
w_price=4.10*w_rose;
t_price=2.50*tuli;
total=r_price+w_price+t_price;
if(total>200)
{
disc=(total/100)*20;
f_price=total-disc;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<f_price;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}