#include<iostream>
using namespace std;



int main(){
    int r,c;
    cout<<"Number of rows:";
    cin>>r;
    cout<<"Number of columns:";
    cin>>c;
    int a[r][c];
    int b[r][c];
    int res[r][c];
    cout<<"Enter values of first matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter values of Second matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Resultant matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

