#include<iostream>
using namespace std;
class number2;
class number1{
    int n;
    public:
     void input(){
         cout<<"enter first number=";
         cin>>n;
     }
    void display(){
        cout<<"the first number added is="<<n<<endl;
    }
    void friend add(number1 a,number2 b);
};
class number2{
    int n;
    public:
     void input(){
         cout<<"enter second number=";
         cin>>n;
     }
    void display(){
        cout<<"the second number added is="<<n<<endl;
    }
    void friend add(number1 a, number2 b);
};
void add(number1 a,number2 b){
    int c;
    c=a.n+b.n;
    cout<<"the sum of them both is="<<c;
}
int main(){
    number1 a;
    number2 b;
    a.input();
    b.input();
    a.display();
    b.display();
    add(a,b);
    return 0;
}
