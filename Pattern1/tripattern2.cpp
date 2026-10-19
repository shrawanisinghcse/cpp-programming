#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"How many lines in upside right angled triangle?";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j>= i;j--) {
            cout<<'*';
        }
        cout<<endl;
    }
}