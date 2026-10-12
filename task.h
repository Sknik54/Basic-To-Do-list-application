//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
#include <string>
#include <stdexcept>
#include <fstream>
#include <ranges>


class task {
private: int id;
    bool erledigt;
    std::string titel;

public:
    task();
    task(const int& pid, bool pdone, const std::string& ptitel);
    int getid() const;
    std::string gettitel() const;
    bool geterledigt() const;

    void seterledigt(bool wert);
    void settitel(const std::string& name);
    void setid(const int& id);
};

std::ostream& operator<<(std::ostream& os, const task& t);
std::istream& operator>>(std::istream& is, task& t);
#endif //TODOLIST_TASK_H