#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter number of lines you want in triangle : ";
    cin>>n;

    int k = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j< i; j++) {
            cout<<k<<" ";
            k++;

        }
        cout<<endl;
    }
}