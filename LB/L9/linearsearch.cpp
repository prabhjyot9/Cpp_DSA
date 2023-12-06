#include<iostream>
using namespace std;
bool searchIfPresent(int arr[], int size, int ser){
    for (int i = 0; i < size; i++)
        {
            if (arr[i]==ser)
            {
                return true;
            }
                    
        }
    return false;
}

int getindex(int arr[], int size, int ser){
    for (int i = 0; i < size; i++)
        {
            if (arr[i]==ser)
            {
                return i;
            }
                    
        }
    return 0;
}

int main(){
    int a[10] = {-12,41,54,-21,35,8,9,-5};
    int search;
    cout << "Enter the number you want search:" <<endl;
    cin >> search;
    bool isPresent = searchIfPresent(a,10,search);
    int loc = getindex(a,10,search);
    if (isPresent)
    {
        cout << "The number is present. At index " << loc << endl;
    }
    else{
        cout << "The number is not present." << endl;
    }
    
}
