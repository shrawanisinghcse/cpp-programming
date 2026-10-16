#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n <= 1) {
        cout<<"Neither prime nor composite";
    }
    else {
        bool flag = true;
    for(int i = 2; i<= n/2; i++) {
        if(n%i == 0) {
        flag = false;
            break;
        }
    }
    if(flag == true) {
        cout<<n<<" is prime number";
    }
    else cout<<n<<" is composite number";
    }
}

