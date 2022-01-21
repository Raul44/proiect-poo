//
// Created by User on 10.01.2022.
//

#include "Liceu.h"

Liceu *Liceu::liceu = nullptr;

Liceu *Liceu::get_liceu() {
    if (liceu == nullptr) liceu = new Liceu;
    return liceu;
}


Liceu::~Liceu() {

}

void Liceu::adaugare_prof(const std::shared_ptr<Profesor> &prof) {
    profesori.push_back(prof);
}

void Liceu::adaugare_profi(const std::vector<std::shared_ptr<Profesor>> &profi) {

    for (auto &it: profi)
        profesori.push_back(it);
}

std::ostream &operator<<(std::ostream &os, const Liceu &liceu) {
    os << "profesori: \n" ;
    for(const auto &li: liceu.profesori)
        os << *li<< "\n";
    for(const auto &it: liceu.clase)
        os<< it<< "\n";
    return os;
}

void Liceu::adaugare_clasa(const Clasa &clasa) {
    clase.push_back(clasa);
}
