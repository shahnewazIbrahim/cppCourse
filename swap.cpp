#include<iostream>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 1, y = 3;
    swap(x, y);
    cout<< "this is x: "<< x << " this is y: "<< y;
    swap(x, y);
    
    return 0;
}