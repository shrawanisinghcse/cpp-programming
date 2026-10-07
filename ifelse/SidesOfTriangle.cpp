#include<iostream>
using namespace std;

int main() {
    float s1;
    cout<<"Enter first side : ";
    cin>>s1;
    float s2;
    cout<<"Enter second side : ";
    cin>>s2;
    float s3;
    cout<<"Enter third side : ";
    cin>>s3;

    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) {
        cout<<"The three sides can form a triangle";
    }
    else {
        cout<<"The three sides cannot form a triangle";
    }
}