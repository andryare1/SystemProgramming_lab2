#include <iostream>
#include "Worker.hpp"
using namespace std;

int main()
{
    Worker* wrk1 = new Worker();

    int age;
    char name[25];

    cout << "Введите имя работника: ";
    cin >> name;
    wrk1->name = name;

    cout << "Введите возраст работника: ";
    cin >> age;
    wrk1->age = age;

    wrk1->eat(2);
    wrk1->eat(3);
    wrk1->eat(15);


    for (int i = 0; i < 2; i++) {
        wrk1->walk();
    }

    for (int i = 0; i < 3; i++) {
        wrk1->dance();
    }

    for (int i = 0; i < 9; i++) {
        wrk1->work();
    }

    wrk1->getInfo();
}
