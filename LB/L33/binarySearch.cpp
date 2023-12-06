#include<iostream>
using namespace std;
bool binarySeach(int arr[], int start, int end, int key){
    int mid = (start + end)/2;
    if(start > end){
        return false;
    }
    if (key == arr[mid])
    {
        return true;
    }
    if (key > arr[mid])
    {
        return binarySeach(arr,mid+1,end,key);
    }
    else if (key < arr[mid])
    {
       return binarySeach(arr,start,mid-1,key);
    }
    else{
        return false;
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,7,8,11,20,23};
    int key;
    cout << "Enter key" << endl;
    cin >> key;
    if(binarySeach(arr,0,9,key))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }
}