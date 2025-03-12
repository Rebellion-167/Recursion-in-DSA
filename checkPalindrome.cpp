//Given a string, check whether it is palindrome or not.
//A string is said to be palindrome if the reverse of the string 
//is the same as the string.

#include <bits/stdc++.h>
using namespace std;

bool isPalin(int i, string &s)
{
    if(i >= s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return isPalin(i+1, s);
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    bool palin = isPalin(0, s);

    if(palin)
        cout << "It is a palindrome.";
    else
        cout << "It is not a palindrome";
    
    return 0;
}