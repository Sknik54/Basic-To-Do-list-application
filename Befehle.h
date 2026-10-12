//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_BEFEHLE_H
#define TODOLIST_BEFEHLE_H
#include "verwaltung.h"


class Befehle {
public: void fuehrebefehlaus(const int nummer, verwaltung &v);
private:
    void addtask(verwaltung &v); //task hinzufügen
    void listtasks(verwaltung &v); //tasks anzeigen
    void completetask(verwaltung &v); //task erledigen
    void deltask(verwaltung &v); // task löschen
};


#endif //TODOLIST_BEFEHLE_H