#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout << "enter a two digit number"<<endl;
	cin >> a;
	int b = a % 10;
	int c = a / 10;
	char chunit = b;
	char chten = c;
	int valueunit = chunit-0;
	int valueten = chten - 0;
	int m = (valueten * 10) + valueunit;
	cout <<"numeric value is :"<< m << endl;
	char k='0';
	cout<<k;
	return 0;
}

