//     1
//    232
//   34543
//  4567654
// 567898765

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
            if (j==1 || j == i || i == n)
            {
                cout << j <<" ";
            }
            else{
                cout << "  ";
            }
            
        }
        
        cout << endl;
    }

    
    
}