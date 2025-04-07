//
// Created by Csaba Reitli on 06.04.25.
//

#include "Manager.h"

#include <iostream>

Manager::Manager() {
    //ctor
}
Manager::~Manager() {
    //dtor
}
void Manager::run() {
    bool quitter = false;
    while (!quitter) {
        char input;
        std::cin >> input;
        switch (input) {
            case '1':

                break;

            case 'q':
                quitter = true;
                std::cout << "Quitting..." << std::endl;
                break;
        }
    }
}



