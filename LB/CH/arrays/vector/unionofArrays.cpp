#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,5,5,3,2};
    vector<int> brr = {2,3,6,1,7};
    vector<int> uni;
    vector<bool> visited (100,false);
    for (int i = 0; i < arr.size(); i++)
    {
        if (!visited[arr[i]])
        {
            uni.push_back(arr[i]);
            visited[arr[i]] = true;
        }  
    }
    
    for (int i = 0; i < brr.size(); i++)
    {
        if (!visited[brr[i]])
        {
            uni.push_back(brr[i]);
            visited[brr[i]] = true;
        }    
    }
    
    for (int i = 0; i < uni.size(); i++)
    {
        cout << uni[i] << " "; 
    }
}