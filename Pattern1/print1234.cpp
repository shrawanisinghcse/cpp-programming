#include<iostream>
using namespace std;

int main() {
    /*Print the given pattern : 
    1234
    1234
    1234
    1234*/
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j<= 4; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}