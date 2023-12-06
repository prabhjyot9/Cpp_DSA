#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[],int size){
    int range = size/2;
    for (int i = 0; i < range; i++)
    {
        swap(arr[i],arr[(size-i-1)]);
    }
    
}

void reverseArray2(int arr[],int size, int m){
    int start = m + 1;
    int range = (size-m)/2;
    for (int i = start; i < start+range; i++)
    {
        swap(arr[i],arr[(size-i+ m)]);
    }
    
}

int main(){
    int eveArr[6] = {11,20,5,94,35,7};
    printArray(eveArr,6);
    reverseArray2(eveArr,6,1);
    printArray(eveArr,6);

    int oddArr[9] = {11,94,57,35,7,54,36,87,90};
    printArray(oddArr,9);
    reverseArray2(oddArr,9,2);
    printArray(oddArr,9);
}