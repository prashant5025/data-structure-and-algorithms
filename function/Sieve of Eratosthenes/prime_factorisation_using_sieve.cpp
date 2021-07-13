/*prime Factorisation using Sieve Eratosthenes

    while(n!=1){
        print spt[n]
        n=n/spt[n]
    }

20 -------> 10 ---------->5 -----------> 1
    2               2           5

*/



#include<iostream>
using namespace std;

void primefactor(int n){

    int spf[100]={0};
    for (int i = 2; i <= n; i++)
    {
        spf[i]=i;
    }
    
    for (int i = 2; i <=n; i++)
    {
        if(spf[i]==i){
            for (int j = i*i; j<=n; j+=i)
            {
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
            
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}

int main(){
    int n;
    cin>>n;

    primefactor(n);
}