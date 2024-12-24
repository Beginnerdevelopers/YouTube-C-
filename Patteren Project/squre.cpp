#include <stdio.h>
#include <iostream>
using namespace std;
int main (){
int userInput;
cout<<"Enter your Row ";
cin>>userInput;
    for (int i = 0; i < userInput; i++) //row
    {
        // int a=1;
        cout<<"\n";
      for(int j=1; j<= 2* i -1 ; j+=2){
        cout<<j;
      }
       
    }
    
}