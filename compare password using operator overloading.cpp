#include<iostream>
using namespace std;
class number{
    public:
    string x;
    
        bool operator == (number n){
        return x==n.x;
}};
int main(){
    number a,b;
    cout<<"enter pass 1=";
    cin>>a.x;
    cout<<"enter pass 2=";
    cin>>b.x;
    if(a==b){
        cout<<"equal";
        
    }
    else{
        cout<<"not equal";
    }
    return 0;
}
