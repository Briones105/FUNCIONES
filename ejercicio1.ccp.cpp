#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
using std::string;
void suma(int a, int b);
int main()
{
	int N1,N2;
	cout<<"introduce el primer numero";
	cin>>N1;
	cout<<"introduce el segundo numero";
	cin>>N2;
	suma(N1,N2);
	return 0;
}
void suma(int a, int b)
{
	int c=a+b;
	cout<<"el resultado es"<<c;
}
