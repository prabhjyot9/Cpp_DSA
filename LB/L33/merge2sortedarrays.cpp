#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}
void ques(int arr1[],int size1, int arr2[],int size2, int arr3[]){
    int i =0; 
    int j =0;
    for (int k = 0; k < size1+size2; k++)
    {
        
        if ((arr1[i] < arr2[j]) && i <= size1 && j <= size2)
        {
            arr3[k] = arr1[i];
            i++;
        }
        else if ((arr1[i] >= arr2[j]) && i <= size1 && j <= size2)
        {
            arr3[k] = arr2[j];
            j++;
        }
        printArr(arr3,7);
        cout <<endl;
    }
        
}

int main(){
    int arr1[4] = {1,3,5,12};
    int arr2[3] = {1,4,12};
    int arr3[7] = {0};
    ques(arr1,4,arr2,3, arr3);
    
    
    

}