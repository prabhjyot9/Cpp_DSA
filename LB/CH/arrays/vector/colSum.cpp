#include<iostream>
using namespace std;

int main(){
    int arr[6][5] = {
        {1,3,54,1,545},
        {15,15,54,2,6},
        {15,95,869,263,71},
        {2,154,2158,214,88},
        {21,546,563,453,1453}
    };
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[j][i];    
        }
        cout << "Sum for "<< i << "th column is " << sum;
        cout << endl;
    }
}