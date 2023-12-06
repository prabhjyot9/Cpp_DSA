#include<iostream>
#include<math.h>
using namespace std;
bool isEven(int a){
    if (a%2==0)       // OR if(a&1!=0)
    {
        return true;
    }
    
    return false;
                //OR
    // else{
    //     return false;
    // }    
}


int main(){
    int a;
    cout << "Enter the number:"<<endl;
    cin >> a;
    if (isEven(a))
    {
        cout << "Number is even." << endl;
    }
    else{
        cout << "Number is odd." << endl;
    }
    
}