#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter a character=";
    cin>>a;
    switch (a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<a <<"is a vowel"<<endl;
            break;
        default:
            cout<<a <<"is a consonent"<<endl;
            break;}
return 0;}
