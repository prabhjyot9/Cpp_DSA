    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    // *                 *
    // * *             * *
    // * * *         * * * 
    // * * * *     * * * *
    // * * * * * * * * * *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 0; i <= 0; i++)
    {
       for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= n; j++)
            {   
                if (j<=i)
                {
                    cout <<"* "; 
                }
                else
                {
                    cout <<"  ";
                }
            }  

            for (int j = n; j >= 1; j--)
            {   
                if (j>i)
                {
                    cout <<"  "; 
                }
                else
                {
                    cout <<"* ";
                }
            }
            cout << endl;  
        }
        
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {   
                if (j<=i)
                {
                    cout <<"* "; 
                }
                else
                {
                    cout <<"  ";
                }
            }  
            for (int j = n; j >= 1; j--)
            {   
                if (j>i)
                {
                    cout <<"  "; 
                }
                else
                {
                    cout <<"* ";
                }
            }
            cout << endl;  
        }
    }        
}