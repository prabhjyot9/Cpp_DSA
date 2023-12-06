#include<iostream>
using namespace std;

void reverseArray(int a[],int size){
    int half = (size/2)+1;
    int temp;
    for (int i = 0; i < half; i++)
    {
        temp = a[i];
        a[i] = a[size - i- 1];
        a[size - i -1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " "; 
    }
    cout << endl;
}
void reverseArray2(int a[],int size){
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " "; 
    }
}
    

int main(){
int arr[11] = {2,10,45,12,36,78,98,74,58,64,1};
reverseArray(arr,11);
reverseArray2(arr,11);
}