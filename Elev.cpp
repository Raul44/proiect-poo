//
// Created by User on 10.01.2022.
//

#include "Elev.h"

Elev::Elev() {};

Elev::Elev(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
           const Bursa &bursa, float medie, const std::string &locatieLocuinta) : Persoana(varsta, nume, prenume,
                                                                                                 cnp, Ocupatie::elev),
                                                                                        bursa(bursa), medie(medie),
                                                                                        locatie_locuinta(
                                                                                                locatieLocuinta){}
Elev::~Elev() {

}


Elev::Elev(const Elev &copie) {
    this->varsta = copie.varsta;
    this->nume = copie.nume;
    this->prenume = copie.prenume;
    this->cnp = copie.cnp;
    this->medie = copie.medie;
    this->locatie_locuinta = copie.locatie_locuinta;
    this->bursa = copie.bursa;
}

Elev &Elev::operator=(const Elev &copie) {
    this->varsta = copie.varsta;
    this->nume = copie.nume;
    this->prenume = copie.prenume;
    this->cnp = copie.cnp;
    this->medie = copie.medie;
    this->locatie_locuinta = copie.locatie_locuinta;
    this->bursa = copie.bursa;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Elev &elev) {
    elev.afis(os);
    return os;
}

void Elev::afis(std::ostream &os) const {
    Persoana::afis(os);
    os << " medie: " << medie << " locatie_locuinta: " << locatie_locuinta<< " Bursa: " << bursa;
}
void Elev::prezinta_ocupatia() {

}





