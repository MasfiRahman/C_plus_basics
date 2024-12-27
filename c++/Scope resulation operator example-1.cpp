#include<iostream>
#include<conio.h>
using namespace std;

int x = 10;//Global variable
void display(){

  cout<<"Inside calling the display function x = "<<x<<endl;

}
 int main (){
// int x = 10 //Local variable
 cout<<"Inside calling the main function x = "<<x<<endl;
 display();

 getch();
 }
