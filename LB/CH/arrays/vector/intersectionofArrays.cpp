#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,5,7,2};
    vector<int> brr = {2,3,6,2,4,7};
    vector<int> inter;
    vector<bool> visited (100,false);
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j] && visited[arr[i]] == false)
            {
                inter.push_back(arr[i]);
                visited[arr[i]] = true;
            }
        }
        
    }
    
    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i] << " "; 
    }
}