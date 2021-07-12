#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print fucntion"<<endl;
    }
    void display(){
        cout<<"this is the base class's display fucntion"<<endl;
    }

};

class derived: public base{

    public:
    void print(){
        cout<<"this is the derived class's print fucntion"<<endl;

    }
    void display(){
        cout<<"this is the derived class's display fucntion"<<endl;    
    }
};


int main(){

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();
    baseptr ->display();

    return 0;
}