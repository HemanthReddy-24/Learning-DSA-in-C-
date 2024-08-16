#include<iostream>
#include<string.h>
using namespace std;

void Remove(char input[]){ // With Recursion!
    int l=strlen(input);

    if(l==0){
        return;
    }
    if(input[0] == 'x'){
        for(int i=0;i<l;i++){
            input[i] = input[i+1];
            Remove(input);
        }
    }
    else{
        Remove(input+1);
    }
}

int main(){
    char input[100];
    cin>>input;
    Remove(input);
    cout<<input<<endl;
    return 0;
}
