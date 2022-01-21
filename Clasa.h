//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_CLASA_H
#define PROIECT_POO_CLASA_H
#include <iostream>
#include <vector>
#include "Elev.h"

class Clasa {
    std::vector <Elev> elevi;
public:
    Clasa(const std::vector<Elev> &elevi);

   ~Clasa();
   Clasa() = default;
   void adauga_elev(const Elev &elev);
   void adauga_elevi(const std::vector<Elev> &eli);
};


#endif //PROIECT_POO_CLASA_H
