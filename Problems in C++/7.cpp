#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum == n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"not a Perfect Number";
    }
    return 0;
}




