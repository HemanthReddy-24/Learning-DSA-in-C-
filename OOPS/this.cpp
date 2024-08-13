#include<iostream>
using namespace std;

class Student{
public:
    int roll_no;
    string name;
    float cgpa;
    Student(){ //default constructor

    }
    Student(int roll_no,string name,float cgpa){
        this->roll_no=roll_no;
        this->name=name;
        this->cgpa=cgpa;
    }
    void print(){
    cout<<this->roll_no<<" "<<this->name<<" "<<this->cgpa<<endl;
}
};



int main(){
    Student s1(4887,"Hemanth Reddy",8.53);
    s1.print();

    Student s2=s1;//copy Constructor

    s2.print();

    s2.name="Sunny"; // copy constructor for user defined constructor creates a Deep copy
    s1.print();
    s2.print();
    return 0;
}

