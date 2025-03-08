//Using recursion to print a name N times

#include <bits/stdc++.h>
using namespace std;

void printName(string name, int i, int n)
{
    if(i>n) return;//base case
    cout << name << endl;
    printName(name,i+1,n);
}

int main()
{
    string name;//to store the name
    int n;//to print the number of times

    cout << "Enter the name : ";
    cin >> name;

    cout << "Enter the value of n : ";
    cin >> n;

    printName(name,1,n);

    return 0;
}