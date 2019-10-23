#include <iostream>
#include<conio.h>
using namespace std;
class person{
protected:
	string name;
	int age;
	string gender;
public:
	void setname(string n)
	{
		name=n;
	}
	void setgender(string g)
	{
		gender=g;
	}
	void setage(int a)
	{
		age=a;
	}
	void showdata()
	{
		cout<<"name : "<<name<<endl;
		cout<<"gender : "<<gender<<endl;
		cout<<"age : "<<age<<endl;
	}
};
class student:public person{
protected:
	string dept;
	double gpa;
	string semister;
public:
	void setdept(string d)
	{
		dept=d;
	}
	void setgpa(double g)
	{
		gpa=g;
	}
	void setsemister(string s)
	{
		semister =s;
	}
	void showdata()
	{
		person::showdata();
		cout<<"department : "<<dept<<endl;
		cout<<"gpa : "<<gpa<<endl;
		cout<<"semister : "<<semister<<endl;
	}
};
class graduate:public person,public student{
protected:
	string designation;
	string company;
	string degree_status;
public:
	void setdes(string g)
	{
		designation=g;
	}
	void setcompany(string c)
	{
		company=c;
	}
	void setdeg(string d)
	{
		degree_status=d;
	}
	void showdata()
	{		
		student::showdata();
		cout<<"designation : "<<designation<<endl;
		cout<<"comapny: "<<company<<endl;
		cout<<"degree status : "<<degree_status<<endl;
	}
};
int main() 
{
	graduate s1;
	cout<<"enter name of student "<<endl;
	string n;
	cin>>n;
	s1.setname(n);
    cout<<"enter gender of student "<<endl;
	string g;
	cin>>g;
	s1.setgender(g);
	cout<<"enter age of student "<<endl;
	double d;
	cin>>d;
	s1.setage(d);
	cout<<"enter gpa of student "<<endl;
	double gp;
	cin>>gp;
	s1.setgpa(gp);
	cout<<"enter semister of student "<<endl;
	string s;
	cin>>s;
	s1.setsemister(s);
	cout<<"enter department of student "<<endl;
	string dd;
	cin>>dd;
	s1.setdept(dd);
	cout<<"enter designation of student "<<endl;
	string des;
	cin>>des;
	s1.setdes(des);
	cout<<"enter company of student "<<endl;
	string com;
	cin>>com;
	s1.setcompany(com);
    cout<<"enter degree status of student "<<endl;
	string deg;
	cin>>deg;
	s1.setdeg(deg);
	s1.showdata();


	return 0;
}
