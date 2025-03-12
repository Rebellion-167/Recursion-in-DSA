//A phrase is a palindrome if, after converting all uppercase letters 
//into lowercase letters and removing all non-alphanumeric characters, 
//it reads the same forward and backward. 
//Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i=0;
    int j=s.size()-1;

    while(i<j)
    {
        while(!isalnum(s[i]) && i<j) i++;
        while(!isalnum(s[j]) && i<j) j--;
        if(tolower(s[i])!=tolower(s[j])) return false;

        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter a phrase : ";
    cin >> s;

    bool palin = isPalindrome(s);

    if(palin)
        cout << "Palindrome";
    else   
        cout << "Not Palindrome";

    return 0;
}