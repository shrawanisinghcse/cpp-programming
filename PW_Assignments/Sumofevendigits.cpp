#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int sum = 0;

    for(int i = n; i > 0; i/=10) {
        int digit = i%10;
        if(digit % 2 == 0) {
            sum += digit;
        }
    }
    cout<<"Sum of even digits of the given number is "<<sum;
}