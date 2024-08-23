#include<iostream>
using namespace std;

int main(){
    float f;
    cout<<"Enter Fahrenheit:";
    cin>>f;
    float c;
    c=(f-32)*5/9;
    cout<<"The same celsius temperature is :"<<c;
    return 0;
}

