#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    int i,len;
    cout<<"enter a word="<<endl;
    cin>>word;
    len=len(word);
    for(i=0;i<len;i++){
        cout<<"%s",i;
    }
    return 0;
}
