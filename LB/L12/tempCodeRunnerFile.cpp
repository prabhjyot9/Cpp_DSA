#include<iostream>
using namespace std;

int peakEle(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid;
    while (start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }

        if(arr[mid] > arr[mid+1]){
            end = mid;
        }

        if (start == end)
        {
            return arr[start];
        }        
    }
    return -1;
}

int main(){

int arr[16] = {2,5,9,16,20,24,30,48,40,37,36,29,25,18,11,3};
int peakElement = peakEle(arr, 16);
cout << endl << peakElement << endl;

}