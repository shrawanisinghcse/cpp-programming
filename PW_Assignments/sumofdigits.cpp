#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int sum = 0;
    while(n!= 0) {
        sum += n%10;
        n /= 10;
    }
    cout<<sum<<" is the sum of digits of "<<n;
}