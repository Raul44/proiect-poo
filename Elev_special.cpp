//
// Created by User on 21.01.2022.
//

#include "Elev_special.h"

Elev_special::Elev_special(const int &varsta, const std::string &nume, const std::string &prenume,
                           const std::string &cnp, float medie,
                           const std::string &locatieLocuinta, Situatie_parentala situatieParentala,
                           Stare_de_sanatate stareDeSanatate) : Elev(varsta, nume, prenume, cnp, medie,
                                                                     locatieLocuinta),
                                                                situatie_parentala(situatieParentala),
                                                                stare_de_sanatate(stareDeSanatate) {

    if (situatie_parentala != Situatie_parentala::ambii_parinti ||
        stare_de_sanatate != Stare_de_sanatate::sanatos) { bursa += factory_bursa::sociala(); }
}

Elev_special::~Elev_special() {

}

void Elev_special::afis(std::ostream &os) const {
    Elev::afis(os);
    os << " situatie_parentala: ";
    switch (situatie_parentala) {
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
    os << (stare_de_sanatate == Stare_de_sanatate::nesanatos ? "nesanatos" : "sanatos");
}

std::shared_ptr<Elev> Elev_special::clone() const {
    return std::make_shared<Elev_special>(*this);
}