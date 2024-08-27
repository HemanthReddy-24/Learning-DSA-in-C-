#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter no of rows:";
    cin>>r;
    cout<<"Enter no of columns:";
    cin>>c;
    cout<<"Enter values:";
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entire matrix:"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ma=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>ma){
                ma=arr[i][j];
            }
        }
    }
    cout<<ma<<endl;

    int mi=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<mi){
                mi=arr[i][j];
            }
        }
    }
    cout<<mi<<endl;


    return 0;
}
