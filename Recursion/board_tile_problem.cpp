#include<iostream>
using namespace std;

int tileways(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tileways(n-1) + tileways(n-2);
}



int main(){

    cout<<tileways(4)<<endl;
    return 0;
}