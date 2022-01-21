//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_PROFESOR_H
#define PROIECT_POO_PROFESOR_H
#include <iostream>
#include <vector>
#include "Persoana.h"

class Profesor:public Persoana{
    bool diriginte;
    std::string materie;
    int vechime;
public:
    Profesor();

    Profesor(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
             Ocupatie ocupatie, bool diriginte, const std::string &materie, int vechime);
    void prezinta_ocupatia() override;
    int calculeaza_salariu();

};


#endif //PROIECT_POO_PROFESOR_H
