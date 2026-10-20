#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter no. of lines in plus sign(odd no must be entered) : ";
    cin>>n;

    if(n%2 == 0) {
        cout<<"I told you to enter odd number!";
    }

    else {
    for(int i = 1; i <= n; i++) {
        for(int j = 1;j<= n;j++) {
            if(i == (n+1)/2 || j == (n+1)/2) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
}