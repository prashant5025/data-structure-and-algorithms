#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int st =0;
    int ed =n-1;

    while(st<ed){
        swap(arr[st],arr[ed]);
        st++;
        ed--;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}


int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int start =0;
    int end =n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}
*/
#include<iostream>
using namespace std;

int main(){
    int n,key;
    cin>>n>>key;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            cout<<arr[i]<<endl;
            break;
        }
    

        
    }
    return 0;
   
    
    
    
}