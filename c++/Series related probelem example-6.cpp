#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int sum=0,i,n;
cout<<"Enter the last number : ";
cin>>n;
for(i=1;i<=n;i=i+1){
    sum=sum+i*i;
    cout<<i<<endl;
}
cout<<"Sum of n : "<<sum;
getch();
}

