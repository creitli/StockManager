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
        std::cin >> input;
        switch (input) {
            case '1':
                std::cout<<"Add new Stock int hash:"<<std::endl;
                std::cout<<"Kürzel(4 Buchstaben): "<<std::endl;
                std::string input1, input2;
                std::cin>>input1;
                if (input1.length() != 4) {
                    std::cout<<"Incorrectt input!"<<std::endl;
                }else {
                    std::cout<<"Aktienname: "<<std::endl;
                    std::cin>>input2;
                    hashTable.
                }


                break;

            case 'q':
                quitter = true;
                std::cout << "Quitting..." << std::endl;
                break;
        }
    }
}



