#include <iostream>
#include<conio.h>
using namespace std;
struct  part{
	float inches;
	float feets;
};
int main()
 {
 	part d1,d2,d3;
 	cout<<"enter value of inches for object 1"<<endl;
 	cin>>d1.inches;
 	cout<<"enter value of feets for object 1"<<endl;
 	cin>>d1.feets;
 	cout<<"enter inches for object 2"<<endl;
 	cin>>d2.inches;
 	d3.inches=d1.inches+d2.inches;
 	cout<<"enter value of feets for object 2"<<endl;
 	cin>>d2.feets;
 	d3.feets=0;
 	if(d3.inches>12)
 	{
 		d3.inches-=12;
 		d3.feets++;
	 }
 	cout<<"detais"
 	
 	cin>>d2.i
	return 0;
}
