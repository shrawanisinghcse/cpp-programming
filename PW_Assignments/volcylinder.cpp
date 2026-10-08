#include<iostream>
using namespace std;

int main() {

    float r,h;
    cout<<"Enter Radius : ";
    cin>>r;
    cout<<"Enter Height";
    cin>>h;
    float pi = 3.1415;

    float volume = pi*r*r*h;
    cout<<volume;
}