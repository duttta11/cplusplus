#include<iostream>
using namespace std;
int fact(int a){
    int fac=1,i;
    for(i=1;i<=a;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int a;
    cout<<"enter a=";
    cin>>a;
    cout<<"fac of a is="<<fact(a)<<endl;
    return 0;
}
