//
// Created by Csaba Reitli on 06.04.25.
//

#include "StockData.h"
#include "iostream"
#include "string"
#include "fstream"

StockData::StockData(std::string date, std::string close, std::string volume, std::string open, std::string high, std::string low){
    this.date = date;
    this.close = close;
    this.volume = volume;
    this.open = open;
    this.high = high;
    this.low = low;
}

static StockData[] StockData::import(std::string filename){
    StockData aktien[];
    int aktienzaehler = 0;

    std::string output;
    std::string data[6];

    std::ifstream file(filename);
    while(getline(file, output)){
        int j = 0;
        int substr_start = 0;
        for(int i = 0; i < output.length, i++){
            if(output[i] == ','){
                data[j++] = output.std::string::substr(substr_start, i);
                substr_start = i + 1;
            }
        }
        aktien[aktienzaehler++] = new StockData(data[0], data[1], data[2], data[3], data[4], data[5]);
        std::cout << "the data has been imported from" << filename << std::endl;
    }
    return aktien;
}

std::string StockData::getDate(){
    return date;
}

std::string StockData::getClose(){
    return close;
}

std::string StockData::getVolume(){{
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

