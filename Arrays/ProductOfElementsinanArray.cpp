#include<iostream>
using namespace std;
int Productofarr(int arr[],int size){ //without Recursion
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}

int FindProduct(int arr[],int size){ //with Recursion
    if(size==1){
        return arr[0];
    }
    return arr[0]*FindProduct(arr+1,size-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<Productofarr(arr,size)<<endl;
    cout<<endl;
    cout<<FindProduct(arr,size)<<endl;
    return 0;
}

