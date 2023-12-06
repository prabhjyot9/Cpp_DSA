#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    string str = "My name is Prabhjyot";
    int start = 0, end;
    while (start < str.length())
    {
        end = start;
        while (end < str.length() && str[end]!=' ')
        {
            end++;
        } 
        reverse((str.begin()+start),(str.begin()+end));
        start = end+1;
    }
    cout << str << endl;
}