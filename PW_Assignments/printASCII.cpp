#include<iostream>
using namespace std;

int main() {
    //Print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
    for(int i = 0; i < 26; i++) {
        cout<<"ASCII value of "<< (char)(i + 'A') << " is "<<(int) (i +'A')<<endl;
    }
}