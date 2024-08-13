#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(int arr[], int &size, int element, int position) {
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

void deletion(int arr[], int &size,int pos) {
    for (int i = pos+1;i<size;i++) {
        arr[i-1] = arr[i];
    }
    size--;
}

void search(int arr[],int &size,int ele){
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i] == ele){
            flag=true;
            cout<<i;
            break;
        }
    }

    if(flag==false){
        cout<<"Not Found";
    }

}

int main(){
    int s=5;
    int arr[]={1,2,3,4,5};
    print(arr,s);

    insert(arr,s,10,3);
    print(arr,s);

    deletion(arr,s,3);
    print(arr,s);

    search(arr,s,3);
    return 0;
}
