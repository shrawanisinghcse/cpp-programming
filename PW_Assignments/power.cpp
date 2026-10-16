#include<iostream>
using namespace std;

int main() {
    float n1;
    cout<<"Enter number : ";
    cin>>n1;
    float n2;
    cout<<"Enter the value power you want to raise it too : ";
    cin>>n2;

    float power = 1;
if(n2>=0){
    for(float i = 1;i <= n2; i++) {
        power *= n1;
    }
    cout<<power;
}
else{
    for(float i = 1;i <= -n2; i++) {
        power *= n1;
    }
    cout<<1/power;
}
}