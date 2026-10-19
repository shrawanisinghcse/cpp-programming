#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int original = n;
    int sum = original;

    int lastdigit;
    int reverse = 0;

    for(int i = n;n!= 0;n/= 10) {
        reverse*= 10;
        lastdigit = n%10;
        reverse += lastdigit;
    }
    sum+= reverse;

    cout<<sum<<" ["<< original <<"+"<<reverse<<"]";
}