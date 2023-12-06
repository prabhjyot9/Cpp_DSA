#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 15;
    int res = 1;
    while (b > 0)
    {
        cout << "Before Execution:  a = " << a << " b = " << b << " result = "<< res << endl;
        if (b&1)
        {
            res = res * a;        
        }
        a = a*a;
        b = b >> 1;
        cout << "After Execution:   a = " << a << " b = " << b << " result = "<< res << endl;
    }
    cout <<"The result is " << res << endl;
}