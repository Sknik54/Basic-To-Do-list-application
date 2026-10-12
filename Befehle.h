//
// Created by semih on 05.10.2026.
//

#ifndef TODOLIST_BEFEHLE_H
#define TODOLIST_BEFEHLE_H
#include "verwaltung.h"


class Befehle {
public: void fuehrebefehlaus(const int nummer, verwaltung &v);
private:
    void befehl1(verwaltung &v); //task hinzufügen
    void befehl2(verwaltung &v); //tasks anzeigen
    void befehl3(verwaltung &v); //task erledigen
    void befehl4(verwaltung &v); // task löschen
};


#endif //TODOLIST_BEFEHLE_H