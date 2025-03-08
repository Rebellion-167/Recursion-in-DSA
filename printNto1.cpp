//Using recursion to print from N to 1.
//N is the user input

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n<1) return;
    cout << n << " ";
    print(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    print(n);

    return 0;
}