#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int start, int end){
    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main(){
    int array[] = {8,10,22,34,50};
    int size = sizeof(array)/sizeof(array[0]);
    int start = 0;
    int end = size-1;
    
    cout<<"Array: ";
    printArray(array,size);

    reverseArray(array,start,end);
    
    cout<<"\nReversed Array: ";
    printArray(array,size);
}