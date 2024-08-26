#include<iostream>
using namespace std;

int big(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int small(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[6]={1,25,45,21,9,65};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<big(arr,size)<<endl;
    cout<<small(arr,size)<<endl;
    return 0;
}
