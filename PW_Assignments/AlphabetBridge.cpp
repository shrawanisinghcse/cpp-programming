#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"No of lines : ";
    cin>>n;

    for(int i = 1; i<= 2*n-1; i++) {
        cout<<char('A'+i-1);
    }
    cout<<endl;

    int a = 0;

    for(int i = 1; i< n; i++) {
        for(int j = 1; j<= n-i; j++) {
            cout<<char('A' + j -1);
        }
        for(int j = 1; j<= 2*i-1;j++) {
            cout<<" ";
        }
        for(int j = 1;j<= n-i; j++) {
            cout<<char('A'+n+i+j-2);
        }
        cout<<endl;
    }
}