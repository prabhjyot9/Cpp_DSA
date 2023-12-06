#include <iostream>
#include <string>
using namespace std;

void unionOf2str(string s, string t)
{
    bool arr[26] = {false};
    int c;
    int j;
	for (int i=0;i<s.length();i++)
    {
        c = int(s[i]) - 97;
        arr[c] = true;
    }
    for (int i=0;i<t.length();i++)
    {
        c = int(t[i]) - 97;
        arr[c] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]==true)
        {
            c = i+97;
            cout << char(c);
        }
    }
}   


int main()
{
	string str = "hello";
    string stra = "world";
	unionOf2str(str, stra);
	return 0;
}
