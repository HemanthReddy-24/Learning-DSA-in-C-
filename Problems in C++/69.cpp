#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{9,8,7},{6,5,4},{3,2,1}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=j+1;k<3;k++){
                if(arr[i][j]>arr[i][k]){
                    swap(arr[i][j],arr[i][k]);
                }
            }
        }
    }
    cout<<"After sorting of rows:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
