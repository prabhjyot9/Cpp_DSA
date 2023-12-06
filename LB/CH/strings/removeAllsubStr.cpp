#include <iostream>
#include <string>

using namespace std;

string removeAllsubStr( string s, string part){
    int pos = s.find(part);
    while (pos!= string::npos)
    {
        s.erase(pos,part.length());
        pos = s.find(part);

    }
    return s;
}

int main() {
    string str = "daabcabcabbc";
    string part ="abc";
    cout << removeAllsubStr(str,part);
    
}