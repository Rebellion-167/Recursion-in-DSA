//Given a number X,  print its factorial.

//To obtain the factorial of a number, it has to be multiplied by 
//all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "The factorial of " << n << " is : " << fact(n);

    return 0;
}