//
// Created by User on 18.01.2022.
//

#include "Bursa.h"



Bursa::Bursa() : pret(0), nr_luni(0), denumire("Fara bursa"){

}

Bursa::Bursa(int pret, int nrLuni, const std::string &denumire) : pret(pret), nr_luni(nrLuni), denumire(denumire) {}

Bursa::~Bursa(){
}

std::ostream &operator<<(std::ostream &os, const Bursa &bursa) {
    os << "pret: " << bursa.pret << " nr_luni: " << bursa.nr_luni << " denumire: " << bursa.denumire << ' ';
    return os;
}

Bursa &Bursa::operator=(const Bursa &copie){
    pret = copie.pret;
    nr_luni = copie.nr_luni;
    denumire = copie.denumire;
    return *this;
}

Bursa &Bursa::operator+=(const Bursa bursa) {
    this->pret += bursa.pret;
    this->nr_luni = (bursa.nr_luni > this->nr_luni ? bursa.nr_luni : this->nr_luni);
    this->denumire = (this->denumire == "Fara bursa" ? bursa.denumire :
                      this->denumire + "/" + bursa.denumire);

    return *this;
}