#include <iostream>
#include<conio.h>
using namespace std;
class webpage{
private:
	float width;
	float height;
public:
	webpage(float w,float h)
	{
		width=w;
		height=h;
	}
	void showdata()
	{
		cout<<"width of webpage : "<<width<<endl;
		cout<<"height of webpage : "<<height<<endl;
	}
};
class link{
private:
	 string name;
public:
	link(string n):name(n)
	{ }
	void showdata()
	{
		cout<<"name of link : "<<name<<endl;
	}
};
class website{
private:
	string name;
	webpage web;
	link l;
public:
	website(string n,webpage w,link link1):name(n),web(w),l(link1)
	{	}
	string getname()
	{
		return name;
	}
	void setname(string s)
	{
		name=s;
	}
	void showdata()
	{
		cout<<"name of website : "<<name<<endl;
		web.showdata();
		l.showdata();
	}
};
int main()
{
	webpage w1(12,14);
	link l2("ansar.faraz@neduet.edu.pk");
	website w2("ned university ",w1,l2);
	w2.showdata();
	return 0;
}
