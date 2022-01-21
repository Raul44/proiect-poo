//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_CLASA_H
#define PROIECT_POO_CLASA_H
#include <iostream>
#include <vector>
#include "Elev.h"

class Clasa {
    std::vector <std::shared_ptr<Elev>> elevi;
public:

    Clasa() = default;
    ~Clasa();

    void adauga_elev(const std::shared_ptr<Elev> &elev);
    void adauga_elevi(const std::vector<std::shared_ptr<Elev>> &eli);

    friend std::ostream &operator<<(std::ostream &os, const Clasa &clasa);
};


#endif //PROIECT_POO_CLASA_H