//
// Created by User on 21.01.2022.
//

#ifndef PROIECT_POO_ELEV_SPECIAL_H
#define PROIECT_POO_ELEV_SPECIAL_H

#include <ostream>
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
    Elev_special(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
                  float medie, const std::string &locatieLocuinta,
                 Situatie_parentala situatieParentala, Stare_de_sanatate stareDeSanatate);

    ~Elev_special();

    std::shared_ptr<Elev> clone() const override;

    void afis(std::ostream &os) const override;
};


#endif //PROIECT_POO_ELEV_SPECIAL_H
