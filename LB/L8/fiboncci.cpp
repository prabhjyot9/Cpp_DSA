#include<iostream>
#include<math.h>
using namespace std;

void Printfibo(int n){
    int first = 0;
    int second = 1;
    cout << first << " ";
    cout << second << " ";
    int next;
    for (int i = 3; i <= n ; i++)
    {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}

int main(){
    int n;
    cout << "Enter the value of n:"<<endl;
    cin >> n;
    Printfibo(n);
}