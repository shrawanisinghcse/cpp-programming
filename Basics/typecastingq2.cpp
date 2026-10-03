//Take float input and print the fractional part of the real number.
#include <iostream>
using namespace std;

int main() {
    float n;
    cout<<"Enter the number : ";
    cin>>n;

    if(n>= 0) {
    cout<<n-int(n);
    }
    else{
        cout<<n-(int(n)-1);
    }
}