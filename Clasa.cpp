//
// Created by User on 10.01.2022.
//

#include "Clasa.h"

Clasa::Clasa(const std::vector<Elev> &elevi) : elevi(elevi) {}

Clasa::~Clasa() {

}

void Clasa::adauga_elev(const Elev &elev) {
    elevi.push_back(elev);
}

void Clasa::adauga_elevi(const std::vector<Elev> &eli) {
    for(auto &ei:eli)
        elevi.push_back(ei);
}

