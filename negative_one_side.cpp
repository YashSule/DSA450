/*

----- Approach 1 ------

#include<iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<< arr[i] << " ";
}

void sortArray(int arr[], int size){

    sort(arr,arr+size);

}

int main(){

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(int);

	sortArray(arr, n);
    printArr(arr,n);

	return 0;
}
*/

//----- Approach 2 ------

#include<iostream>
using namespace std;

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<< arr[i] << " ";
}

void sortArray(int arr[],int size){
    
    int j=0;
    for (int i = 0; i < size; i++)
    {
        if( arr[i]<0 ){
            if( i != j ){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
    

}

int main(){

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(int);

	sortArray(arr, n);
    printArr(arr,n);

}