#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"No. of lines - 1 : ";
    cin>>n;

    for(int i = 1;i<= n;i++) {
        for(int j = 1; j<= i-1; j++) {
            cout<<" ";
        }
        cout<<"*";
        for(int j = 1; j<= 2*n-2*i+1;j++) {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(int i = 1;i<= n;i++) {
        cout<<" ";
    }
    cout<<"*";
}