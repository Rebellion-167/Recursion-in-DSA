//Given an integer N. Print the Fibonacci series up to the Nth term.
#include <iostream>

int fibo(int n)
{
    if(n<=1) return n;

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    std::cout << "Enter the number of terms : ";
    std::cin >> n;

    std::cout << "The Fibonacci series up to " << n << " terms : ";

    for(int i=0;i<n;i++) std::cout << fibo(i) << " ";

    return 0;
}