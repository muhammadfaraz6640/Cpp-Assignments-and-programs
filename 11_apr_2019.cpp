#include<iostream>
#include<conio.h>
using namespace std;
class person{
	protected:
	string name;
	string gender;
	int age;
	public:
		person()
		{
			gender='NULL';
			name='NULL';
			age=0;
		}
		person(int a,string str1,string str2)
		{
			gender=str1;
			name=str2;
			age=a;
		}
		virtual void eat()
		{
			cout<<"i am a parent and i am eating apple"<<endl;
		}
		virtual void walk()
		{
			cout<<"i am a parent and i am walking"<<endl;
		}
};
class student:public person{
	protected:
		int roll;
		double gpa;
	public:
		student()
		{
		} 
		student(int a,string str1,string str2,int r,double g):person(n,str1,str2){
			cout<<"gender is "<<str1<<endl<<"name is "<<str2<<endl<<"age is "<<a<<endl<<"roll number is "<<r<<endl<<"gpa is "<<g<<endl; 
		}
		
};
int main()
 {
 	
	return 0;
}
