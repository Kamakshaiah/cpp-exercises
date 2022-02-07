#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Employee {

private:
    int id;
    string fname;
    string lname;

    Employee(string name1, string name2){
//        cout << "Student object is created!" << endl;
        id = rand();
        fname = name1;
        lname = name2;
    }

    string create_email_id(){
        string emailid = fname+"."+lname+"@learningfigs.com";
        return emailid;
    }



};

int main()
{
    Employee e1 = Employee("kamakshaiah", "musunuru");
    Employee e2 = Employee("sathish", "sherigudem");

    cout << e1.id << endl;
//    cout << s1.fname << endl;
//    cout << s1.lname << endl;
//
    cout << e2.id << endl;
//    cout << s2.fname << endl;
//    cout << s2.lname << endl;

    string eid1 = e1.create_email_id();
    cout << eid1 << endl;

    string eid2 = e2.create_email_id();
    cout << eid2 << endl;
//    s1.id = 1;
//    s1.name = "mk";

//    Student s2 = Student(2, "xyz");
//    s2.id = 2;
//    s2.name = "xyz";


//    cout << s2.id << endl;
//    cout << s2.name << endl;
}
