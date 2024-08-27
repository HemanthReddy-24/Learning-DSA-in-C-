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

    cout<<"Upper Right triangle:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i<=j){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"Lower Left triangle:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i>=j){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
