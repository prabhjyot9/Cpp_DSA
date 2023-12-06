#include<iostream>
using namespace std;
int duplicatekey(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        int val1 = a[i];
        for (int j = (size-1); j > i; j--){
            int val2 = a[j];
            if (val2 == val1)
            {
                return a[j];
            }
        }
        
    } 
    return 0;  
}

int main(){
    int arr[9] = {1,2,3,8,4,5,6,7,8};
    cout << duplicatekey(arr,9);
}

// ans = ans ^ a[i]   // xor