//
// Created by Csaba Reitli on 06.04.25.
//

#include "HashTable.h"
HashTable::HashTable() {
    for (int i = 0; i < SIZE; i++) {
        table[i] == NULL;
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
        value == NULL;
    }else {
        for (int i = 0; i < input.length(); i++) {
            value = (int)(value + (input.at(i) * pow(31, input.length() - (i + 1)))) % SIZE;
        }
    }
    return value;
}

void HashTable::add(HashTable* table, Aktie aktie) {
    int input = table->createValue(aktie.getKuerzel());
    int counter = 1;
    while (&table[input] != NULL) {
        input = (input + (counter*counter))%SIZE;
        counter++;
    }
    table[input] = %aktie;
}

