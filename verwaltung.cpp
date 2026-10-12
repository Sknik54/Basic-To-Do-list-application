//
// Created by semih on 05.10.2026.
//

#include "verwaltung.h"

task& verwaltung::findetask(int id){
    for (int i = 0; i < tasks.size(); ++i) {
        if (tasks[i].getid() == id) {
            return tasks[i];
        }
        throw std::runtime_error("Aufgabe nicht gefunden");
    }

}
