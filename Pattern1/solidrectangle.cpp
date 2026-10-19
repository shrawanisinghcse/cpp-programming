#include<iostream>
using namespace std;

int main() {
    int row;
    cout<<"How many lines?";
    cin>>row;

    int column;
    cout<<"How many stars in each line? ";
    cin>>column;

    for(int i = 1; i <= row; i++) {
        for(int i = 1; i<= column; i++) {
            cout<<'*';
        }
        cout<<endl;
    }
}