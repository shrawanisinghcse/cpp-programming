#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n>= 100 && n<= 999) {
        cout<<"THREE DIGIT NUMBER";
    }
    else{
        cout<<"NOT A THREE DIGIT NUMBER";
    }
}