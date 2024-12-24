#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int num ;
    cout<<"Enter your Number";
    cin>>num;
    if(num % 5 ==0 && num % 3 ==0){
        cout<<"you number is divided by 5, and 3 ";
    }
    else{
        cout<<"your number is not divied by 5, and 3";
    }
}