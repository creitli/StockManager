//
// Created by Csaba Reitli on 06.04.25.
//

#include "Manager.h"

#include <iostream>

#include "HashTable.h"

Manager::Manager() {
    //ctor
}
Manager::~Manager() {
    //dtor
}
void Manager::run() {
    HashTable hashTable;
    bool quitter = false;
    while (!quitter) {
        char input;
        std::cout<< "1: add new Stock into hash table\n"<<
                    "2: remove Stock from hash table\n"<<
                    "3: Add historic data to existing Stock"<<std::endl;

        std::cin >> input;
        switch (input) {
            case '1': {
                std::cout<<"Add new Stock int hash:"<<std::endl;
                std::cout<<"Kürzel(4 Buchstaben): "<<std::endl;
                std::string input1, input2;
                std::cin>>input1;
                if (input1.length() != 4) {
                    std::cout<<"Incorrectt input!"<<std::endl;
                }else {
                    std::cout<<"Aktienname: "<<std::endl;
                    std::cin>>input2;
                    Aktie newAktie(input2, input1);
                    hashTable.add(&hashTable, &newAktie);
                }
                break;
            }

            case '2': {
                std::cout<<"delete"<<std::endl;
                break;
            }

            case '3': {
                std::string fileName;
                std::cout<<"Kürzel eingeben: "<<std::endl;
                std::string kuerzel;
                std::cin>>kuerzel;
                std::cout<<"add stock value\ninput csv:"<<std::endl;
                std::cin>>fileName;
                hashTable.table[hashTable.hashValue(&hashTable, )]->import(fileName);
                break;
            }

            case 'q': {
                quitter = true;
                std::cout << "Quitting..." << std::endl;
                break;
            }
        }
    }
}



