#include <iostream>
using namespace std;

bool validChar(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string validString(string str){
    int len = str.length();
    string temp;
    for (int i = 0; i < len; i++)
    {
        if(validChar(str[i])){
            temp.push_back(str[i]);
        }
    }
    return temp;
}

char toLowerCase(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

string tolowerString(string str){
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        temp.push_back(toLowerCase(str[i]));
    }
    return temp;
}

bool checkPalindrome(string str){
    int s = 0;
    int e = str.length()-1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){
    string str = "T?HIS#Aa010Aasih@t.";
    cout << "Palindrome or Not : " << checkPalindrome(tolowerString(validString(str))) << endl;
}