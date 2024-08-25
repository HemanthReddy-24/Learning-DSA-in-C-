#include<iostream>
using namespace std;


int main(){
    int n,target;
    cout<<"Enter size of numbers:";
    cin>>n;
    cout<<"Enter target:";
    cin>>target;
    int a[n];
    cout<<"Enter Values of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i] == target){
            c++;
        }
    }
    cout<<"Number of times is:"<<c<<endl;
    return 0;
}

