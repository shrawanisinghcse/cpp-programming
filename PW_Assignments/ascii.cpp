#include<iostream>
using namespace std;

int main() {
    char c1,c2;
    cout<<"Enter first character : ";
    cin>>c1;
    cout<<"Enter second character : ";
    cin>>c2;

    int diff = c1-c2;
    cout<<"Difference in their ASCII value : "<<diff;
}