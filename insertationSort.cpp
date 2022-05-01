#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter the array size: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {        
        cin >> arr[i];
    }

    int counter = 0;
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i -1;
                while((j > -1) && (current < arr[j])) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    
    for ( int i = 0; i < n; i++)
    {
        cout<< arr[i] << endl;
    }
    

    return 0;
}