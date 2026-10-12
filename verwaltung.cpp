//
// Created by semih on 05.10.2026.
//

#include "verwaltung.h"

task& verwaltung::findetask(int id){
    for (task& t : tasks) {
        if (t.getid() == id) {
            return t;
        }
    }
    throw std::runtime_error("Aufgabe nicht gefunden");

}

void verwaltung::speichern(const std::string& dateiname) {
    std::ofstream ofs(dateiname);
    if (!ofs){throw std::runtime_error("datei kann nicht geschrieben werden");}

    ofs << "[tasks]\n";
    for (const task& t : tasks) {
        ofs << t << '\n';
    }
}


void verwaltung::laden(const std::string& dateiname) {
    std::ifstream ifs(dateiname);
    if (!ifs){throw std::runtime_error("datei konnte nicht geladen werden");}

    std::string uberschrift;
    ifs >> uberschrift;
    if (uberschrift != "[tasks]") {
        throw std::runtime_error("ungueltiges format, uberschrift muss [tasks] lauten");
    }

    tasks.clear();
    task t;
    while (ifs >> t) {
        tasks.push_back(t);
    }
}

