#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int marks[5];


for(int i=0;i<5;i++){
    cout<<"Marks for student "<<i<<" = ";
     cin>>marks[i];
}

cout<<"Marks are : ";
for(int i=0;i<5;i++){
    cout<<marks[i]<<" ";
}

getch();
}
