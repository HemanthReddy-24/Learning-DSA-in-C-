#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    cout<<"Number of even:"<<e<<endl;
    cout<<"Number of odd :"<<o<<endl;
    return 0;
}
