#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Customer {

    string fname;
    string lname;
    int age;
    string gender;
    string contact_number;
    float amount;

public:
    Customer(string fn, string ln, int ag, string gdr, string cn){
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

    void purchase(float amt){
        amount += amt;
    }

    float get_transaction_amount(){
        return amount;
    }

    bool type_of_customer(){
        if (get_transaction_amount() >= 10000){
            cout << "Premium customer" << endl;
            return true;
        }

        else {
            cout << "Basic customer" << endl;
            return false;
        }

    }

    float get_credit(){
        if (get_transaction_amount())
            return amount * 0.001;
        else
            cout << "No premium" << endl;
    }

};


int main(int argc, char** argv)
{
    Customer c1 = Customer("Kamakshaiah", "Musunuru", 45, "male", "9999999999");
    c1.Information();
    c1.purchase(10100);
    float amnt = c1.get_transaction_amount();
    cout << amnt << endl;
    cout << c1.type_of_customer() << endl;
    cout << c1.get_credit() << endl;

}
