#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid;
    while (start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid]==key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid -1;
        }        
    }
    return -1;
}

int main(){

int arr[11] = {2,5,9,16,20,24,26,30,36,40,42};
int index = binarySearch(arr, 11, 2);
cout << endl << index << endl;

}