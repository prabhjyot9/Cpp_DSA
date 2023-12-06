#include<iostream>
using namespace std;
int arraySum(int arr[],int size){
    if(size == 0){
        return 0;
    }
    int sum;
    sum = arr[0] + arraySum(arr+1,size-1);
    return sum;
}

bool sortedornot(int arr[], int size){
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return sortedornot(arr+1,size-1);
}

int main(){
    int arr[5] = {1,2,3,6,5};
    if (sortedornot(arr,5))
    {
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    cout << "Array sum = " <<arraySum(arr,5);
}
