#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
    int rupee,a,b,hour,minute;
    cout<<"enter time";
    cin>>rupee;
    hour=rupee/3600;
    a=rupee%3600;
    minute=a/60;
    b=rupee%60;
    cout<<"hours :"<<hour<<endl;
    cout<<"minutes :"<<minute<<endl;
    cout<<"seconds :"<<b<<endl;
    getch();
	return 0;
}
