#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Number of rows:";
    cin>>r;
    cout<<"Number of columns:";
    cin>>c;
    if(r!=c){
        cout<<"Not possible";
        return 0;
    }
    int a[r][c];
    int sum=0;
    cout<<"Enter values of matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Original matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j || i+j==r-1){
                sum+=a[i][j];
            }
        }
    }

    cout<<"Sum of Diagonal elements is:"<<sum;
    return 0;
}



