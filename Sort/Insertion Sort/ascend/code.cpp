#include <iostream>
using namespace std;

void readArray(int a[],int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}


void insertionSort(int a[],int n){
    int i,j,key;

    for(i=1;i<n;i++){
        key = a[i];
        j=i-1;

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


int main() {
    int i,n;
    cout<<"Enter the array size :\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements:\n";
    readArray(arr,n);

    cout<<"Entered array: \n";
    printArray(arr,n);

    cout<<"Sorted array:\n";
    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
    }