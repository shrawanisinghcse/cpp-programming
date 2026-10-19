#include<iostream>
using namespace std;

int main() {
    //Write a program to print out all Armstrong numbers between 1 and 500
    for(int i = 1; i <= 500;i++) {
        int sum = 0;
        int n =i;
        for(;n!=0;n/= 10) {
            int digit = n%10;
            int x=digit*digit*digit;
            sum += x;
        }
        if(sum == i) {
            cout<<i<<endl;
        }
    }
}