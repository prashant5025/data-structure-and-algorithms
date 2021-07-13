#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int f=0, s=0 ,t=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            f++;
        }
        else if(arr[i]==1)
            s++;
        else
            t++;
    }
    for (int i = 0; i < f; i++)
    {
        arr[i] = 0;
    }
    for (int i = f; i < f+s; i++)
    {
        arr[i] =1;

    }
    for(int i= f+s; i<f+s+t; i++){
        arr[i] =2;
    }
    
    
    
    
        
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
    
    
}