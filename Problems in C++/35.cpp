#include<iostream>
using namespace std;

int main(){
    int n1,n2,temp;
    cout<<"Enter number-1 :";
    cin>>n1;
    cout<<"Enter number-2 :";
    cin>>n2;
    cout<<"Before Swapping:"<<endl;
    cout<<n1<<" & "<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"After Swapping:"<<endl;
    cout<<n1<<" & "<<n2<<endl;
    return 0;
}

