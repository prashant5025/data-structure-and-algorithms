#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return (n&& !(n &n-1));
}




int main(){

    cout<<ispowerof2(5)<<endl;


    return 0;
}