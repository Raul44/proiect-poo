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

void Profesor::prezinta_ocupatia() {
    if(this->get_gen() == "masculin")
        std::cout<<"Profesorul ";
    else
        std::cout<<"Profesoara ";
    std::cout<<this->nume<<" "<<this->prenume<<" preda "<<this->materie<<" si este de o vechime de "<<this->vechime<<" ani, are un salariu de "<<this->calculeaza_salariu()<<" de lei.";
}

int Profesor::calculeaza_salariu() {
    int salariu=2428 + 200 * vechime;
    if(diriginte)
        salariu += 300;
    return salariu;
}
