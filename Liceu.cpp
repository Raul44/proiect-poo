//
// Created by User on 10.01.2022.
//

#include "Liceu.h"

Liceu::Liceu(const std::vector<Profesor> &profesori, const std::array<Clasa, 16> &clasa) : profesori(profesori),
                                                                                           clasa(clasa) {}

Liceu::~Liceu() {

}

void Liceu::adaugare_prof(const Profesor &prof) {
    profesori.push_back(prof);
}

void Liceu::adaugare_profi(const std::vector<Profesor> &profi) {

    for(auto &it:profi)
        profesori.push_back(it);
}
