//
// Created by User on 10.01.2022.
//

#ifndef PROIECT_POO_PERSOANA_H
#define PROIECT_POO_PERSOANA_H

#include <iostream>

enum class Ocupatie {
    director, profesor, elev
};

class Persoana {
protected:
    int varsta;
    std::string nume;
    std::string prenume;
    std::string cnp;
    Ocupatie ocupatie;
public:
    Persoana();

    Persoana(const int &varsta, const std::string &nume, const std::string &prenume, const std::string &cnp,
             Ocupatie ocupatie);

    virtual ~Persoana() = default;
    virtual void prezinta_ocupatia(std::ostream &os) const = 0;
    std::string get_gen() const {
        if(cnp[0] == '1' or cnp[0] == '5')
            return "masculin";
        else
            return "feminin";
    };
    virtual void afis(std::ostream& os) const;
};


#endif //PROIECT_POO_PERSOANA_H
