#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	int k;
 	cout<<"enter number of elements"<<endl;
 	cin>>k;
	 int data[k];
	 for(int j=0;j<k;j++)
	 {
	 	cin>>data[j];
	 }
	 int temp_f=data[0],temp_s=data[1],a;
	 if(temp_f<temp_s)
	 {
	 	temp_f=a;
	 	temp_f=temp_s;   //swapping
	 	temp_s=a;
	 }
	for(int i=2;i<k;i++)
	{
		if(temp_f<data[i])
		{
			temp_s=temp_f;
			temp_f=data[i];
		}
				else if(temp_s<data[i])
		{
			temp_s=data[i];
		}
	 } 
	 cout<<"max is "<<temp_f<<endl;
	 cout<<"max2 is "<<temp_s;
	return 0;
}
