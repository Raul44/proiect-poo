//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_LICEU_H
#define PROIECT_POO_LICEU_H

#include <array>
#include "Profesor.h"
#include "Clasa.h"

class Liceu {
std::vector<Profesor> profesori;
std::array<Clasa, 16> clasa;
public:
    Liceu(const std::vector<Profesor> &profesori, const std::array<Clasa, 16> &clasa);

    ~Liceu();
    Liceu() = default;
    void adaugare_prof(const Profesor &prof);
    void adaugare_profi(const std::vector<Profesor> &profi);
};


#endif //PROIECT_POO_LICEU_H
