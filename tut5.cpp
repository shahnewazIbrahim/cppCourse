#include<iostream>
using namespace std;

void TestFunc() {
    int u;
    cout << "enter your age:";
    cin >> u;

    if (u >= 18)
    {
        cout << "you are adult \n";
    }
    else if(10<=u<= 18)
    {
        cout << "you are under age \n";
    }
    else
    {
        cout << "you are picchi \n";
    }
    
    
}

int main() {
    int num1, num2;

    TestFunc();

    cout<< "....";
    cout << "\n Enter the first number :";
    cin >> num1;

    cout << "\nEnter the second number :";
    cin >> num2;

    cout << "The sum is: " << num1 + num2 << endl;
    
    system("pause");
}
boil