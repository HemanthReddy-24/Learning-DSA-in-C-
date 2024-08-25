#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int range;
    cout<<"Enter Range:";
    cin>>range;
    for(int i=5;i<=range;i++){
        if(isprime(i-2) && isprime(i)){
            cout<<i-2<<" and "<<i<<" are Twin primes"<<endl;
        }
    }
    return 0;
}

