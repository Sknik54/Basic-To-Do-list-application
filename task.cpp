//
// Created by semih on 05.10.2026.
//

#include "task.h"
task::task() {
    this->titel = "";
    this->id = -1;
    this->erledigt = false;
}
task::task(const int& pid, bool pdone, const std::string& ptitel) {
    id = pid;
    erledigt = pdone;
    titel = ptitel;
}


//getter
int task::getid() const {return id;}
std::string task::gettitel() const {return titel;}
bool task::geterledigt() const {return erledigt;}


//setter
void task::seterledigt(bool wert) {erledigt = wert;}
void task::setid(const int &id) {this->id = id;}
void task::settitel(const std::string &titel) {this->titel = titel;}


std::istream& operator>>(std::istream& is, task& t) {  //datei sieht so aus ID|0 or 1|Titel
    int id =0;
    std::string titel = "";
    int erledigtwert = 0;
    char trenner1;
    char trenner2;

    if (!(is >>id>>trenner1>>erledigtwert>>trenner2)) { // bsp task: 17|0|waesche waschen
        return is;
    }

    if (trenner1 != '|' || trenner2 != '|') {
        throw std::runtime_error("ungueltiges format");
    }

    if (erledigtwert != 0 && erledigtwert != 1) {
        throw std::runtime_error("erledigt wert ungueltig");
    }
    std::getline(is,titel);
    if (titel.empty()) {
        throw std::runtime_error("kein gueltiger titel");
    }

    bool erledigt = erledigtwert == 1;
    t = task(id,erledigt,titel);
    return is;
}

std::ostream& operator<<(std::ostream& os, const task& t) {
    os << t.getid() << '|' << t.geterledigt() << '|' << t.gettitel();
    return os;
}


