#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,sum=0;;
cout<<"Enter number of Students: ";
cin>>n;
int students[n];
for(int i=0;i<n;i++){
    cout<<"Marks for Student : "<<i+1<<" = ";
    cin>>students[i];
    sum=sum+students[i];
}
cout<<"Total Marks : "<<sum<<endl;
float avg = (float)sum/n;
cout<<"Average : "<<avg<<endl;

//maximum & minimum
int max = students[0];
int min = students[0];
for(int i=1;i<n;i++){
    if(max<students[i]){
        max=students[i];
    }
    if(min>students[i]){
        min=students[i];
    }
}
cout<<"Maximum Mark : "<<max<<endl;
cout<<"Minimum Mark : "<<min<<endl;
getch();
}
