#include<iostream>
using namespace std;

bool Sorted(int arr[],int size){ //Without Recursion
    for(int i=1;i<size;i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

bool SortedR(int arr[],int size){ // Using Recursion
    if(size==0 || size==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return SortedR(arr+1,size-1);
}


int main(){
    int arr[]={1,2,3,4,5};
    int arr1[]={1,5,7,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    cout<<Sorted(arr,size)<<endl;
    cout<<Sorted(arr1,size)<<endl;
    cout<<endl;
    cout<<SortedR(arr,size)<<endl;
    cout<<SortedR(arr1,size)<<endl;
    return 0;
}
