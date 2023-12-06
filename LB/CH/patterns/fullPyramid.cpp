//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout <<" ";       
        }

        for (int j = 1; j <= i; j++)
        {   
            if (i==j||j==1)
            {
                cout <<"* "; 
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout <<" ";       
        }

        for (int j = n; j >= i; j--)
        {   
            if (i==j||j==n)
            {
                cout <<"* "; 
            }
            else{
                cout <<"  ";
            }
        }
        cout << endl;
    }
    
}