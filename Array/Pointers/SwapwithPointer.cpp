#include<iostream>
using namespace std;

/*
void increment(int a){
    a++;
}
*/


void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

 /*   int a=2;
    increment(a);
    cout<<a<<endl;
    */

    
    int a=2;
    int b=4;
/*
    int *aptr=&a;
    int *bptr=&b;

    swap(aptr, bptr);

    cout<<a<<" "<<b<<endl;

*/
   swap(&a, &b);
   cout<<a<<" "<<b<<endl;

    return 0; 
}