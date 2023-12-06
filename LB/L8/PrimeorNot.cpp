#include<iostream>
#include<math.h>
using namespace std;



bool isPrime(int n){
    bool a = true;
    for (int i = 2; i < n ; i++)
    {
        if (n%i==0)
        {
            return false;
        }   
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the value of n:"<<endl;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number is Prime." << endl;
    }
    else{
        cout << "Number is Not Prime." << endl;
    }
}