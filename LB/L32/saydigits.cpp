#include<iostream>
using namespace std;
void saydigits(int n){
    if (n==0)
    {
        return;
    }
    int digit = n%10;
    string s[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    saydigits(n/10);
    cout << s[digit] <<" ";
}
int main(){
    int n;
    cout <<"Enter Number" <<endl;
    cin >> n;
    saydigits(n);

}