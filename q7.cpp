#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	float a,b,*p,*q;
	 int choice,rem;
 	float result;
 	cout<<"enter two operands"<<endl;
 	cin>>a>>b;
 	p=&a;
 	q=&b;
 	cout<<"enter operation do you want to perform"<<endl;
 	cout<<"1.Addition \n 2.substraction \n 3.division \n 4.multiplacation \n 5.remainder"<<endl;
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 			{
 				result=*p+*q;
 				cout<<"addition of given numbers be :"<<result<<endl;
 				break;
			 }
			 case 2:
			 	{
			 		result=(*p)-(*q);
			 		cout<<"substraction of given numbers be :"<<result<<endl;
			 		break;
				 }
				 case 3:
				 	{
				 		result=(float)(*p)/(*q);
				 		cout<<"division of given numbers be :"<<result<<endl;
				 		break;
					 }
					  case 4:
			 	{
			 		result=(*p)*(*q);
			 		cout<<"multiplacation of given numbers be :"<<result<<endl;
			 		break;
				 }
				 case 5:
				 	{
				 		int c,d;
				 		c=*p;
				 		d=*q;
				 		rem=(c)%(d);
				 		cout<<"remainder after division of given numbers be :"<<rem<<endl;
				 		break;
					 }
					 default:
					 	cout<<"invalid operator"<<endl;
	 }
 	getch();
	return 0;
}
