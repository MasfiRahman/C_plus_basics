#include<iostream>
#include<conio.h>
using namespace std;
int main(){
float sum=0,i,n;
cout<<"Enter the last number : ";
cin>>n;
for(i=1.5;i<=n;i=i+1){
    sum=sum+i;
    cout<<i<<endl;
}
cout<<"Sum of n : "<<sum;
getch();
}
