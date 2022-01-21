//
// Created by User on 21.01.2022.
//

#ifndef PROIECT_POO_ELEV_SPECIAL_H
#define PROIECT_POO_ELEV_SPECIAL_H

#include "Elev.h"

enum class Situatie_parentala{
    orfan, un_parinte, ambii_parinti
};
enum class Stare_de_sanatate{
    nesanatos, sanatos
};

class Elev_special: public Elev {
    Situatie_parentala situatie_parentala;
    Stare_de_sanatate stare_de_sanatate;

public:

};


#endif //PROIECT_POO_ELEV_SPECIAL_H
