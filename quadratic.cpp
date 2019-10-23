#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
 {
 	int a,b,c;
 	float x1,x2,d;
 	cout<<"enter a value of 'a' in quadratic equation"<<endl;
 	cin>>a;
 	cout<<"enter a vlaue of 'b' in quadratic equation"<<endl;
 	cin>>b;
 	cout<<"enter a value of 'c' in quadratc equation"<<endl;
 	cin>>c;
 	d=(b*b)-(4*a*c);
 	if(d<0)
 	cout<<"the equation has no real roots";
 	else
 	{
 	x1=(-b+sqrt(d))/(2*a);
 	x2=(-b-sqrt(d))/(2*a);
 	cout<<"roots of equation are"<<endl<<x1<<endl<<x2;
 }
 	getch();
	return 0;
}
