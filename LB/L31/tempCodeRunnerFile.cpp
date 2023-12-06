#include<iostream>
using namespace std;
int factorial(int n){
    if (n == 0){
        return 1;
    }
    int ans;
    ans = n * factorial(n-1);
    // cout << (n) << "! = " << ans << endl; 
    return ans;
}
int powerex(int x, int y){
    int count = 0;
    if (count == y)
    {
        return 1;
    }
    count++;
    // int ans = 1;
    // ans = x * powerex(x,y-1);
    return x * powerex(x,y-1);
}

int powerexLB(int x, int y){
    if (y == 0)
    {
        return 1;
    }
    // int ans = 1;
    // ans = x * powerex(x,y-1);
    return x * powerex(x,y-1);
}

void printRevCounting(int n){
    if (n == 0)
    {
        return ; // void me return kaam nahi karega
    }
    cout << n <<endl;
    printRevCounting(n-1);
}
// int printRevCounting(int n){
//     if (n == 0)
//     {
//         return 0;
//     }
//     cout << n <<endl;
    
//     return printRevCounting(n-1);
// }

int main(){
    // // Factorial
    // cout << "Enter the number" << endl;
    // int n;
    // cin >> n;
    // cout << "Factorial = " <<factorial(n) << endl;

    // // Power Function
    // cout << "Enter the x" << endl;
    // int x;
    // cin >> x;

    // cout << "Enter the y" << endl;
    // int y;
    // cin >> y;

    // cout << x << " Raised to the power " << y << " = " << powerex(x,y) << endl;
    // cout << x << " Raised to the power " << y << " = " << powerexLB(x,y) << " (LB)" << endl;

    cout << "Enter Number " << endl;
    int n;
    cin >> n;
    printRevCounting(n);
}