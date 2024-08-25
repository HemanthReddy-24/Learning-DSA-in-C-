#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of numbers:";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter Values of First array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter Values of Second array:";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"Before Swapping:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int idx=0;
    while(idx!=n){
        int temp=a[idx];
        a[idx]=b[idx];
        b[idx]=temp;
        idx++;
    }
    cout<<"After Swapping:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}

