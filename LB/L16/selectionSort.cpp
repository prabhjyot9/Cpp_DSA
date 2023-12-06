#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int smallest = INT32_MAX;
        int smallestIndex;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < smallest){
                smallest = arr[j];
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
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