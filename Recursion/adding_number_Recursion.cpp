/*When a function called itself for make it problem
smaller.

add all number tell n

sum till n= n + n-1 + n-2 + n-3------+1
sum till n= n+ sum till n-1
sum till n-1 = n-1 + sum  till n-2;
..
..
..
..
sum till 0=0;
*/
#include<iostream>
using namespace std;

int Sum (int n){
    if (n==0)
    {
        return 0;
    }
    
    int prevSum = Sum(n-1);
    return n+ prevSum;
}


int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;


    return 0;
}