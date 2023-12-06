#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,5,6,7,8,3,9,10};
    int target = 9;
    int temp = 0;
    vector<vector<int>> ans;
    
    int count = 0;
    for (int i = 0; i < arr.size() - 2; i++){
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                temp = arr[i] + arr[j] + arr[k];
                if(temp == target)
                {
                    ans.push_back({arr[i],arr[j],arr[k]});
                    count++;
                } 
            }  
        }
            
    }
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;  
    }
}