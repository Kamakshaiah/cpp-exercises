#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Person {

    string fname;
    string lname;
    int age;
    string gender;
    string contact_number;

public:
    Person(string fn, string ln, int ag, string gdr, string cn){
        fname=fn;
        lname=ln;
        age=ag;
        gender=gdr;
        contact_number=cn;
    };

    string get_contact_number(){
        return contact_number;
    }
    string full_name(){
        return fname + " " + lname;
    };

    void Information(){
        cout << "Name of the person: " << full_name() << endl;
        cout << "Contact number: " << contact_number << endl;
    };

    string email(){
        return fname + "." + lname + "email.com";
    };
};

class Employee: public Person {
    float basic;
    float HRA;
    float da;

public:

    Employee(string fn, string ln, int ag, string gdr, string cn, float bsc, float hra, float d):Person(fn, ln, ag, gdr, cn){
//        Person::Person(string fn, string ln, int ag, string gdr, string cn);
//        fname=fn;
//        lname=ln;
//        age=ag;
//        gender=gdr;
//        contact_number=cn;
        basic = bsc;
        HRA = hra;
        da = d;
    };

    float gross_salary(){
        return basic + HRA + da;
    };
    void Information(){
        cout << "Name of the person: " << Person::full_name() << endl;
        cout << "Contact number: " << Person::get_contact_number() << endl;
        cout << "Gross salary: " << gross_salary() << endl;
    };
};
int main(int argc, char** argv)
{
    Employee e1 = Employee("Kamakshaiah", "Musunuru", 45, "male", "9999999999", 100000, 5000, 1300000 );
    e1.Information();

}
