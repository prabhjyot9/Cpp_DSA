#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int* solve(int* p){
    p = p+1;
    return p;
}

int main(){
    
    int a =5;
    // long add = &a;       //IMPORTANT             // Addresss can be stored in POINTERS only;
    int* p = &a;
    int** q = &p;
    
    cout << "BEFORE" << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << endl;
    
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << endl;
    
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << **q << endl;
    cout << endl;

    p  = solve(p);

    cout << "AFTER" << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << endl;
    
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << endl;
    
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << **q << endl;
    cout << endl;
}