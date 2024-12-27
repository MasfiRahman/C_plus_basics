#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){

string str1="Mashfi";
string str2="Rahman";
string str3;

str3=str1;
cout << "Str3 : "<<str3<<endl;

str3=str1+str2;
cout << "Str3= "<<str3<<endl;

int len = str1.size();
cout << "Length of Str1 : "<<len<<endl;

getch();
}
