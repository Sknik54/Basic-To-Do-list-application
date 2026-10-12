//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_VERWALTUNG_H
#define TODOLIST_VERWALTUNG_H
#include "task.h"
#include "vector"

struct verwaltung {
    std::vector<task> tasks;
    int naechsteid = 0;

    task& findetask(int id);
    void speichern(const std::string& dateiname);
    void laden(const std::string& dateiname);

};


#endif //TODOLIST_VERWALTUNG_H