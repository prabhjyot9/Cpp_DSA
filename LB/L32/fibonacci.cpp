#include<iostream>
using namespace std;
int fibonacciSeries(int n){
    if (n == 1)
    {
        return 0;
    }
    if (n == 2){
        return 1;
    }
    return (fibonacciSeries(n-1)+fibonacciSeries(n-2));
}
void fiboForloop(int n){
    int a = 0;
    int b = 1;
    int temp;
    cout << a << endl;
    cout << b << endl;
        
    for (int i = 2; i < n; i++)
    {
        temp = a;
        a = b;
        b = b + temp;
        
        cout << b << endl;
    }
}
int main(){
    cout << "Enter number "<< endl;
    int n;
    cin >> n;
    cout << fibonacciSeries(n);
    fiboForloop(n);
}