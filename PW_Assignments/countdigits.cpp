#include<iostream>
using namespace std;

int main() {
    //Write a program to count digits of a given number
    
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int digit = 0;
    if(n == 0) {
        digit = 1;
    }
    else{

    for(int i =n;i!=0;i/=10) {
        digit++;
    }}
    cout<<n<<" has "<<digit<<" digits";
}