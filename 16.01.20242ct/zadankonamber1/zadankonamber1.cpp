#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

struct Date {
    unsigned int dd, mm, rr;;
};

struct Worker {
    string name;
    string surname;
    string workplace;
    Date date_of_birth;
};

int main()
{
    Worker worker_no1 = {
        "Mike",
        "Manic",
        "being a manic twin",
        {2,12,2002}
    };
    Worker worker_no2 = {
        "Chris",
        "Trennn",
        "being a twin of Mike",
        {2,12,2002}
    };
    Worker worker_no3 = {
        "Bane",
        "Doggy",
        "Dog",
        {13,10,2020}
    };
    
    cout << worker_no1.name << endl;
    cout << worker_no1.surname << endl;
    cout << worker_no1.workplace << endl;
    cout << worker_no1.date_of_birth.dd << worker_no1.date_of_birth.mm << worker_no1.date_of_birth.rr << endl;
    
    cout << worker_no2.name << endl;
    cout << worker_no2.surname << endl;
    cout << worker_no2.workplace << endl;
    cout << worker_no2.date_of_birth.dd << worker_no2.date_of_birth.mm << worker_no2.date_of_birth.rr << endl;

    cout << worker_no3.name << endl;
    cout << worker_no3.surname << endl;
    cout << worker_no3.workplace << endl;
    cout << worker_no3.date_of_birth.dd << worker_no3.date_of_birth.mm << worker_no3.date_of_birth.rr << endl;

    return EXIT_SUCCESS;
}
