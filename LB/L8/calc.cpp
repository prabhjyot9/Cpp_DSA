#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    cout << "Enter value of a :" <<endl;
    cin >> a;
    cout << "Enter value of b :" <<endl;
    cin >> b;
    char oper;
    cout << "Enter The Operator :";
    cin >> oper;
    int ans;
    switch(oper){
        case '+' : ans = a + b;
            break;
        case '-' : ans = a - b;
            break;
        case '*' : ans = a * b;
            break;
        case '/' : ans = a / b;
            break;
        case '%' : ans = a % b;
            break;
        default : ans = 0;
    }
    cout << a <<" " << oper << " " << b << " = " << ans <<endl;
}