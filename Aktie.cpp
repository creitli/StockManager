//
// Created by Csaba Reitli on 06.04.25.
//

#include "Aktie.h"
Aktie::Aktie(std::string name, std::string kuerzel) {
    this->name=name;
    this->kuerzel=kuerzel;
    for (int i = 0; i < 30, i++) {
        data[i] = nullptr;
    }
}

std::string Aktie::getKuerzel() {
    return kuerzel;
}
std::string Aktie::getName() {
    return name;
}
void Aktie::setKuerzel(std::string kuerzel) {
    this->kuerzel = kuerzel;
}
void Aktie::setName(std::string name) {
    this->name = name;
}

