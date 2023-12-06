#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,5,6,7,8,3,9,10};
    int target = 9;
    int temp = 0;
    int count = 0;
    vector<vector<int>> ans;
    
    for (int i = 0; i < arr.size() - 1; i++){
        for (int j = i+1; j < arr.size(); j++)
        {
            temp = arr[i] + arr[j];
            if(temp == target)
            {
                count++;
                ans.push_back({arr[i],arr[j]});
            }   
        }
            
    }
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;  
    }
}