//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_ELEV_H
#define PROIECT_POO_ELEV_H
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Bursa.h"
#include "Persoana.h"

class varsta_mare : public std::runtime_error{
public:
    varsta_mare(const std::string &arg = "Varsta prea mare"): runtime_error(arg){}
};




class Elev:public Persoana{
protected:
    Bursa<int> bursa;
    float medie;
    std::string locatie_locuinta;
public:
    Elev();

    Elev(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp
         , float medie, const std::string &locatieLocuinta);

    ~Elev();

    void adauga(Bursa<int> const &Bursa);

    Elev(const Elev &copie);

    Elev &operator=(const Elev &copie);

    friend std::ostream &operator<<(std::ostream &os, const Elev &elev);

    void afis(std::ostream &os) const override;

    virtual std::shared_ptr<Elev> clone() const;

    void prezinta_ocupatia(std::ostream &os) const override;
};


#endif //PROIECT_POO_ELEV_H
