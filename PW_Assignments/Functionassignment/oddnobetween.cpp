//Program to print all odd numbers between two numbers a and db
#include<iostream>
using namespace std;

void odd(int a, int b) {
  if(a>b) {
    if(b%2 != 0) {
    for(int i = b;i <= a;i+= 2) {
        cout<<i<<endl;
    }
}
else{
    for(int i = b+1;i<= a;i+=2) {
        cout<<i<<endl;
    }
}
  }

  else {
    if(a%2 != 0) {
    for(int i = a;i <= b;i+= 2) {
        cout<<i<<endl;
    }
}
    else{
    for(int i = a+1;i<= b;i+=2) {
        cout<<i<<endl;
    }
}
  }
}


int main() {
    int a;
    cout<<"Enter First number : ";
    cin>>a;

    int b;
    cout<<"Enter Second number : ";
    cin>>b;

    odd(a,b);
}