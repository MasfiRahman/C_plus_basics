#include<iostream>
#include<conio.h>
using namespace std;
int main(){

double cels,faren;
cout<<"Enter Fahrenheit Number :";
cin>>faren;

cels = (faren - 32)/1.8;
cout<<"Celcius :"<<cels;
getch();
}

