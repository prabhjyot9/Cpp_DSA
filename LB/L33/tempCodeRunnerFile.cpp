#include<iostream>
using namespace std;

string combineString(string string1, string string2){
    int length1= string1.length();
    int length2 = string2.length();
    int length3 = length1 + length2;
    string string3;
    // if (length1 = length2)
    // {
    //     for (int i = 0; i < length3/2; i++)
    //     {
    //         string3.push_back(string1.at(i));
    //         string3.push_back(string2.at(i));
    //     }
    // }
    
    if (length1 > length2)
    {
        for (int i = 0; i < length2; i++)
        {
            string3.push_back(string1.at(i));
            string3.push_back(string2.at(i));
        }
        for (int j = length2; j < length1; j++)
        {
            string3.push_back(string1.at(j));
        }
    }
    
    // if (length2 > length1)
    // {
    //     for (int i = 0; i < length1; i++)
    //     {
    //         string3.push_back(string1.at(i));
    //         string3.push_back(string2.at(i));
    //     }
    //     for (int j = length1; j < length2; j++)
    //     {
    //         string3.push_back(string2.at(j));
    //     }
    // }
    
    return string3;
}

int main(){
    string s1 = "abcde";
    string s2 = "pqr";
    string ans = combineString(s1,s2);
    cout << ans <<endl;
}