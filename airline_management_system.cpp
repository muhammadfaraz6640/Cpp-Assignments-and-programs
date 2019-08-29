 #include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
static void menu();
void displayseat(int [][7]);
void systemreset(int [][7]);
double firstclass(int [][7],int ,double);
double buisnessclass(int [][7],int ,double);
double economyclass(int [][7],int ,double);
int airplane[12][7];
int choice;
int u_fir=14;
int u_sec=35;
int u_thr=35;
const double eco_fair=35000,fir_fair=105000,b_fair=68000;
void knowfair(double ,double,double); 
int main()
 {
 	for(int i=0;i<12;i++)
     {
     	for(int j=0;j<7;j++)
     	{
     		airplane[i][j]=0;
		 }
	 }
 	while(choice!=7)
 	{
 	menu();
 }
	return 0;
}
static void menu()
{
	cout<<"\t\t\t\t WELCOME TO FARAZ INTERNATIONAL AIRLINE\t\t\t\t"<<endl;
	cout<<endl;
	cout<<"1.book first class seats "<<endl;
	cout<<"2.book buisiness class seats "<<endl;
	cout<<"3.book economy class seats "<<endl;
	cout<<"4.view seats available "<<endl;
	cout<<"5.know fair "<<endl;
	cout<<"6.system reset "<<endl;
	cout<<"7.exit from the booking system "<<endl;
	cout<<"enter your choice "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int seats;
				cout<<"enter number of seats do you want to reserve for first class compartment"<<endl;
				cin>>seats;
				if(seats>u_fir||seats<0)
				{
					cout<<"seats not available,please try for other compartment"<<endl;
				}
				else
				{
				  double rec=firstclass(airplane,seats,fir_fair);
				  cout<<"you have to pay the bill of "<<rec<<" rupees "<<endl<<"thank you for choosing us"<<endl;
				}
				break;
			}
		case 2:
			{
				int seats2;
				cout<<"enter number of seats do you want to reserve for buisiness class compartment"<<endl;
				cin>>seats2;
				if(seats2>u_sec||seats2<0)
				{
					cout<<"seats not available,please try for other compartment"<<endl;
				}
				else
				{
				  double rec2=buisnessclass(airplane,seats2,b_fair);
				  cout<<"you have to pay the bill of "<<rec2<<" rupees "<<endl<<"thank you for choosing us"<<endl;
			}
				break;
			}
		case 3:
			{
					int seats3;
				cout<<"enter number of seats do you want to reserve for economy class compartment"<<endl;
				cin>>seats3;
				if(seats3>u_thr||seats3<0)
				{
					cout<<"seats not available,please try for other compartment"<<endl;
				}
				else
				{
				  double rec3=economyclass(airplane,seats3,eco_fair);
				  cout<<"you have to pay the bill of "<<rec3<<" rupees "<<endl<<"thank you for choosing us"<<endl;
			}
				break;
			}
		case 4:
			{
			 displayseat(airplane);     	 
				break;
			}		
		case 5:
			{
				knowfair(fir_fair,b_fair,eco_fair);
				break;
			}
		case 6:
			{
				systemreset(airplane);
				break;
			}
		case 7:
			{
				break;
			}
		default:
			{
	    cout<<"invalid option"<<endl;
			}
	}
}
void displayseat(int a[][7])
{
			  for(int i=0;i<12;i++)
     {
     	for(int j=0;j<7;j++)
     	{
     		cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	    cout<<"press any key to continue"<<endl;
            getch();
}
void knowfair(double fc,double bc,double ec)
{
	cout<<"1.The fair of first class compartment is "<<fc<<endl;
	cout<<"2.The fair of buissness class is "<<bc<<endl;
	cout<<"3.The fair of economy class is "<<ec<<endl;
	cout<<"press any key to continue"<<endl;
	getch();
	
}
void systemreset(int b[][7])
{
  for(int i=0;i<12;i++)
     {
     	for(int j=0;j<7;j++)
     	{
     		b[i][j]=0;
		 }
	 }
	 u_fir=14;
	 u_sec=35;
	 u_thr=35;
	    cout<<"press any key to continue"<<endl;
            getch();	
}
double firstclass(int c[][7],int d,double price_one)
{
	double price1=price_one*d;
	u_fir=u_fir-d;
	int t=0;
	int p=7;
	for(int i=0;i<2;i++)
	{
		for(int h=0;h<7;h++)
		{
			if(c[i][h]==1)
			{
				t+=1;
			}
		}
	 } 
	 if(d<=7)
	 {
	 	for(int j=0;j<d+t;j++)
	 	{
	 		c[0][j]=1;
		 }
	 }
	 else
	 {
	 	for(int i=0;i<2;i++)
	 	{
	 	for(int k=0;k<p+t;k++)
	 	{
	 		c[i][k]=1;
	 	 }
		 p=d-7;
	 }
} 	  
	return price1;
}
double buisnessclass(int c[][7],int se,double price_two)
{
	double price2=price_two*se;
	u_sec=u_sec-se;
	int t2=0;
	int p=7;
	for(int i=2;i<7;i++)
	{
		for(int h=0;h<7;h++)
		{
			if(c[i][h]==1)
			{
				t2+=1;
			}
		}
	 } 

	 if(se<=7)
	 {
	 	for(int j=0;j<se+t2;j++)
	 	{
	 		c[2][j]=1;
		 }
	 }
	 else
	 {
	 	for(int i=2;i<4;i++)
	 	{
	 	for(int k=t2;k<p+t2;k++)
	 	{
	 		c[i][k]=1;
		 }
	  	 p=se-7; 
	 }
} 	 
	return price2;
}
double economyclass(int c[][7],int seat,double price_three)
{
	double price3=price_three*seat;
	u_thr=u_thr-seat;
	int t3=0;
	int p=7;
	for(int i=7;i<12;i++)
	{
		for(int h=0;h<7;h++)
		{
			if(c[i][h]==1)
			{
				t3+=1;
			}
		}
	 } 

	 if(seat<=7)
	 {
	 	for(int j=0;j<seat+t3;j++)
	 	{
	 		c[7][j]=1;
		 }
	 }
	 else
	 {
	 	for (int i=7;i<9;i++)
	 	{
	 	for(int k=t3;k<p+t3;k++)
	 	{
	 		c[i][k]=1;
		 }
	  	 p=seat-7; 
	 }
} 	  
	return price3;
}
