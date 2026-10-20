#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter odd number : ";
    cin>>n;

    if(n%2 != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j<= n; j++) {
                if(i ==j || i+j == n+1) {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    else {
        cout<<"Please enter odd number!";
    }
}