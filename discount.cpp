#include<iostream>
using namespace std;
int main(){
    double totalcost,discount;
    cout<<"enter the total cost=";
    cin>>totalcost;
    if(totalcost<2000){
        cout<<"discount="<<totalcost*0.05<<endl;
    }
    else if(totalcost==2001 && totalcost>=5000){
        cout<<"discount="<<totalcost*0.25<<endl;
    }
    else if(totalcost==5001 && totalcost>=10000){
        cout<<"discount="<<totalcost*0.35<<endl;
    }
    else if(totalcost>10000){
        cout<<"discount="<<totalcost*0.50<<endl;
    }
    return 0;}
