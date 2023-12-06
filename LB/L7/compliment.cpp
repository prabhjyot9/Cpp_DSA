#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter  Number:" << endl;
    cin >> n;
    int bit;
    int cbit;
    int comp = 0;
    int i = 0;
    if (n==0)
    {
        comp = 1;
    }
    
    while (n!=0)
    {
        bit = n&1;
        cbit = !bit;
        comp = comp + (cbit * pow(2,i));
        i++;
        n=n>>1;
    }
    cout << "The Compliment of Number = " << comp; 
}