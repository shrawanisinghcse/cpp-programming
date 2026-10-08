#include<iostream>
using namespace std;

int main(){
char c;
cout<<"Enter your character : ";
cin>>c;

if(c>= 'A' && c<= 'Z' || c >= 'a' && c <= 'z') {
    if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<"VOWEL";
    }
    else{
        cout<<"CONSONANT";
    }
}
else{
    cout<<"Entered character is not the part of alphabet";
}
}