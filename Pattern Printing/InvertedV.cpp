#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=2*n-1;j>=1;j--){
            if(i == j || i == 2*n-j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



