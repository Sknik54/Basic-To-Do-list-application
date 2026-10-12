//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
#include <string>
#include <stdexcept>


class task {
private: int id;
    bool erledigt;
    std::string titel;

public:
    task(const int& pid, bool pdone, const std::string& ptitel);
    int getid() const;
    std::string gettitel() const;
    bool geterledigt() const;
    void seterledigt(bool wert);
};


#endif //TODOLIST_TASK_H