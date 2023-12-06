#include<iostream>
using namespace std;

int main(){
    int arr[6][5] = {
        {1,3,54,1,545},
        {215,15,54,2,6},
        {15,95,869,263,71},
        {2,154,2158,214,88},
        {1,2,3,4,5}
    };
    for (int i = 0; i < 6; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j];    
        }
        cout << "Sum for "<< i << "th row is " << sum;
        cout << endl;
    }
}