#include<iostream>
using namespace std;

int pivotEle(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid;
    while (start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid] < arr[0]){
            end = mid;
        }

        if(arr[mid] > arr[0]){
            start = mid + 1;
        }

        if (start == end)
        {
            return arr[start];
        }        
    }
    return -1;
}

int main(){

int arr[9] = {20,22,30,6,7,8,9,10,11};
int pivotElement = pivotEle(arr, 9);
cout << endl << pivotElement << endl;

}