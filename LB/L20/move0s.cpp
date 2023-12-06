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
    int resArr[size];
    int j = 0; 
    for (int i = 0; i < size; i++)
    {
        if(arr[i]!=0){
            resArr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < size; i++)
    {
        resArr[i] = 0;
    }
    
    printArray(resArr,size);
}


int main(){
    int arr[7] = {0,1,5,0,2,0,0};
    move0s(arr,7);
}