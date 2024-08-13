#include<iostream>
using namespace std;

class Maths{
public:
    float a,b,c;

    Maths(){

    }

    Maths(float a, float b){
        this->a=a;
        this->b=b;
    }

    Maths(float a, float b, float c){
        this->a=a;
        this->b=b;
        this->c=c;
    }

};

float sum(Maths x){
    return x.a+x.b+x.c;
}

float sum(Maths x){
    return x.a+x.b;
}

int main(){

    Maths m1(5,10,50);

    float x= sum(m1);

    cout<<x;

    Maths m2(56,90);

    cout<<sum(m2);

    return 0;

}
