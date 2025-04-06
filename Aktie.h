//
// Created by Csaba Reitli on 06.04.25.
//

#ifndef AKTIE_H
#define AKTIE_H
#include <iostream>

#include "StockData.h"


class Aktie {


    private:

    std::string kuerzel, name;
    StockData* data[30];
};



#endif //AKTIE_H
