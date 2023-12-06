#include<iostream>
#include<vector>
using namespace std;

void swaptemp(vector<int> &brr,int start, int end){
    int temp;
    temp = brr[start];
    brr[start] = brr[end];
    brr[end] = temp;
}

void printArray(vector<int> crr){
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] <<" ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    
    for (int i = 0; i < arr.size(); i++){
        int k = (i+2)%(arr.size());
        swaptemp(arr,i,k);
        printArray(arr);      
    }
    
    printArray(arr);

}