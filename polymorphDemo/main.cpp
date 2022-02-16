#include <iostream>

using namespace std;

class A {

public:
    virtual void info(){
        cout << "Class A" << endl;
    }
};

class B: public A {

public:
    void info(){
        cout << "Class B" << endl;
    }

};


//class Shape {
//public:
//    virtual void draw(){
//        cout << "Draw Shape..." << endl;
//    }
//};
//
//class Rectangle:public Shape {
//public:
//    void draw(){
//        cout << "Draw Rectangle..." << endl;
//    }
//};
//
//class Circle:public Shape {
//public:
//    void draw(){
//        cout << "Draw Circle..." << endl;
//    }
//};

int main()
{
//    without virtual
//    A a = A();
//    a.info();
//
//    B b = B();
//    b.info();
//
//    A ab = B();
//    ab.info();
//with virtual
    A *a;
    A aa;
    B bb;

    a = &aa;
    a->info();
    a = &bb;
    a->info();

//    Shape *s;
//    Shape sh;
//    Rectangle rect;
//    Circle cir;
//
//    s = &cir;
//    s->draw();

    return 0;
}
