#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "helloworld";
    // cout << "Enter String "<< endl;
    // getline(cin,str);
    // cout << str.substr(4,9);
    for (int i = 0; i < str.length(); i++)
    {
        cout << i << " " << str[0] << endl;
        str.erase(i,1);
        cout << i << " " << str[0] << endl;
        cout << str << endl;
    }
       
}