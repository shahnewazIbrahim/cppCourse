#include<iostream>
using namespace std;

struct person
{
    int age;
    string name;
    string designation;
    float salary;
};


int main(){

    struct person himu;
    himu.age = 28;
    himu.name = "himu";
    himu.designation = "web developer";
    himu.salary = 15000.00;

    struct person mokhles;

    mokhles.age = 32;
    mokhles.name= "mokhles";
    mokhles.designation = "hackathon";
    mokhles.salary = 342122;
    
    cout<< himu.salary << endl ; 
    cout<< mokhles.salary << endl ; 
    return 0;
}