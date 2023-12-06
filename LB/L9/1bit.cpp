#include<iostream>
using namespace std;

int stbitcount(int i){
    int count = 0;
    while (i!=0)
    {
        if (i & 1)
        {
            count++;
        }
        i = i >> 1;
    }
    return count;
    
}
int main(){
int i;
cout << "Enter The Number:" << endl;
cin >> i;
int starbits = stbitcount(i);
if(starbits == 1){
    cout << "Number belongs to 2's Power."<<endl;
}
else{
    cout << "Number does not belongs to 2's Power."<<endl;
}
}