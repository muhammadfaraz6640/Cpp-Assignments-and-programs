#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	int m;
 	cout<<"enter number of elements "<<endl;
 	cin>>m;
	 int a[m],loc1;
 	for(int i=0;i<m;i++)
 	{
 		cin>>a[i];
	 }
	int max1=a[0];
	for(int j=1;j<m;j++)
	{
		if(max1<a[j])
		{  
		max1=a[j];
		loc1=j;	
		}
   }
   int max2=a[0];
   if(max1==a[0])
   	{
   		max2=a[0+1];
	   }
   int loc2;
   for(int k=1;k<m;k++)
   { 
   	if(max2<a[k]&&a[k]<max1)
   	{
   		max2=a[k];
	   }
   }
	cout<<"max1 is "<<max1<<" location is "<<loc1<<endl;
	cout<<"max2 is "<<max2;
		return 0;
}
