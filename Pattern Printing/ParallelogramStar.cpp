#include<iostream>
using namespace std;


int main(){
    int m=4,n=6;
    for(int i=1;i<=m;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

