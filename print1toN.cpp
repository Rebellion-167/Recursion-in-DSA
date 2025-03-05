#include <bits/stdc++.h>
using namespace std;

void printNos(int n)
{
    //Base case
    if(n==0) return;

    //Implementing Recursion
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