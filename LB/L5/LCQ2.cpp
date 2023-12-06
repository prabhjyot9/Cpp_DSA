// only if input is binary

#include<iostream>
using namespace std;
int main(){
    unsigned int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int deci = n;
    int count = 0;
    while(n>0){
        if (deci%2==1)
        {
            count++;
        }
        
        n = n/2;
    }
    cout << "Number of 1's = " << count << endl;
}

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//     int count = 0;
//     while(n>=1){
//         if (n%2==1)
//         {
//             count++;
//         }
//         n = n/2;
//     }
//    return count;
// }
// };