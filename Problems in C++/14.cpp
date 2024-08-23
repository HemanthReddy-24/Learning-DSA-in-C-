#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    for(int j=2;j<number;j++){
        if(number%j ==0 && isprime(j)){
            cout<<j<<" ";
        }
    }
    return 0;
}
