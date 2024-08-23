#include<iostream>
using namespace std;

int pow(int n,int r){
    int number=1;
    for(int i=0;i<r;i++){
        number*=n;
    }
    return number;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int number =n;
    int sum=0,c=0;
    while(n!=0){
        int r=n%10;
        c+=1;
        n=n/10;
    }
    n=number;
    while(n!=0){
        int r=n%10;
        sum+=pow(r,c);
        n=n/10;
    }

    if(sum == number){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}





