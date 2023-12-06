#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,1};

    for (int i = 2; i< 10; i++)
    {
        
        arr.push_back((arr[i-2] + arr[i-1]));
    }
    
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; 
    }
}