#include<iostream>
using namespace std;
int main(){
    int a;
    double t;
    char g;
    cout<<"enter your age=";
    cin>>a;
    cout<<"enter your gender(m/f)=";
    cin>>g;
     if(a<65 && g=='m'){
        cout<<"enter taxable income=";
        cin>>t;
        if(t<160000){
            cout<<"no income tax"<<endl;
    }
        else if(t>160000 && t<500000){
            cout<<"income tax is="<<(t-160000)*0.1<<endl;
    }
        else if(t<500000 && t<800000){
            cout<<"income tax is="<<((t-500000)*0.2)+34000<<endl;
    }
        else if(t>800000){
            cout<<"income tax is="<<((t-800000)*0.3)+94000<<endl;
    }}
    else{
        cout<<"wrong category"<<endl;
    }
    return 0;
