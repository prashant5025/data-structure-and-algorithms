#include<bits/stdc++.h>
using namespace std;

int main(){
    //largest word in our sentence


    int n;
    cin>>n;
    cin.ignore();
    
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;

    int currlen=0;
    int maxlen=0;
    //for getting the charcter 
    int start=0, mxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] =='\0')
        {
            if(currlen>maxlen){
                maxlen = currlen;
                mxst =start;
            }
                currlen=0;
                start=i+1;
        }
        else
        currlen++;
        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for (int i = 0; i < maxlen; i++)
    {
        cout<<arr[i+mxst];
    }
    
    return 0;

}