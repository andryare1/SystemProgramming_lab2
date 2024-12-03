//
//  Worker.cpp
//  lab2
//
//  Created by Андрей Ярема on 04.12.2024.
//

#include "Worker.hpp"
#include <iostream>
using namespace std;

void Worker::eat(float how_much) {

    if (how_much > 10) {
        age++;
        weight = weight + (how_much / 2);
    }
    else
        weight = weight + how_much;
}

void Worker::getInfo() {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Вес: " << weight << endl;
    cout << "Настроение: " << mood << endl;
}

float Worker::get_weight() {
    return weight;
}

int Worker::get_mood() {
    return mood;
}

void Worker::walk() {
    mood++;
}

void Worker::dance() {
    mood += 2;
}

void Worker::work() {
    mood -= 2;

    if (mood < 0) {
        mood = 0;
    }
}
