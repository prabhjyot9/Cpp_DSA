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
    int num;

    for (int i = 1; i <= n; i++)
    {
        num = i;
        for (int j = n; j > i; j--)
        {
            cout <<" ";       
        }

        for (int j = 1; j <= i; j++)
        {   
            cout << num++;
        }
        num--;
        for (int j = 1; j < i; j++)
        {
            cout << --num;
        }
        
        cout << endl;
    }

    
    
}