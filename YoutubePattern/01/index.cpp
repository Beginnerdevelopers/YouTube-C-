#include<iostream>
#include<conio.h>
using namespace std;
 int main (){
    int n,m;
    for(n= 1 ; n<=5; n++ ){//rows
    cout<<endl;
    for(m=1 ; m<=5 ; m++){//cols
   if(n==1 || m==1 || n==5 || m==5) {
    cout<<"*";
   }
   else{
    cout<<" ";
   }
    
    }


    } 
 }