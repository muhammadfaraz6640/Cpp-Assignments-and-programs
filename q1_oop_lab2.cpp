#include <iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
 {
 	int x1,y1,x2,y2;
 	float distance;
 	int sq;
 	char *ptr;
 	char a,b,c;
 	ptr=&a;
 	cout<<"enter coordinates-xy for 1st point of line segment"<<endl;
 	cin>>a>>x1>>b>>y1>>c;
 	cout<<"enter coordinates-xy for 2nd point of line segment"<<endl;
 	cin>>a>>x2>>b>>y2>>c;
 	sq=pow(x2-x1,2)+pow(y2-y1,2);
 	distance=sqrt(sq);
 	cout<<"distance between points "<<a<<x1<<b<<y1<<c<<"and "<<a<<x2<<b<<y2<<c<<"is: "<<endl<<distance;
 	malloc(a);
 	free(ptr);
 	cout<<a;
	getch();
	return 0;
}
