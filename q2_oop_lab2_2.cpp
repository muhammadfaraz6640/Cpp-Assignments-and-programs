#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main() 
{
	int sum=0;
	int m,n;
	cout<<"enter number of rows of 1st matrix"<<endl;
	cin>>m;
	cout<<"enter number of coloumns of 1st matrix"<<endl;
	cin>>n;
	int a,b;
	cout<<"enter number of rows of 2nd matrix"<<endl;
	cin>>a;
	cout<<"enter number of coloumns of 2nd matrix"<<endl;
	cin>>b;
	int d=m*b;
	int m1[m][n],m2[a][b],c[m][b];
	if(n!=a)
	{
		cout<<"matrices cannot be multiplied"<<endl;
	}
	else
	{
	cout<<"enter"<<m*n<<"values for 1st matrix";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m1[i][j];
		}
	}

	cout<<"enter"<<a*b<<"values for matrix 2";
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>m2[i][j];
		}
	}
	for(int i=0;i<m; i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<a;k++)
			{
			   sum=sum+m1[i][k]*m2[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	cout<<"multiplacation of given matrices be"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}
}
	return 0;
}
