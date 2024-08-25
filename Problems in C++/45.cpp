#include<iostream>
using namespace std;

int lcm(int x, int y){
    if(x<y){
        for(int i=y;i<x*y;i++){
            if(i%x == 0 && i%y == 0){
                return i;
            }
        }
    }
    else{
        for(int i=x;i<x*y;i++){
            if(i%x == 0 && i%y == 0){
                return i;
            }
        }
    }
}

int gcd(int x, int y){
    if(x<y){
        for(int i=x;i>0;i--){
            if(x%i == 0 && y%i == 0){
                return i;
            }
        }
    }
    else{
        for(int i=y;i>0;i--){
            if(x%i == 0 && y%i == 0){
                return i;
            }
        }
    }
}


int main(){
    cout<<lcm(9,12)<<endl;
    cout<<gcd(9,12)<<endl;
    return 0;
}

