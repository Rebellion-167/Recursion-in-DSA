//Printing 1 to N using Backtracking
//Basically means we cannot use i+1 here

#include <bits/stdc++.h>
using namespace std;

void printNos(int n)
{
    if(n<1) return;
    printNos(n-1);
    cout << n << " "; 
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    printNos(n);

    return 0;
}