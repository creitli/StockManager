//
// Created by Csaba Reitli on 06.04.25.
//

#include "StockData.h"
#include "iostream"
#include "string"
#include "fstream"

StockData::StockData(std::string date, std::string close, std::string volume, std::string open, std::string high, std::string low){
    this->date = date;
    this->close = close;
    this->volume = volume;
    this->open = open;
    this->high = high;
    this->low = low;
}
StockData::~StockData() {

}



std::string StockData::getDate(){
    return date;
}

std::string StockData::getClose(){
    return close;
}

std::string StockData::getVolume(){
    return volume;
}

std::string StockData::getOpen(){
    return open;
}

std::string StockData::getHigh(){
    return high;
}

std::string StockData::getLow(){
    return low;
}

