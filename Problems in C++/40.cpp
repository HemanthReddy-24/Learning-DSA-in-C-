#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    while(n!=0){
        int rem=n%10;
        if(rem!=0 && rem!=1){
            cout<<"It is not a Binary Number";
            return 0;
        }
        n/=10;
    }
    cout<<"It is a Binary number";
    return 1;
}
