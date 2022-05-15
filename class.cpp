#include<iostream>
using namespace std;

class Person {
    private : 
        int a;
    
    protected: 
        int b;
        void futureMan();
    public:
        int x;
};

void Person::futureMan() {
    cout<< "echo is echo"<< endl;
}

class Man : public Person {
    public: 
        int getValue() {
            b = 4;
        }
};

int main(){
    Person himu;
    himu.a = 5;
    himu.b = 6;
    himu.x = 5;
    
    return 0;
}