#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> brr){
    int start = 0;
    int end = brr.size() -1;
    while (start <= end)
    {
        int mid = end + ((start - end)/2);

        if (brr[mid] > brr[mid+1] && brr[mid] > brr[mid-1])
        {
            return brr[mid];
        }
        else if (brr[mid] > brr[mid-1])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
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

    vector<int> arr = {1,2,3,4,10,8,1};
    
    printArray(arr);
    cout << "Peak is " << peakElement(arr);

}