#include <iostream>
using namespace std;
char maxOccChar(string str){
    int arr[26] ={0};
    int num;
    for (int i = 0; i < str.length(); i++)
    {
        num = str[i] -'a';
        arr[num]++;
    }

    int ans;
    int max = -1;
    int j;
    for (j = 0; j < 26; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            ans = j;
        }
        
    }
    char ch = 'a' + ans;
    return ch;
}

int main(){
    string str;
    cout << "Enter string:" <<endl;
    cin >> str;
    cout << endl << "Maximum Ocuuring Character is " << maxOccChar(str) << endl;
}