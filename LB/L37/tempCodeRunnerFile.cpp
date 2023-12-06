#include<iostream>
#include<math.h>
using namespace std;
void powerSet(int arr[],int size){
    int newSize = pow(2,size);
    int arr[newSize] = {0};
    cout << newSize;
}
int main(){
    int arr[5]={0};
    int n= 5; 
    powerSet(arr,5);
}