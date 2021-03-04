#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
using std::string;
void max(int a, int b);
int main()
{
	int N1,N2;
	cout<<"introdusca el primer numero:";
	cin>>N1;
	cout<<"introdusca el segundo numero:";
	cin>>N2;
	max(N1,N2);
}
void max(int a,int b)
{
	if (a>b)
	{
		cout<<"el numero  mayor es: \n"<<a;
	}
	else if (a<b)
	{
		cout<<"el numero mayor es: \n"<<b;
	}
	else 
	cout<<"Error\n";
}

