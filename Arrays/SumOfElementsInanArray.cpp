#include<iostream>
using namespace std;
int sumofarr(int arr[],int size){ //without Recursion
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int FindSum(int arr[],int size){ //with Recursion
    if(size==0){
        return 0;
    }
    return arr[0]+FindSum(arr+1,size-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<sumofarr(arr,size)<<endl;
    cout<<endl;
    cout<<FindSum(arr,size)<<endl;
    return 0;
}
