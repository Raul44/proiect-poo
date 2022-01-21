//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_ELEV_H
#define PROIECT_POO_ELEV_H
#include <iostream>
#include <string>
#include <vector>
#include "Bursa.h"
#include "Persoana.h"

class Elev:public Persoana{
protected:
    Bursa bursa;
    float medie;
    std::string locatie_locuinta;
public:
    Elev();

    Elev(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp
         , const Bursa &bursa, float medie, const std::string &locatieLocuinta);

    ~Elev();

    void adauga(Bursa const &Bursa);

    Elev(const Elev &copie);

    Elev &operator=(const Elev &copie);

    friend std::ostream &operator<<(std::ostream &os, const Elev &elev);

    void afis(std::ostream &os) const override;

    void prezinta_ocupatia() override;
};



#endif //PROIECT_POO_ELEV_H
