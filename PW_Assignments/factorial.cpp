#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int factorial = 1;

    for(int i = n;i>= 1;i--) {
        factorial*= i;
    }
    cout<<factorial;
}