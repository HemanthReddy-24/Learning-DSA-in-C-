#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter no of rows:";
    cin>>r;
    cout<<"Enter no of columns:";
    cin>>c;
    cout<<"Enter values:";
    int arr[r][c];
    vector<int> v;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
        }
    }

    cout<<"Entire matrix before sorting:"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    sort(v.begin(), v.end());
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=v[k];
            k++;
        }
    }
    cout<<"Entire matrix after sorting:"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
