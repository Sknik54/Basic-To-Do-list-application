//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_VERWALTUNG_H
#define TODOLIST_VERWALTUNG_H
#include "task.h"
#include "vector"

struct verwaltung {
    std::vector<task> tasks;

    task& findetask(int id);

};


#endif //TODOLIST_VERWALTUNG_H