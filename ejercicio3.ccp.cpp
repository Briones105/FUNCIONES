#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
using std::string;
int max(int a, int b);
int main()
{
	int N1,N2,N3;
	cout<<"intoduzca el primer valor:";
	cin>>N1;
	cout<<"intoduzca el segundo valor:";
	cin>>N2;
	cout<<"intoduzca el tercer valor:";
	cin>>N3;
	int max1=max(N1,N2); // En su lugar podemos yamar a la funcion 2 veses int max=max(max(NI,N2),N3); y de esta forma no se consume tantas lineas
	int max2=max(max1,N3);
	cout<<"El numero mayor es: "<<max2<<std::endl;
}
int max(int a, int b)
{
	int c;
	if(a>b){c=a;}
	else{c=b;}
	return c;
}
