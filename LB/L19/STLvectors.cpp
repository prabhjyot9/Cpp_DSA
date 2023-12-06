#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> a;
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;

    a.push_back(4);
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;

    a.push_back(4);
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;

    a.push_back(4);
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;

    a.push_back(4);
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;

    a.push_back(4);
    cout << "capacity --> "<< a.capacity() << endl;
    cout << "size --> " << a.size() <<endl <<endl;
}