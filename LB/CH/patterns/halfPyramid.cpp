// Ek pattern aisa bhi hoga uske liye line 20 ka comment
// Inverted half pyramid
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 


// Actual Pattern
// *
// * *
// * * *
// * * * *
// * * * * *


// output me numbers ke liye 
// replace line 36 with     cout << j <<" ";  
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // i=j in initialisation , j <= n in condition
            cout <<"* ";       
        }
        cout << endl;
    }
    
}