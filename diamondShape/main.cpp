#include<iostream>
using namespace std;

void diamond(int n){
        for(int i=1;i<=n;i++){ //rows
    cout<<endl;
     for(int j=1; j<=n-i;j++){ //cols
        cout<<" ";
    }
      for(int j=1 ; j<=2*i-1;j++){
        cout<<"*";
    }
//    for(int j=1; j<=n-i;j++){
//         cout<<"-";
//     }
    // for(int j=1; j<=n-i;j++){
    //     cout<<"-";
    // }
  
    }
    for(int i=n-1 ; i>=1 ; i--){
    cout<<endl;

        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j =1 ; j<=2*i-1;j++){
            cout<<"*";
        }
        //    for(int j = 1;j<=n-i;j++){
        //     cout<<"-";
        // }
    }
}
int main(){
    int n;
    cout<<"Enter Your number of rows for diamond";
    cin>>n;
    diamond(n);


    return 0 ;
}