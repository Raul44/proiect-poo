//
// Created by User on 21.01.2022.
//

#include "Elev_special.h"

Elev_special::Elev_special(const int &varsta, const std::string &nume, const std::string &prenume,
                           const std::string &cnp, const Bursa &bursa, float medie,
                           const std::string &locatieLocuinta, Situatie_parentala situatieParentala,
                           Stare_de_sanatate stareDeSanatate) : Elev(varsta, nume, prenume, cnp, bursa, medie,
                                                                     locatieLocuinta),
                                                                situatie_parentala(situatieParentala),
                                                                stare_de_sanatate(stareDeSanatate) {}

Elev_special::~Elev_special() {

}

void Elev_special::afis(std::ostream &os) const {
    Elev::afis(os);
    os << " situatie_parentala: ";
    switch (situatie_parentala){
        case Situatie_parentala::orfan:
            os << " orfan ";
            break;
        case Situatie_parentala::un_parinte:
            os << " are un parinte ";
            break;
        case Situatie_parentala::ambii_parinti:
            os << " are ambii parinti ";
            break;
    }
    os << " stare_de_sanatate: ";
    os<<(stare_de_sanatate ==Stare_de_sanatate::nesanatos ? "nesanatos" : "sanatos");
}
