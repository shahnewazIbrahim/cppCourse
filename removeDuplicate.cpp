#include <bits/stdc++.h>
using namespace std;

void removeDuplicateElement(int arr[], int n)
{
    unordered_set<int> s;

    // adding elements to LinkedHashSet
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    // Print the elements of LinkedHashedSet
    cout<< "[ ";

    for (auto x:s)
        cout << x << " ";
    cout << "]";
}

int main()
{
    int arr[] = {1, 4, 2, 6, 7, 4, 3, 3, 5, 6, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicateElement(arr, n);
    return 0;
}