//
// Created by Csaba Reitli on 06.04.25.
//

#ifndef STOCKDATA_H
#define STOCKDATA_H
#include "iostream"
#include "string"


class StockData {
public:
    StockData(std::string date, std::string close, std::string volume, std::string open, std::string high, std::string low);
    ~StockData();
    //static StockData[] import(std::string filename);
    std::string getDate();
    std::string getClose();
    std::string getVolume();
    std::string getOpen();
    std::string getHigh();
    std::string getLow();
private:
    std::string date, close, volume, open, high, low;
};



#endif //STOCKDATA_H
