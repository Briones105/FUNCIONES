#include<iostream>
#include<string.h>
#include<math.h>
using std::cout;
using std::cin;
using std::string;
void circulo();

int main()
{
	cout<<"Programa que calcula el area de un circulo\n";
	circulo();
}
void circulo()
{
float radio,Area;
#define PI 3.1416
cout<<"Indique el valor del radio del circulo: ";
cin>>radio;
Area=PI*(pow(radio, 2));
cout<<"\n\nEl area de un circulo de radio"<< Area<<std::endl;
}
