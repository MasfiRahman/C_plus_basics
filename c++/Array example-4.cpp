#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int marks[5];

//input loop
for(int i=0;i<5;i++){
     cin>>marks[i];
}

//output loop
cout<<"Marks are : ";
for(int i=0;i<5;i++){
    cout<<marks[i]<<" ";
}

getch();
}
