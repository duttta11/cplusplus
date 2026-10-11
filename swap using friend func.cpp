#include<iostream>
using namespace std;
class B;
class A{
    int n;
    public:
    void input(){
        cout<<"enter number 1=";
        cin>>n;
    }
    void friend swap(A a,B b);
    
};
class B{
    int n;
    public:
    void input(){
        cout<<"enter number 2=";
        cin>>n;
    }
    void friend swap(A a,B b);
    
};
void swap(A a,B b){
    cout<<"original number 1="<<a.n<<endl;
    cout<<"original number 2="<<b.n<<endl;
    int temp=a.n;
    a.n=b.n;
    b.n=temp;
    cout<<"after swap"<<endl;
    cout<<"swap number 1="<<a.n<<endl;
    cout<<"swap number 2="<<b.n<<endl;
}
int main(){
    A a;
    B b;
    a.input();
    b.input();
    swap(a,b);
    return 0;
}
        
        
    
