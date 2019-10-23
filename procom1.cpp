#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
 {  
    int n,p,p_m;
    long h;
 	cout<<"enter number of criminals"<<endl;
 	cin>>n;
 	if(n>=0&&n<2000000)
 	{ 
 	cout<<"enter money for one police officer"<<endl;
 	cin>>h;
 	cout<<"enter number of police officers"<<endl;
 	cin>>p;
 	p_m=h*p;
 	if(h>=0&&h<=10000000)
 	{
 		int x,x1[n];
 	cout<<"enter position of starting"<<endl;
 	cin>>x;
 	cout<<"enter position of 1st criminal"<<endl;
 	cin>>x1[0];
 	int j=0;
 	int fuel=sqrt(pow(x1[0]-x,2));
	  	for(int i=1;i<n;i++)
	 {
	 	cout<<"enter position of "<<i+1<<"criminal"<<endl;
	 	cin>>x1[i+1];
	 	float d=pow(x1[i+1]-x1[j],2);
	 	fuel=fuel+sqrt(d);
	 	d=0;
	 	j++;
	 }
	 float price=p_m+fuel;
	 cout<<"price of operation will be "<<endl<<price;
 	}
	 else
	 {
	 	cout<<"invalid"<<endl;
	 }
 }
 	else
 	{
 	cout<<"invalid"<<endl;
	}
	return 0;
	
}
