#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter The Number:" << endl;
    cin >> n;
    int digit;
    int rev = 0;
    while (n!=0)
    {
        digit = n%10;
        if ((rev>INT_FAST32_MAX/10)||(rev<INT_FAST32_MIN/10)){
            rev = 0;
            break;
        }
        rev = (rev*10) + digit;
        n=n/10;
    }
    cout << "The Reverse of Number = " << rev;
    
}