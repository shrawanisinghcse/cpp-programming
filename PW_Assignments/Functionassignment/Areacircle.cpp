#include<iostream>
using namespace std;

void area(float r) {
    float pi = 3.14;
    cout<< pi*r*r;
}

int main() {
    float r;
    cout<<"Enter radius : ";
    cin>>r;

    area(r);
}