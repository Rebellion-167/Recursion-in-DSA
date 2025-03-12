//To reverse an array using recursion

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int l, int r)
{
    if(l>=r) return;
    swap(arr[l], arr[r]);
    reverseArray(arr,l+1,r-1);
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in the array : ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Array before reversing : ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    
    reverseArray(arr,0,n-1);

    cout << "Array after reversing : "; 
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    return 0;
}