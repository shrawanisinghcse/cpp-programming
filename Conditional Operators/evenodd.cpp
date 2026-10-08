//Take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter positive integer : ";
    cin>>n;

    if(n < 0) {
        cout<<"I told you to enter positive number, right? Then do as instructed!";
    }
    if(n >= 0) {
        if(n%2 == 0) {
            cout<<n <<" is even integer"; 
        }
        else {
            cout<<n <<" is odd integer";
        }
    }
}