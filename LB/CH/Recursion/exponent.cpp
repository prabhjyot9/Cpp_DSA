#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int power(int a, int b){
    
    int ans = 1;

    if (b == 1)
    {
        return a;
    }
    
    
    if (b&1)
    {
        ans = a * ans;
    }
    ans = ans * power(a,(b/2));
    ans = ans * power(a,(b/2));
    return ans;
}

int main(){
    int a = 3;
    int b = 10;
    int ans = power(a,b);
    cout << "Ans = " << ans << endl;
}