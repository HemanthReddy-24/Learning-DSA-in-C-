#include<iostream>
using namespace std;

class Student{
public:
    int roll_no;
    string name;
    float cgpa;
};

int main(){
    Student s1;
    s1.roll_no=4887;
    s1.name="Hemanth Reddy";
    s1.cgpa=8.53;

    cout<<s1.roll_no<<" "<<s1.name<<" "<<s1.cgpa<<endl;

    Student s2;
    s2.roll_no=4888;
    s2.name="Dhanush";
    s2.cgpa=8.85;
    cout<<s2.roll_no<<" "<<s2.name<<" "<<s2.cgpa<<endl;
    return 0;
}
