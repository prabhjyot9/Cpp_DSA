#include<iostream>
#include<math.h>
using namespace std;



void PrintCount(int n){
    for (int i = 1; i <= n ; i++)
    {
        cout << i <<" ";
    }
}

int main(){
    int n;
    cout << "Enter the value of n:"<<endl;
    cin >> n;
    PrintCount(n);
}