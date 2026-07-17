#include<iostream>
using namespace std;
int sum(int a){
    int sum=0,i;
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    return(sum);}
int main(){
    int a;
    cout<<"enter a=";
    cin>>a;
    cout<<"sum till a is="<<sum(a)<<endl;
    return 0;
}
