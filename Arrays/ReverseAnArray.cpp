#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Reverse(int arr[],int size){ //Without Recursion
    int i=0,j=size-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void ReverseR(int arr[],int size){ //With Recursion
    if(size == 0 || size == 1){
        return;
    }
    int temp=arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;

    return ReverseR(arr+1,size-2);
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size);

    Reverse(arr,size);
    print(arr,size);

    ReverseR(arr,size);
    print(arr,size);
    return 0;
}
