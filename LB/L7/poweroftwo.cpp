#include<iostream>
using namespace std;
bool powOftwo(int n){
    int count = 0;
    while(n!=0){
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }
    if(count>1){
        return false;
    }
    return true;
}

int main(){
    int n; 
    cout << "Enter the number: ";
    cin >> n;
    if(powOftwo(n)){
        cout << "True";
    }
    else{
        cout << "False";
    }
}