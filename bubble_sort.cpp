#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{  int n;
cout<<"enter number of elements do you want to sort by bubble sort"<<endl;
cin>>n;
   int num[n];
   cout<<"enter "<<n<<" elements to sort"<<endl;
   for(int l=0;l<n;l++)
   {
   	cin>>num[l];
   }
   for(int i=0;i<n-1;i++)
   {
   	 for(int j=0;j<n;j++)
   	 {
   	 	if(num[j+1]<num[j])
   	 	{
   	 		int a=num[j+1];
   	 		num[j+1]=num[j];
   	 		num[j]=a;
   	 		a=0;
			}
		}
   }
   cout<<"sorted list be: "<<endl;
for(int k=0;k<n;k++)
{
	cout<<num[k]<<" ";
}
getch();
	return 0;
}
