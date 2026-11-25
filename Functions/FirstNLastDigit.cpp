#include<iostream>
using namespace std;

void FNL(int n) {
    int last = n%10;
    for(int i = n;n>9;n/= 10){};
    int first = n%10;
    cout<<"First digit = "<<first<<endl<<"Last digit = "<<last<<endl;
}

int main() {
    int n;
    cout<<"Enter an integer : ";
    cin>>n;

    FNL(n);
}