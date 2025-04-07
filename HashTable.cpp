//
// Created by Csaba Reitli on 06.04.25.
//

#include "HashTable.h"
HashTable::HashTable() {
    for (int i = 0; i < SIZE; i++) {
        table[i] = nullptr;
    }
}

HashTable::~HashTable() {
    for (int i = 0; i < SIZE; i++) {
        delete table[i];
    }
}

int HashTable::createValue(std::string input) {
    int value = 0;
    if (input.length() != 4) {
        std::cout << "Wrong input." << std::endl;
    }else {
        for (int i = 0; i < input.length(); i++) {
            value = (int)(value + (input.at(i) * pow(31, input.length() - (i + 1))));
        }
    }
    return value % SIZE;
}
int HashTable::hashValue(HashTable* table, std::string kuerzel) {
    int value = 0;
    for (int i = 0; i < kuerzel.length(); i++) {
        value = (int)(value + (kuerzel.at(i) * pow(31, kuerzel.length() - (i + 1))));
    }
    int counter = 1;
    while (table->table[value]->getKuerzel() != kuerzel) {
        value = (value + (counter*counter))%SIZE;
        counter++;
    }
}


void HashTable::add(HashTable* table, Aktie* aktie) {
    int input = table->createValue(aktie->getKuerzel());
    int counter = 1;
    while (table->table[input] != nullptr) {
        input = (input + (counter*counter))%SIZE;
        counter++;
    }
    this->table[input] = aktie;
}


