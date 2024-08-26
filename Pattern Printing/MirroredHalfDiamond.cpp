#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of Rows:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int k=1;k<=n-i;k++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
            for(int k=n;k<i;k++){
                cout<<" ";
            }
            for(int j=2*n-1;j>=i;j--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}


