#include<iostream>
#include<stdio.h>
using namespace std;

int main (){
    double USD=300; //300rupes equal to one dollar
    double INR=3;//3rupes equal to one INR
    double DR=700;//700rupes equal to one DR

    while (true)
    {
       cout<<"Enter Your Conversoin \n";
       cout<<"1.USD to Rupes \n";
       cout<<"2.Rupes To Dollars \n";
       cout<<"3.INR To Rupes \n";
       cout<<"4.Rupes To INR \n";
        cout<<"5.DR To Rupes \n";
       cout<<"6.Rupes To DR \n";
       int userChoice;
       cin>>userChoice;
       cout<<"Enter Your Payment \n";
       double payment;
       cin>>payment;
       switch (userChoice){
        case 1:
        cout<<"USD to Rupes "<<payment*USD<<endl;
        break;
        case 2:
        cout<<"Rupes to USD "<<payment/USD<<endl;
        break;
        case 3:
        cout<<"INR to Rupes "<<payment*INR<<endl;
        break;
        case 4:
        cout<<" Rupes to INR "<<payment/INR<<endl;
        break;
         case 5:
        cout<<" DR to Rupes "<<payment*DR<<endl;
        break;
         case 6:
        cout<<" Rupes to DR "<<payment/DR<<endl;
        break;
        default:
       break;
       }
    }
    
}