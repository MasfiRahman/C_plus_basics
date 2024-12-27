#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int A[3][4] = {
                {3,4,5,6},
                {10,11,12,13},
                {14,15,16,17}
              };
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
       cout<<A[i][j]<<" ";
    }
cout<<endl;
}
getch();
}
