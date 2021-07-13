#include<iostream>
using namespace std;

//function overloading
class a{
    public:
    void fun(){
        cout<<"I am a function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"I am a function with int arguments"<<endl;
    }
    void fun(double x){
        cout<<"I am a fucntion with double arguments"<<endl;
    }

};




int main(){
    a obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);

    return 0;
}