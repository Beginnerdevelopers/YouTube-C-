#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int number ;
    cout<<"Enter your number";
    cin>>number;
    if (number > 99 and number < 999){
        cout<<"Your number is 3 digit and you number is : "<<number<<endl;
    }
     else
     {
        cout<<"Your number is not 3 digit : "<<number;
     }
}