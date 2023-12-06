#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> brr, int target){
    int start = 0;
    int end = brr.size() -1;
    while (start <= end)
    {
        int mid = end + ((start - end)/2);

        if (brr[mid] == target)
        {
            return mid;
        }
        else if (brr[mid] > target)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return -1; 
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
    
    printArray(arr);
    cout << "Present at index " << binarySearch(arr,6);

}