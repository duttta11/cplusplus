#include<iostream>
using namespace std;
int main(){
    double c,f;
    int ch;
    cout<<"choose 1 to convert cel to faren"<<endl;
    cout<<"choose 2 to convert faren to cel"<<endl;
    cout<<"choose 3 to exit"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"enter the cel=";
            cin>>c;
            f=1.8*c+32;
            cout<<"cal to faren value is="<<f<<endl;
            break;
        case 2:
            cout<<"enter the faren=";
            cin>>f;
            c=(5/9)*(f-32);
            cout<<"faren to cel value is="<<c<<endl;
            break;
        case 3:
            cout<<"exit";
            break;
        default:
            cout<<"invalid";
            break;}
return 0;}
