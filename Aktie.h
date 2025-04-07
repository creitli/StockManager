//
// Created by Csaba Reitli on 06.04.25.
//

#ifndef AKTIE_H
#define AKTIE_H
#include <iostream>

#include "StockData.h"


class Aktie {
public:
    Aktie();
    Aktie(std::string name, std::string kuerzel);
    ~Aktie();
    std::string getKuerzel();
    std::string getName();
    void setKuerzel(std::string kuerzel);
    void setName(std::string name);

private:
    std::string kuerzel, name;
    StockData* data[30];
};



#endif //AKTIE_H
