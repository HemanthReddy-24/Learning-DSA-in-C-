#include<iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter Range:";
    cin>>range;
    for(int i=1;i<range;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}

