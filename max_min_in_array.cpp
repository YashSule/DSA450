#include<iostream>
using namespace std;

int maxElement(int arr[],int size){
    int result = 0;
    for(int i=0; i<size; i++){
        if(result < arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int minElement(int arr[], int size){
    int result = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < result){
            result = arr[i];
        }
    }
    return result;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int array[] = {3000,8,10,22,1,34,50};
    int size = sizeof(array)/sizeof(array[0]);

    cout<<"Array: ";
    printArray(array,size);

    int min = minElement(array,size);
    cout<<"\nMin Element: "<<min<<endl;

    int max = maxElement(array,size);
    cout<<"Max Element: "<<max<<endl;

    
}