#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
