#include <iostream>
#include<conio.h>
using namespace std;
class rectangle{
protected:
	double length;
	double width;
public:
	rectangle(double a,double b)
	{
		length=a;
		width=b;
	}
	void setlength(double a)
	{
		length=a;
	}
	void setwidth(double b)
	{
		width=b;
	}
	double area()
	{
		double area=length*width;
		return area;
	}
	void show()
	{
		cout<<"area of dorm room : "<<area()<<endl;
	}
};
class dormroom:public rectangle{
protected:
	int numberofbeds;
	int numberofwindows;
	int numberoftables;
public:
	dormroom(int a,int b,int c):numberofbeds(a),numberofwindows(b),numberoftables(c)
	{
	}
	void showdata()
	{
		cout<<"\t\t\t Dorm-Room "<<endl;
		cout<<"number of beds in the dormroom be "<<numberofbeds<<endl;
		cout<<"number of windows in the dormroom be "<<numberofwindows<<endl;
		cout<<"number of tables in the dormroom be "<<numberoftables<<endl;
		show();
	}
};
int main()
{
	rectangle r1(1,2);
	r1.area();
	r1.show();
	return 0;
}
