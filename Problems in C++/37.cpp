#include<iostream>
using namespace std;

bool isleap(int n){
    if(n%4 == 0 && n%100 != 0){
        return 1;
    }
    else if(n%4 == 0 && n%100 == 0 && n%400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    for(int i=1882;i<1906;i++){
        if(isleap(i)){
            cout<<i<<" is a Leap Year"<<endl;
        }
    }
    return 0;
}

