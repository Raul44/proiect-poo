//
// Created by User on 18.01.2022.
//

#include "Bursa.h"

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


Bursa::Bursa(int pret, int nrLuni, const std::string &denumire) : pret(pret), nr_luni(nrLuni), denumire(denumire) {}

Bursa::~Bursa() {

}

std::ostream &operator<<(std::ostream &os, const Bursa &bursa) {
    os << "pret: " << bursa.pret << " nr_luni: " << bursa.nr_luni << " denumire: " << bursa.denumire;
    return os;
}

Bursa &Bursa::operator=(const Bursa &copie){
    pret = copie.pret;
    nr_luni = copie.nr_luni;
    denumire = copie.denumire;
    return *this;
}
