#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int digit;
    int pod = 1;
    int sod = 0;
    while(n>0){
        digit = n%10;
        sod += digit;
        pod *= digit;
        n = n/10;
    }
    cout << "Sum of digits = " << sod << endl;
    cout << "Product of digits = " << pod << endl;
    cout << "Result = " << (pod-sod) << endl; 
}