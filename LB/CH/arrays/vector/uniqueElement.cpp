#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,1,4,5,4,7,5,2};
    vector<int> count (100,0);
    for (int i = 0; i < arr.size(); i++){
        count[arr[i]]++;    
    }
    
    for (int i = 0; i < 100; i++)
    {
        if (count[i]==1)
        {
            cout << i << endl;
        }   
    }
}