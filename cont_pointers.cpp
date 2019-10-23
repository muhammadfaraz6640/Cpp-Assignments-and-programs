#include <iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	const int a=8;
 	int *const ptr;
 	ptr=&a;
 	cout<<"value"<<*ptr;
	return 0;
}
