#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
    
}
int main(){
    int a, b;
    cout << "Enter value of a :" <<endl;
    cin >> a;
    cout << "Enter value of b :" <<endl;
    cin >> b;
    cout << a <<" raised to the power " << b << " = " << power(a,b) <<endl;
                            //OR
    // int ans = power(a,b);
    // cout << ans;
}