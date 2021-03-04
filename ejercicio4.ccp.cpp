#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
using std::string;
void max(int a, int b);
int factorial(int a);
int main()
{
	int N1;
	cout<<"Introduzca el valor del numero:";
	cin>>N1;
	int fact=factorial(N1);
	cout<<"El es:"<<fact;
	return 0;
}
int factorial(int a)
{
	int i;
	int resultado=1;
	for(i=1; i<=a; i++)
	{
		resultado*=i;
	}
	return resultado;
}
