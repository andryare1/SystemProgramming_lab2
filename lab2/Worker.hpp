//
//  Worker.hpp
//  lab2
//
//  Created by Андрей Ярема on 04.12.2024.
//

#ifndef Worker_hpp
#define Worker_hpp
#include <stdio.h>

class Worker {

private:
    float weight;
    int mood = 10;

public:
    int age;
    char* name;

    void getInfo();
    void eat(float how_much);
    float get_weight();
    int get_mood();
    void walk();
    void dance();
    void work();

    ~Worker() {
        delete[] name;
    }
};

#endif /* Worker_hpp */
