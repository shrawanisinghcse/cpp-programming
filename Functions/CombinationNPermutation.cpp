#include<iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for(int i = 2; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int factorial = 1;
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int r;
    cout<<"Enter r(Base Value) : ";
    cin>>r;

    if(r<= n && r >= 0 && n > 0) {
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    int nCr = nfact/(rfact*nrfact);
    int nPr = nfact/rfact;

    cout<<"nCr : "<<nCr<<endl;
    cout<<"nPr : "<<nPr<<endl;
    }
    else {
        cout<<"INVALID";
    }
}