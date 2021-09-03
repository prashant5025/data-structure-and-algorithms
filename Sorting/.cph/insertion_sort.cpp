#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n){
    int key;
    int i,j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i;
        while (arr[j-1] > key && j>=1)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
    
}




int main(){

    int n; cin>> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[n]=rand();
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}