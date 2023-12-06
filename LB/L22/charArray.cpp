#include <iostream>
using namespace std;

int stringLength(char ch[]){
    int i = 0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
void reverseString(char ch[],int n){
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    
}

bool checkPalindrome(char ch[], int n){
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    cout << "Enter your name." << endl;
    char name[20];
    cin >> name;
    cout << "Welcome " << name << endl;
    int n = stringLength(name);
    cout << "Length of string is: " << n << endl;
    reverseString(name,n);
    cout << "Reverse of your name is " << name << endl;
    cout << "Palindrome or not :" << checkPalindrome(name,n) << endl;
}