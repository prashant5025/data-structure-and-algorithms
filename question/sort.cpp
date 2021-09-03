#include<iostream>
using namespace std;


void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    


}

void selectionSort(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] = arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    
}



int main(){

    int n; cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }


    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    



    return 0;




}