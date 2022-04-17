#include<iostream>
#include <algorithm>
using namespace std;

int kthMinElement(int arr[], int size, int k){
    sort(arr,arr+size);
    return arr[k-1];
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int array[] = {3000,8,10,22,1,34,50};
    int size = sizeof(array)/sizeof(array[0]);
    int k = 2;

    cout<<"Array: ";
    printArray(array,size);
    int min = kthMinElement(array, size, k);
    cout<<"\nK-th Min Element: "<<min<<endl;

    
}