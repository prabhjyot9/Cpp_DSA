#include<iostream>
#include<vector>
using namespace std;

int lastOccurance(vector<int> brr, int target){
    int start = 0;
    int end = brr.size() -1;
    int lastOccu = -1;
    while (start <= end)
    {
        int mid = end + ((start - end)/2);

        if (brr[mid] == target)
        {
            lastOccu = mid;
            start = mid + 1;
        }
        else if (brr[mid] > target)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return lastOccu; 
}

void printArray(vector<int> crr){
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] <<" ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {1,2,2,2,2,3,4,4,4,4,4,5,6,7,8,9,9,9,9,10};
    
    printArray(arr);
    cout << "Present at index " << lastOccurance(arr,2);

}