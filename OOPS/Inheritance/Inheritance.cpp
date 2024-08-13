#include<iostream>
using namespace std;

class GrandFather{
public:
    string name;
    int age;
    float property;

    GrandFather(){

    }
    GrandFather(string name,int age,float property){
        this->name=name;
        this->age=age;
        this->property=property;
    }

    void display(){
        cout<<this->name<<" "<<this->age<<" "<<this->property<<endl;
    }
};

class Father : public GrandFather{
public:
    Father(){

    }
    Father(string name,int age,float property){
        this->name=name;
        this->age=age;
        this->property=property;
    }

};

int main(){
    GrandFather g1("Thata",85,6.75);

    g1.display();

    Father f1("nanna",45,5.40);
    f1.display();
    return 0;
}
