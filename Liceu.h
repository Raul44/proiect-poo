//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_LICEU_H
#define PROIECT_POO_LICEU_H

#include <array>
#include <ostream>
#include "Profesor.h"
#include "Clasa.h"

class Liceu {
    static Liceu *liceu;

    std::vector<std::shared_ptr<Profesor>> profesori;
    std::vector<Clasa> clase;

private:
    Liceu() = default;

public:

    ~Liceu();

    static Liceu *get_liceu();

    void adaugare_prof(const std::shared_ptr<Profesor> &prof);
    void adaugare_profi(const std::vector<std::shared_ptr<Profesor>> &profi);
    void adaugare_clasa(const Clasa &clasa);
    friend std::ostream &operator<<(std::ostream &os, const Liceu &liceu);
};


#endif //PROIECT_POO_LICEU_H