// DATATPES AND VARIABLES

#include<iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;

    int b = 0123;                        // It will convert number into octal form as it is starting with 0.
    cout << b << endl; 

    char c = 'a';                       // It will allow only single character.
    cout << c << endl;

    bool b1 = true;
    cout << b1 << endl;

    float f = 12.3;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(a);           // Give size of datatype in bytes.
    cout << "Size of a is : " << size << " bytes." << endl;

    int t = 'a';                  // Typecasting
    cout << t << endl;

    char s = 67;                // Typecasting
    cout << s << endl;

    char s1 = 123456;                // Typecasting
    cout << s1 << endl;
}