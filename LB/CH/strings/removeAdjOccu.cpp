#include <iostream>
#include <string>

using namespace std;

string removeAdjOccu( string s){
    string ans ="";
    for (int i = 0; i < s.length(); i++)
    {
        if ((ans.length()>0) && (s[i]==ans[ans.length()-1]))
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main() {
    string str = "daabcbccbcb";
    cout << removeAdjOccu(str);
    
}