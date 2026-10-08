#include<iostream>
using namespace std;

int main() {
    
    float n;
    cout<<"Enter number : ";
    cin>>n;

    if(n >= 0) {
        cout<<"Absolute value : "<<n;
    }
    else {
        cout<<"Absolute value : "<<-n;
    }
}