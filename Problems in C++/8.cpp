#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int number=n;
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum+=factorial(r);
        n=n/10;
    }

    if(sum == number){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a strong number";
    }
    return 0;
}





