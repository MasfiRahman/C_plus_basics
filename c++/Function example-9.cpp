#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    while(1){

    int guessNumber,randomNumber;
    cout<<"Enter your Guess Number 1 to 5: ";
    cin>>guessNumber;
   randomNumber=rand()%5+1;
   if(guessNumber==randomNumber){
    cout<<"You have Won"<<endl<<endl;
   }else{
    cout<<"You have lost! Try again"<<endl;
    cout<<"Random Number :"<<randomNumber<<endl<<endl;
   }
 getch();
    }
}
