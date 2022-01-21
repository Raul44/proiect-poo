//
// Created by User on 10.01.2022.
//

#include "Persoana.h"

Persoana::Persoana() {}

Persoana::Persoana(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
                   Ocupatie ocupatie) : varsta(varsta), nume(nume), prenume(prenume), cnp(cnp), ocupatie(ocupatie) {}

void Persoana::afis(std::ostream& os) const{
    os<<"Varsta:  "<<varsta<<" numele: "<<nume<<" prenume: "<<prenume<<" cnp: "<<cnp;
    os << " Ocupatie: ";
    switch(ocupatie) {
        case Ocupatie::director:
            os << "director ";
            break;
        case Ocupatie::profesor:
            os << "profesor ";
            break;
        case Ocupatie::elev:
            os << "elev ";
            break;
    }
}

