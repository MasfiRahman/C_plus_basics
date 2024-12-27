#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int digit;
cout<<"Enter Digit Number : ";
cin>>digit;
switch(digit){
    case 0:
         cout<<"Zero";
         break;
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    default :
        cout<<"Not a digit number";
}
getch();
}
