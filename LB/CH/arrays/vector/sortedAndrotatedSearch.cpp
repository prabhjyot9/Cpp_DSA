#include<iostream>
#include<vector>
using namespace std;

int searchEle(vector<int> brr, int target){
    int start = 0;
    int end = brr.size() -1;
    while (start <= end)
    {
        int mid = end + ((start - end)/2);

        if (brr[mid] == target)
        {
            return mid;
        }
        // else if ( brr[mid] > brr[0] && brr[mid] > target)
        // {
        //     end = mid - 1;
        // }
        else if ( brr[mid] > brr[0] && brr[mid] < target)
        {
            start = mid + 1;
        }
        else if ( brr[mid] < brr[0] && brr[mid] > target)
        {
            end = mid - 1;
        }
        // else if ( brr[mid] < brr[0] && brr[mid] < target)
        // {
        //     start = mid + 1;
        // }
        mid = end + ((start - end)/2);
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

    vector<int> arr = {6,7,9,12,1,2,3,4,5};
    
    printArray(arr);
    int target = 9;
    cout << "Element "<< target <<" is at index: " << searchEle(arr,target);

}