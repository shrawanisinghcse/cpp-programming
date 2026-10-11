#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"How many times do you want to print \"Hello World\"? ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        cout<<"Hello World \n";
    }
}