#include<iostream>
using namespace std;

int main() {
    char c;
    cout<<"Enter Character : ";
    cin>>c;

    if(c >= 'A' && c<= 'Z' || c>= 'a' && c<= 'z') {
        cout<<"ALPHABET";
    }
    else{
        cout<<"NOT ALPHABET";
    }
}