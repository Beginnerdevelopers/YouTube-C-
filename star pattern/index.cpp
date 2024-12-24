#include <stdio.h>
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your row";
    cin>>n;
    int mid = (n/2) + 1;
    for (int i = 0; i <= n; i++)
    {
        cout<<"\n";
          for (int j = 1; j <= n; j++){
            if(i==mid || j==mid ) cout<<"*";
            else cout<<"#";

          }
    }
    
}