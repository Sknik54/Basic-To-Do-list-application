//
// Created by semih on 05.10.2026.
//

#include "Befehle.h"

#include <iostream>
#include <ostream>

void Befehle::fuehrebefehlaus(int nummer, verwaltung &v) {
    switch (nummer) {
        case 1:
            addtask(v);
            break;
        case 2:
            listtasks(v);
            break;
        case 3:
            completetask(v);
            break;
        case 4:
            deltask(v);
            break;
        case 0: break;
    }
}

void Befehle::addtask(verwaltung &v) {
    std::cout << "Waehle einen Titel \n";
    std::string titel;
    std::getline(std::cin >> std::ws, titel);
    v.naechsteid += 1;
    v.tasks.push_back(task(v.naechsteid, false, titel));
}
void Befehle::listtasks(verwaltung &v) {
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
void Befehle::completetask(verwaltung &v) {
    std::cout << "Waehle Nummer der Aufgabe zum erledigen \n";
    int nummer;
    std::cin >> nummer;
    v.findetask(nummer).seterledigt(true);

}
void Befehle::deltask(verwaltung &v) {
    std::cout << "Waehle Nummer der Aufgabe zum loeschen \n";
    int nummer;
    std::cin >> nummer;
    auto anzahl = std::erase_if(v.tasks, [nummer](const task& t) {  //löscht alle tasks mit der ID Nummer per eine lambda funktion
    return t.getid() == nummer;
});

    if (anzahl == 0) {
        std::cout << "Keine Aufgabe mit dieser ID gefunden.\n";
    } else {v.naechsteid -= 1;}
}

