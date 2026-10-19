#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    cout<<1<<" ";

    int F0 = 0;
    int F1 = 1;

    for(int i = 2; i< n; i++) {
        int fib = F0 + F1;
        cout<<fib<<" ";
        F0 = F1;
        F1 = fib;
    }
}