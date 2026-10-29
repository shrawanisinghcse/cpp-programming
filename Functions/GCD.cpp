#include<iostream>
using namespace std;

void HCF(int x, int y) {
    int hcf = 1;
    for(int i = min(x,y); i >= 1; i--) {
        if(x %  i == 0 && y%i == 0) {
            hcf = i;
            cout<<"Greatest Common Divisor : "<<i;
            break;
        }
    }
}

int main() {
    int x;
    cout<<"Enter First Number : ";
    cin>>x;

    int y;
    cout<<"Enter Second Number : ";
    cin>>y;

    HCF(x,y);
}