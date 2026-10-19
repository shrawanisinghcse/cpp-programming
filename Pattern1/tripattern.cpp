#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"How many lines in right angled triangle do you want?";
    cin>>n;

    for(int i = 1;i <= n;i++) {
        for(int j = 1; j <= i;j++) {
            cout<<'*';
        }
        cout<<endl;
    }
}