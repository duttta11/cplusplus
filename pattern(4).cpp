#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char a='A';
    cout<<"entr n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<a;
            
            
        }
        cout<<endl;
        a++;
    }
    return 0;
}
