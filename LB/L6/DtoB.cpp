#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Decimal Number:" << endl;
    cin >> n;
    int bit;
    int bin = 0;
    int i = 0;
    while (n!=0){
        bit = n & 1;
        bin = (pow(10,i) * bit) + bin;
        n = n >> 1;
        i++;
    }
    cout << "The Binary Number = " << bin << endl;
}