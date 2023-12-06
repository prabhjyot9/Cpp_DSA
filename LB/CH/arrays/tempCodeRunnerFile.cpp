#include <iostream>
using namespace std;

void printDouble(int arr[], int n){
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i]*2 <<" ";
    }
}
int main(){
    cout << "hi";
    int arr[5]={1,5,14,38,9};
    printDouble(arr, 5);
}