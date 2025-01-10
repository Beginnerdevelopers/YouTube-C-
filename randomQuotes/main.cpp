#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    const char* quotes[]={
   "The best way to predict the future is to create it.",
 "Success is not the key to happiness. Happiness is the key to success.",
 "Dont watch the clock; do what it does. Keep going.",
 "Your limitation—its only your imagination.",
 "Dream big and dare to fail.",
 "Hardships often prepare ordinary people for an extraordinary destiny.",
 "The only way to do great work is to love what you do.",
 "Success usually comes to those who are too busy to be looking for it.",
 "It always seems impossible until its done.",
   "If you want something you’ve never had, you must be willing to do something you’ve never done."

};

srand(static_cast<unsigned int>(time(0)));
int randomIndex = rand() % 10;

cout<<"Qoute Of the Day:\n"<<quotes[randomIndex]<<endl;
return 0;
}