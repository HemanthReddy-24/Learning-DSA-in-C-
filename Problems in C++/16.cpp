#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<c<<" ";
            c+=1;
        }
        cout<<endl;
    }
    return 0;
}
