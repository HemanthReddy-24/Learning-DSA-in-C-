#include <iostream>
#include <string>
using namespace std;

int pow(int n,int r){
    int number=1;
    for(int i=0;i<r;i++){
        number*=n;
    }
    return number;
}

int main() {
    int bin,dec=0;
    cout<<"Enter a Binary number:";
    cin>>bin;
    int c=0;
    while(bin!=0){
        int rem=bin%10;
        dec+=rem*pow(2,c);
        c++;
        bin/=10;
    }
    cout<<dec;
    return 0;
}
