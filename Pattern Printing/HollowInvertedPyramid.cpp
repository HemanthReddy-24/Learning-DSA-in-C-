#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of Rows:";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(i==n || k==1 || k==2*i-1){
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

