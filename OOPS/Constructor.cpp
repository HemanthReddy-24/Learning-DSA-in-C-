#include<iostream>
using namespace std;

class Student{
public:
    int roll_no;
    string name;
    float cgpa;
    Student(){

    }
    Student(int r,string n,float c){
        roll_no=r;
        name=n;
        cgpa=c;
    }
};

void print(Student x){
    cout<<x.roll_no<<" "<<x.name<<" "<<x.cgpa<<endl;
}

int main(){
    Student s1(4887,"Hemanth Reddy",8.53);
    print(s1);

    Student s2;
    s2.roll_no=4657;
    s2.name="blabla";
    s2.cgpa=9.05;

    print(s2);

    Student s3=s2;

    print(s3);

    s3.name="manoj";

    print(s2);
    print(s3);
    return 0;
}
