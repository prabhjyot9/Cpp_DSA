#include <iostream>
#include <string>

using namespace std;

bool  validPallindromeII( string s){
        int i = 0;
        int j = s.length()-1;
        bool flag = true;
        while (i<j)
        {
            cout << "i = " << i <<" j = "<< j <<" " << s <<  endl;
            if (s[i]==s[j])
            {
                i++;
                j--;
            }
            else if(s[i+1]==s[j] && flag){
                s.erase(i,1);
                flag = false;
                j--;
            }
            else if(s[j-1]==s[i]  && flag){
                s.erase(j,1);
                j--;
                flag = false;
            }
            else{
                return false;
            }
        }
        return true;
}

int main() {
    string str = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    cout << validPallindromeII(str);
    
}