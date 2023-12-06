// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter Binary Number: ";
//     cin >> n;
//     int digit;
//     int i = 0;
//     int deci = 0;
//     while (n!=0)
//     {
//         digit = n%10;
//         deci = deci + (pow(2,i)*digit);
//         i++;
//         n = n/10;
//     }
//     cout << deci << endl;
    
// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    int bit;
    int i = 0;
    int bin = 0;
    while (n!=0)
    {
        bit = n&1;
        bin = bin + (pow(10,i)*bit);
        i++;
        n = n>>1;
    }
    cout << bin << endl;
    
}