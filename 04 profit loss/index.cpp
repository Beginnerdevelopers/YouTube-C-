#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int cp ;
    cout<<" Enter your Cost Price";
    cin>>cp;
    int sp;
    cout<<" Enter your Lost Price";
cin>> sp;
if(sp>cp){
    cout<<"congratulation you got profit";
}
else if(sp< cp){
    cout<<" you got Loss";

}
else{
    cout<<"No profit No loss";
}
}