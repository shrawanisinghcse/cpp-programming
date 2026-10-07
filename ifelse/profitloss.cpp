#include<iostream>
using namespace std;

int main() {

    float cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;

    float sp;
    cout<<"Enter Selling Price : ";
    cin>>sp;

    float ProLoss = sp - cp;
    if(ProLoss < 0) {
        cout<<"LOSS : "<<-ProLoss;
    }
    else if(ProLoss == 0) {
        cout<<"NEITHER PROFIT NOR LOSS";
    }
    else{
        cout<<"PROFIT : "<<ProLoss;
    }
}