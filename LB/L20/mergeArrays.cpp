#include<iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeArray(int arr1[], int size1, int arr2[], int size2){
    int resSize = size1 + size2;
    int mergedArray[resSize];
    int j=0,k =0;
    for (int i = 0; i < resSize ; i++)
    {
        if (arr1[j]<=arr2[k])
        {
            mergedArray[i]=arr1[j];
            j++;
        }

        else if (arr1[j]>arr2[k])
        {
            mergedArray[i]=arr2[k];
            k++;
        }
        
    }
    cout << endl;
    printArray(mergedArray,resSize);
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> mergedList;
        
    int i = 0, j = 0;
        
    while (i < m && j < n) {

        if (nums1[i] <= nums2[j]) {
            mergedList.push_back(nums1[i]);
            ++i;
        }
        else {
            mergedList.push_back(nums2[j]);
            ++j;
        }

	}

    while (i < m) {
        mergedList.push_back(nums1[i]);
        ++i;
    }

    while (j < n) {
        mergedList.push_back(nums2[j]);
        ++j;
    }       
}

int main(){
    int eveArr[9] = {2,4,6,8,8,10,0,0,0};
    printArray(eveArr,9);

    int oddArr[7] = {1,3,5,7,8,9,9};
    printArray(oddArr,7);

    mergeArray(eveArr,6,oddArr,7);
}