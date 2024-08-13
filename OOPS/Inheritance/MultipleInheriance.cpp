
#include<iostream>
using namespace std;

class Father{
public:
    string name;
    int age;
    float property;

    Father(){

    }
    Father(string name,int age,float property){
        this->name=name;
        this->age=age;
        this->property=property;
    }

    void display(){
        cout<<this->name<<" "<<this->age<<" "<<this->property<<endl;
    }
};

class Mother{
public:
    int no_of_sons;

    Mother(){

    }
    Mother(float no_of_sons){
        this->no_of_sons=no_of_sons;
    }

    void display(){
        cout<<this->no_of_sons<<endl;
    }
};

class Son : public Father,public Mother{
public:
    Son(){

    }
    Son(string name,int age,float property,int no_of_sons){
        this->name=name;
        this->age=age;
        this->property=property;
        this->no_of_sons=no_of_sons;
    }

    void print(){
    cout<<this->name<<" "<<this->age<<" "<<this->property<<" "<<this->no_of_sons<<endl;
    }

};

int main(){

    Father f1("nanna",45,5.40);
    f1.display();

    Mother m1(2);
    m1.display();

    Son s1("koduku",20,0,2);

    s1.print();

    return 0;
}
