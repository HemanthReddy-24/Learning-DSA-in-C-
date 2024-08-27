#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,7,4,5};
    int num=0;
    for(int i=0;i<5;i++){
        num*=10;
        num+=arr[i];
    }
    cout<<num;
    return 0;
}
