#include <iostream>

using namespace std;

struct person
{
    int age ;
    int salary;
    int mn;

};

int main ()
{
    struct person person1;

    person1.age=98;
    person1.salary=10;
    person1.mn=7894561230;

    cout << person1.age << " " << person1.salary << " " << person1.mn;
}