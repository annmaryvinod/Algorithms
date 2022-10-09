#include <iostream>
using namespace std;

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


    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    cout<<endl;
}


int main() {
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<endl;
    cout<<"Entered array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    cout<<"Sorted Array:\n";
    insertionSort(arr,n);

    return 0;
    
    }