#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int fib(int a){
    
    int ans = 1;

    if (a == 1)
    {
        return ans;
    }

    ans = a * fib(a-1);

    return ans;
}

int main(){
    int a = 5;
    int ans = fib(a);
    cout << "Ans = " << ans << endl;
}