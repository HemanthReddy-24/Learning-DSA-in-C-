#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout<<a<<" is lowest number"<<endl;
    }
    else if(b<=c){
        cout<<b<<" is lowest number"<<endl;
    }
    else{
        cout<<c<<" is lowest number"<<endl;
    }
    return 0;
}
