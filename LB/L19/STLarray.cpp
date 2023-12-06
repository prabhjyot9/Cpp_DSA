#include<iostream>
#include<array>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}
int main(){
    array<int,6> a = {1,2,3,4,5,6};
    int sizea = a.size();
    cout << "Size of array a is " << sizea <<endl;
    cout << a.empty() <<endl;
    // printArray(a,sizea);
    
    
    array<int,6> b = {1,2,3,4};
    int sizeb = b.size();
    cout << b.empty() <<endl;
    cout << "Size of array b is " << sizeb <<endl;
    cout << "First element --> " <<b.front() << endl;
    cout << "Last element --> " <<b.back() << endl;
    // printArray(b,sizeb);
    for (int i = 0; i < 6; i++)
    {
        cout << b.at(i) << " "; 
    }
    cout << endl;

    array<int,6> c = {};
    int sizec = c.size();
    cout << c.empty() <<endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c.at(i) << " "; 
    }
    cout << endl;
}