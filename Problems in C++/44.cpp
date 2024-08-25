#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ncr;
    return 0;
}

