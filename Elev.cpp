//
// Created by User on 10.01.2022.
//

#include "Elev.h"

Elev::Elev() {};

Elev::Elev(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
           Ocupatie ocupatie, const Bursa &bursa, float medie, const std::string &locatieLocuinta) : Persoana(varsta, nume, prenume,
                                                                                                 cnp, ocupatie),
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
}

Elev &Elev::operator=(const Elev &copie) {
    this->varsta = copie.varsta;
    this->nume = copie.nume;
    this->prenume = copie.prenume;
    this->cnp = copie.cnp;
    this->medie = copie.medie;
    this->locatie_locuinta = copie.locatie_locuinta;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Elev &elev) {
    elev.afis(os);
    return os;
}

void Elev::afis(std::ostream &os) const {
    Persoana::afis(os);
    os << " medie: " <<medie
                  << " locatie_locuinta: " << locatie_locuinta;
 //   os << " situatie_parentala: ";
//    switch(situatie_parentala) {
//        case Situatie_parentala::orfan:
//            os << " orfan ";
//            break;
//        case Situatie_parentala::un_parinte:
//            os << " are un parinte ";
//            break;
//        case Situatie_parentala::ambii_parinti:
//            os << " are ambii parinti ";
//            break;
//    }
}

void Elev::prezinta_ocupatia() {

}


//std::ostream &operator<<(std::ostream &os, const Bursa &bursa) {
//    os << " Media elevului este " << bursa.media << std::endl;
//    os << " Localitatea locuintei elevului este " << bursa.localitatea_locuintei << std::endl;
//    os << " Starea de sanatate a elevului este " << bursa.starea_de_sanatate << std::endl;
//    os << " Elevul este crescut de " << bursa.situatia_parentala << std::endl;
//    if(bursa.media >= 9 and (bursa.localitatea_locuintei != "Bucuresti" or bursa.situatia_parentala != "2 parinti" or bursa.starea_de_sanatate != "Sanatos"))
//        os << " Bursa elevului este de 500 de lei" << std::endl;
//    else
//    if (bursa.media >= 9)
//        os << " Bursa elevului este de 200 de lei" << std::endl;
//    else
//    if(bursa.localitatea_locuintei!="Bucuresti" or bursa.situatia_parentala!="2 parinti" or bursa.starea_de_sanatate!="Sanatos")
//        os << " Bursa elevului este de 300 de lei" << std::endl;
//    else os << " Bursa elevului este de 0 lei" << std::endl;
//    return os;
//}






