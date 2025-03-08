//Printing N to 1 using backtracking
//Basically means that we cannot do i-1

#include <bits/stdc++.h>
using namespace std;

void printNos(int i,int n)
{
    if(i>n) return;
    printNos(i+1,n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    printNos(1,n);

    return 0;
}