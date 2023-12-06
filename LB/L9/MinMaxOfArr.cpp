#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " "; 
        }
    }

int minOfArray(int arr[], int size){
        int temp = arr[0];
        int num;
        for (int i = 0; i < size; i++)
        {
            num = arr[i];
            if (num < temp)
            {
                temp = arr[i];
            }
            
        }
        return temp;
    }

int maxOfArray(int arr[], int size){
        int temp = arr[0];
        int num;
        for (int i = 0; i < size; i++)
        {
            num = arr[i];
            if (num > temp)
            {
                temp = arr[i];
            }
            
        }
        return temp;
    }

int sumOfArray(int arr[], int size){
        int sum=0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];         
        }
        return sum;
    }


double avgOfArray(int arr[], int size){
        double sum=0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];         
        }
        double avg = sum/size;
        return (avg);
    }


int main(){
    //int a[5] = {4,5,8,7,3};
    
    int a[100];
    int size;
    
    cout << "Enter size of array: " <<endl;
    cin >> size;
    cout << endl;
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;


    cout << "Required Array : ";
    PrintArray(a,size);
    cout << endl;
    cout << "Minimum value from array = " << minOfArray(a,size) <<endl;
    cout << "Maximum value from array = " << maxOfArray(a,size) <<endl;
    cout << "Sum of array = " << sumOfArray(a,size) <<endl;
    cout << "Average of array = " << avgOfArray(a,size) <<endl;
}