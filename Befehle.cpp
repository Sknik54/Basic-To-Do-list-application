//
// Created by semih on 05.10.2026.
//

#include "Befehle.h"

#include <iostream>
#include <ostream>

void Befehle::fuehrebefehlaus(int nummer, verwaltung &v) {
    switch (nummer) {
        case 1:
            befehl1(v);
            break;
        case 2:
            befehl2(v);
            break;
        case 3:
            befehl3(v);
            break;
        case 4:
            befehl4(v);
            break;
        case 0: break;
    }
}

void Befehle::befehl1(verwaltung &v) {
    std::cout << "Waehle einen Titel \n";
    std::string titel;
    std::getline(std::cin >> std::ws, titel);
    int id = v.tasks.size() + 1;
    v.tasks.push_back(task(id, false, titel));
}
void Befehle::befehl2(verwaltung &v) {
    if (v.tasks.empty()) {
        std::cout << "Keine Aufgaben gefunden";
        return;
    }
    for (int i = 0; i < v.tasks.size(); ++i) {
        std::cout << v.tasks[i].getid() << " - " << v.tasks[i].gettitel();
        if (v.tasks[i].geterledigt()){ std::cout << "[erledigt]" << '\n'; }
        else{ std::cout << " [offen]" << '\n'; }
    }
}
void Befehle::befehl3(verwaltung &v) {
    std::cout << "Waehle Nummer der Aufgabe zum erledigen \n";
    int nummer;
    std::cin >> nummer;
    v.findetask(nummer).seterledigt(true);

}
void Befehle::befehl4(verwaltung &v) {
    std::cout << "Waehle Nummer der Aufgabe zum loeschen \n";
    int nummer;
    std::cin >> nummer;
    auto anzahl = std::erase_if(v.tasks, [nummer](const task& t) {
    return t.getid() == nummer;
});

    if (anzahl == 0) {
        std::cout << "Keine Aufgabe mit dieser ID gefunden.\n";
    }
}

