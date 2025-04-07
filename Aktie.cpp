//
// Created by Csaba Reitli on 06.04.25.
//

#include "Aktie.h"
Aktie::Aktie(std::string name, std::string kuerzel) {
    this->name=name;
    this->kuerzel=kuerzel;
    for (int i = 0; i < 30; i++) {
        data[i] = nullptr;
    }
}
Aktie::~Aktie() {
    for (int i = 0; i < 30; i++) {
        delete data[i];
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
void Aktie::import(std::string filename){
    int aktienzaehler = 0;

    std::string output;
    std::string data[6];

    std::ifstream file(filename);
    while(getline(file, output)){
        int j = 0;
        int substr_start = 0;
        for(int i = 0; i < (int)output.length(); i++){
            if(output[i] == ','){
                data[j++] = output.std::string::substr(substr_start, i);
                substr_start = i + 1;
            }
        }
        this->data[aktienzaehler++] = new StockData(data[0], data[1], data[2], data[3], data[4], data[5]);
        std::cout << "the data has been imported from" << filename << std::endl;
    }
}


