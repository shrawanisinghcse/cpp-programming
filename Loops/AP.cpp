#include<iostream>
using namespace std;

int main() {
    //Display this AP - 1,3,5,7,9,.. upto 'n'

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i = 0;i <= n-1; i++) {
        //nth term = a + (n-1)d
        //d = 2; a = 1; n = n;
        cout<<1+i*2<<endl;        
    }
}