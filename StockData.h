//
// Created by Csaba Reitli on 06.04.25.
//

#ifndef STOCKDATA_H
#define STOCKDATA_H
#include "iostream"



class StockData {
public:
    StockData();
    ~StockData();
private:
    std::string low, high, open, close, volume, date;
};



#endif //STOCKDATA_H
