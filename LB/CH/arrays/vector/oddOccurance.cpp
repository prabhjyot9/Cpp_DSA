#include<iostream>
#include<vector>
using namespace std;

int oddOccurance(vector<int> brr){
    int start = 0;
    int end = brr.size() -1;
    while (start <= end)
    {
        int mid = end + ((start - end)/2);

        if ((brr[mid] != brr[mid-1]) && (brr[mid] != brr[mid+1]) )
        {
            return mid;
        }
        else if (!(mid&1) && (brr[mid] == brr[mid+1]))
        {
            start = mid+2;
        }
        else if ((mid&1) && (brr[mid] == brr[mid-1]))
        {
            start = mid+1;
        }
        else if ((mid&1) && (brr[mid] == brr[mid+1]))
        {
            end = mid-1;
        }
        else if (!(mid&1) && (brr[mid] == brr[mid-1]))
        {
            end = mid-2;
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

    vector<int> arr = {0,0,1,1,3,3,4,4,2,5,5};
    
    printArray(arr);
    cout << "Present at index " << oddOccurance(arr);

}