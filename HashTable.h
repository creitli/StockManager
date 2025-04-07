//
// Created by Csaba Reitli on 06.04.25.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "Aktie.h"
#include "string.h"
#include "math.h"
#define SIZE 2063


class HashTable {
public:

    HashTable();
    ~HashTable();

    int createValue(std::string input);
    void add(HashTable* table, Aktie aktie);


    Aktie* table[SIZE]; //first prime over 2000

};



#endif //HASHTABLE_H
