#include<iostream>
#include<math.h>
#include<vector>

using namespace std;
bool isPrime(int a){
    int sqrtA = sqrt(a);
    if (a==2)
    {
        return true;
    }
    
    for (int i = 2; i < sqrtA; i++)
    {
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

void printArray(bool arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }

    cout << endl;
    
}

int countPrimes(int n){

    if (n==0 || n==1)
    {
        return 0;
    }
    
    int count = 0;

    // bool arr[5004];
    // for (int i = 2; i < 5004; i++)
    // {
    //     arr[i]=true;
    // }
    vector<bool> arr(n,true);
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (arr[i])
        {
            for (int j = 2; j*i < n; j++)
            {
                arr[j*i]=false;
            }
        }
        
    }

    for (int k = 0; k < n; k++)
    {
        if (arr[k])
        {
            count++;
        }
        
    }
    return count;
}

int main(){
    int n = 21;
    int ans = countPrimes(n);
    cout << "Numbers of prime = " << ans << endl;
}