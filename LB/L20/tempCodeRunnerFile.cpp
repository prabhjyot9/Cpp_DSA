#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void move0s(int arr[],int size){
    int j = 0; 
    int temp;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]!=0){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    
    printArray(arr,size);
}


int main(){
    int arr[7] = {0,1,5,0,2,0,0};
    move0s(arr,7);
}