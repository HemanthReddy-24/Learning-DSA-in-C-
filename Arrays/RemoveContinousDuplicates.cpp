#include<iostream>
#include<cstring>
using namespace std;

void Remove(char inp[],int size){
    if(size == 0 || size == 1){
        return;
    }
    if(inp[1] == inp[0]){
        for(int i=1;i<size;i++){
            inp[i]=inp[i+1];
        }
        size--;
    }
    Remove(inp+1,size-1);
}


int main(){
    char inp[100] = "aababb";
    int size=strlen(inp);
    Remove(inp,size);
    cout<<inp<<endl;
    return 0;
}
