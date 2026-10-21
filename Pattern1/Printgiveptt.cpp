#include<iostream>
using namespace std;

int main() {
    /*Print the given pattern
                *
               *** 
              *****
             *******  
              *****
               ***
                *
                */
               int n;
               cout<<"No of rows : ";
               cin>>n;
    for(int i = 1;i<= n;i++) {
        for(int j = 1;j<=n-i;j++) {
            cout<<" ";
        }
        for(int k = 1;k<= 1+(i-1)*2;k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i<= n-1;i++) {
        for(int j = 1;j<= i;j++) {
            cout<<" ";
        }
        for(int k = 1+(n-i-1)*2;k>=1  ;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}