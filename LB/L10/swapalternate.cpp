#include<iostream>
using namespace std;
void swapAlternate(int a[],int size){
    for (int i = 0; i < size;i=i+2)
    {
        if (i+1<size)
        {
          swap(a[i],a[i+1]);  
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " "; 
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    swapAlternate(arr,6);
}