#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Employee {

private:
    int id;
    char uid;
    char passwd;
    string fname;
    string lname;
    string mobnum;
    string type;

public:
    Employee(string name1, string name2, string mnum){
//        cout << "Student object is created!" << endl;
        id = rand();
        fname = name1;
        lname = name2;
        mobnum = mnum;

    }

public:
    void set_type(string t){
        type = t;
    }
    string get_type(){
        return type;
    }
    string create_email_id(){
        string emailid = fname+"."+lname+"@learningfigs.com";
        return emailid;
    }

    int get_id(){
        return id;
    }

    string full_name(){
        return fname + " " + lname;
    }
};

int main()
{
    Employee e1 = Employee("kamakshaiah", "musunuru", "+91900000000");
    Employee e2 = Employee("sathish", "sherigudem", "+91900000000");

    int eid = e1.get_id();
    cout << eid << endl;

    string fullname = e1.full_name();
    cout << fullname << endl;

    e1.set_type("HR");
    string etype = e1.get_type();
    cout << etype << endl;

//    cout << e1.id << endl;
//    cout << e1.fname << endl;
//    cout << e1.lname << endl;
//    string eid1 = e1.create_email_id();
//    cout << eid1 << endl;

//    cout << s1.fname << endl;
//    cout << s1.lname << endl;
//
//    cout << e2.id << endl;
//    cout << e2.fname << endl;
//    cout << e2.lname << endl;
//
//    string eid2 = e2.create_email_id();
//    cout << eid2 << endl;
//    s1.id = 1;
//    s1.name = "mk";

//    Student s2 = Student(2, "xyz");
//    s2.id = 2;
//    s2.name = "xyz";


//    cout << s2.id << endl;
//    cout << s2.name << endl;
}
