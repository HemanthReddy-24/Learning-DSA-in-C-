#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
    cout<<"Enter a Number:";
    cin>>n;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    int s=v.size();
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(v[i]>v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<v[i];
    }
    return 0;
}
