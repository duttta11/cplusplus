#include<iostream>
using namespace std;
int main(){
    int ch,amt,discount;
    string name,address;
    cout<<"enter 1 for laptop"<<endl;
    cout<<"enter 2 for pc"<<endl;
    cout<<"enter 3 to exit"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"enter purchase amount"<<endl;
            cin>>amt;
            cout<<"enter your name"<<endl;
            getline(cin,name);
            cout<<"enter your address"<<endl;
            getline(cin,address);
            if(amt<=25000){
                cout<<"no discount"<<endl;
                 cout<<"net amount"<<amt<<endl;
            }
            else if(amt>25001 && amt<57000){
                cout<<"discount"<<amt*0.05<<endl;
                 cout<<"net amount"<<amt-discount<<endl;
            }
            else if(amt>57001 && amt<100000){
                cout<<"discount"<<amt*0.075<<endl;
                cout<<"net amount"<<amt-discount<<endl;
            }
            else if(amt>100000){
                cout<<"discount"<<amt*0.1<<endl;
                 cout<<"net amount"<<amt-discount<<endl;}
            break;
        case 2:
            cout<<"enter purchase amount"<<endl;
            cin>>amt;
            cout<<"enter your name"<<endl;
            getline(cin,name);
            cout<<"enter your address"<<endl;
            getline(cin,address);
            if(amt<=25000){
                  cout<<"discount"<<amt*0.05<<endl;
                 cout<<"net amount"<<amt-discount<<endl;
            }
            else if(amt>25001 && amt<57000){
                cout<<"discount"<<amt*0.76<<endl;
                 cout<<"net amount"<<amt-discount<<endl;
            }
            else if(amt>57001 && amt<100000){
                cout<<"discount"<<amt*0.1<<endl;
                cout<<"net amount"<<amt-discount<<endl;
            }
            else if(amt>100000){
                cout<<"discount"<<amt*0.15<<endl;
                 cout<<"net amount"<<amt-discount<<endl;
            }
            break;
        case 3:
            cout<<"exit"<<endl;
            break;
        default:
            cout<<"invalid input"<<endl;
            break;}
        return 0;}*/
    

}
