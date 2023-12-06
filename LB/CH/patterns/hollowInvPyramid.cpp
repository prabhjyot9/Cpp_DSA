    // * * * * * * * *
    // *           *
    // *         *
    // *       *
    // *     *
    // *   *
    // * *
    // *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i==n)
            {
                cout <<"* ";       
            }
            else{
                if (i==j || j==1)
                {
                    cout <<"* "; 
                }
                else{
                    cout <<"  "; 
                }
            }
        }
        cout << endl;
    }
    
}