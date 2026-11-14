#include<iostream>
using namespace std;

int Digitsquare(int n) {
    int digit = 0;
    if(n == 0) {
        digit = 1;
    } else{
        for(int i = n;i!= 0;i/= 10) {
            digit++;
        }
    }
    return digit;
}

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

   cout<<"No of digits : "<< Digitsquare(n)<<endl<<"Square of "<<n<<" : "<<n*n<<endl;
}