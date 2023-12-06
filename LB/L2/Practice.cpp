/* QUESTION IS IF WE TYPECAST NEGETIVE NUMBER FROM UNSIGNED INT TO INT.
    IT GIVES A BIG NUMBER
 Like --

unsigned int e = -221;
    cout << e << endl;

Returns 4294967075.

Question is to find a negetive number which returns the same number if typecasted the same way.
*/
#include<iostream>
using namespace std;

int main(){
    unsigned int a = -5;
    int b;
    int count;
    b = a;
    cout << b <<endl;
    cout << a <<endl;
    cout << (b+1) <<endl;
    cout << (a+1) <<endl;
    cout << (2147483648*2);
}