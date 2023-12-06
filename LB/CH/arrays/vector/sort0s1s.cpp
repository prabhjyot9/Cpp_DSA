#include <iostream>
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
    vector<int> arr = {1,1,1,0,0,1,0,0,0,0,};
    int s = 0;
    int e = arr.size() -1 ;
    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        if (arr[e] == 1)
        {
            e--;
        }
        
        if (arr[s] == 1 && arr[e] == 0)
        {
            // int temp;
            // temp = arr[s];
            // arr[s] = arr[e];
            // arr[e] = temp;

            swaptemp(arr,s,e);
            s++;
            e--;
        }
        
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] <<" ";
        }
        cout << endl;
    }

    printArray(arr);

}