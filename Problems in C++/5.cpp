#include<iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter Range:";
    cin>>range;
    int sum=0;
    for(int i=1;i<=range;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<"The average of all even numbers in range "<<range<<" is "<<sum/(range/2)<<endl;
    cout<<"The average of all even numbers in range "<<range<<" is "<<range/2+1<<endl;
    return 0;
}


