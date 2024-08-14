#include<iostream>
using namespace std;



int main() {
    int m = 3, n = 3;
    int arr[m][n] = {  // Must use constant dimensions here
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int key=5;
    bool flag=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == key){
                cout<<i<<" "<<j;
                flag=true;
                break;
            }
        }
    }
    if(flag == false){
        cout<<"Not found";
    }

    cout<<endl;
    for(int i=0;i<m;i++){
            int max = arr[i][0];
        for(int j=0;j<n;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
        cout<<max<<" ";
    }
    cout<<endl;

    for (int j = 0; j < n; j++) {
        int max = arr[0][j];

        for (int i = 1; i < m; i++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        cout<<max<<" ";
    }
    cout<<endl;
    return 0;
}
