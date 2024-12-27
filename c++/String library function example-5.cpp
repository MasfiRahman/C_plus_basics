#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){

char name1 [] = "Mashrur";
char name2 [] = "mashrur";

int value = strcmp(name1,name2);

if(value==0){
    cout << "String is equal";
}else{
    cout << "String is not equal";
}

getch();
}
