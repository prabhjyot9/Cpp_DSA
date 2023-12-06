#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int main(){
int arr[6] = {66,25,58,64,75,36};
selectionSort(arr,6);
printArray(arr,6);
}