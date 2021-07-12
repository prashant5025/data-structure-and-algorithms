

/*Euclid Algorithm to Find GCD

24 = 2 x 2 x 2 x 3
                    = 6
42 = 2 x 3 x 7 
*/

#include<iostream>
using namespace std;


int gcd(int a, int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;

    }
    return a;

}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;


    return 0;

}