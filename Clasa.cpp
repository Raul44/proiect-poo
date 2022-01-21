//
// Created by User on 10.01.2022.
//

#include "Clasa.h"


Clasa::~Clasa() {

}

void Clasa::adauga_elev(const std::shared_ptr<Elev> &elev) {
    elevi.push_back(elev);
}

void Clasa::adauga_elevi(const std::vector<std::shared_ptr<Elev>> &eli) {
    for(auto &ei:eli)
        elevi.push_back(ei);
}

std::ostream &operator<<(std::ostream &os, const Clasa &clasa) {
    os << "Elevi: \n";
    for(const auto &it: clasa.elevi)
        os << *it <<'\n';
    return os;
}