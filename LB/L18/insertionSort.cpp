#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

void selectionSort(int arr[], int size){
    printArray(arr,7);
    cout << endl;
    for (int i = 1; i < size; i++)
    {   
        int temp = arr[i];
        int j =i-1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            printArray(arr,7);
            cout << endl;
        }
        cout << " Value of j =" << j << endl;
        arr[j+1]=temp;
        printArray(arr,7);
        cout << endl;
        cout << endl;
    }
    printArray(arr,7);
    cout << endl;
    cout << endl;
}


int main(){
int arr[7] = {66,40,25,58,64,75,36};
selectionSort(arr,7);
printArray(arr,7);
}