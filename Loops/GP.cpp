#include<iostream>
#include<math.h>
using namespace std;

int main() {
    //Display this GP - 1,2,4,8,16,32,... upto 'n' terms.
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1; i<= n; i++) {
        cout<<1* pow(2,i-1)<<endl;
    }
}