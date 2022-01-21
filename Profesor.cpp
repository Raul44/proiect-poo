//
// Created by User on 10.01.2022.
//

#include "Profesor.h"


Profesor::Profesor(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
                   Ocupatie ocupatie, bool diriginte, const std::string &materie, int vechime) : Persoana(varsta, nume,
                                                                                                           prenume, cnp,
                                                                                                           ocupatie),
                                                                                                  diriginte(diriginte),
                                                                                                  materie(materie),
                                                                                                  vechime(vechime) {}

void Profesor::prezinta_ocupatia(std::ostream &os) const {
        if(this->get_gen() == "masculin")
            os<<"Profesorul ";
        else
        os<<"Profesoara ";
    os<<this->nume<<" "<<this->prenume<<" preda "<<this->materie<<" si are o vechime de "<<this->vechime<<" ani, are un salariu de "<<this->calculeaza_salariu()<<" de lei.";
}

int Profesor::calculeaza_salariu() const {
    int salariu=2428 + 200 * vechime;
    if(diriginte)
        salariu += 300;
    return salariu;
}

std::shared_ptr<Profesor> Profesor::clone() const {
    return std::make_shared<Profesor>(*this);
}

void Profesor::afis(std::ostream &os) const {
    Persoana::afis(os);
    os<<" Diriginte: "<< (diriginte? "Da " : "Nu ")<<" Materie: "<<materie<<" Vechime "<<vechime<<" ani ";
}

std::ostream &operator<<(std::ostream &os, const Profesor &profesor) {
   // profesor.afis(os);
   profesor.prezinta_ocupatia(os);
    return os;
}
