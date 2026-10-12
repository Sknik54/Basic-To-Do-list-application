//
// Created by semih on 05.10.2026.
//

#include "task.h"

task::task(const int& pid, bool pdone, const std::string& ptitel) {
    id = pid;
    erledigt = pdone;
    titel = ptitel;
}

int task::getid() const {
    return id;
}

void task::seterledigt(bool wert) {
    erledigt = wert;
}

std::string task::gettitel() const {
    return titel;
}

bool task::geterledigt() const {
    return erledigt;
}




