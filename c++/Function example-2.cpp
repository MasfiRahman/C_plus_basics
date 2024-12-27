#include<iostream>
#include<conio.h>
using namespace std;
void addition(int a,int b)
{
    int sum = a + b;
    cout<<sum<<endl;
}void subtraction(int a,int b)
{
    int sub = a - b;
    cout<<sub<<endl;
}void multiplication(int a,int b)
{
    int mul = a * b;
    cout<<mul<<endl;
}void division(int a,int b)
{
    float div = (float)a / b;
    cout<<div<<endl;
}

int main(){

addition(30,40);
subtraction(10,20);
multiplication(30,90);
division(1,2);
cout<<"All function have called";
getch();
}
