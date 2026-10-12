#include <iostream>
#include "Befehle.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    verwaltung v;
    Befehle b;
    int eingabe =-1;
    std::cout << "----TO-DO-Liste---- \n";
    std::cout << "1 - Aufgabe erstellen\n";
    std::cout << "2 - Aufgaben anzeigen\n";
    std::cout << "3 - Aufgabe erledigen\n";
    std::cout << "4 - Aufgabe loeschen\n";
    while(eingabe != 0) {
        std::cout << "Befehl: \n";
        std::cin >> eingabe;
        b.fuehrebefehlaus(eingabe, v);
    }

    std::cout << "Programm beendet.\n";
    return 0;

}

