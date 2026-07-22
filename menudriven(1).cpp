#include<iostream>
using namespace std;
int main(){
    int ch,a,b;
    do{
        cout<<"\n---------MENU----------\n"<<endl;
        cout<<"1.for AND(&) OPERATOR"<<endl;
        cout<<"2.for OR(|) OPERATOR"<<endl;
        cout<<"3. for XOR(^) OPERATOR"<<endl;
        cout<<"4. to EXIT"<<endl;
        cout<<"enter your choice=";
        cin>>ch;
        if(ch==4){
            cout<<"THANKYOUU"<<endl;
        }
        if(ch>0 && ch<4){
        cout<<"enter num1=";
        cin>>a;
        cout<<"enter num2=";
        cin>>b;
        switch(ch){
            case 1:
                cout<<"using AND Operator ans="<<(a&b)<<endl;
                break;
            case 2:
                cout<<"using OR Operator ans="<<(a|b)<<endl;
                break;
            case 3:
                cout<<"using XOR Operator ans="<<(a^b)<<endl;
                break;
        }}
        if(ch>4){
            cout<<"INVALID INPUT"<<endl;
        }}
        while(ch!=4);
        return 0;
}
