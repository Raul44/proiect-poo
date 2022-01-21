//
// Created by User on 18.01.2022.
//

#ifndef PROIECT_POO_BURSA_H
#define PROIECT_POO_BURSA_H


#include <string>
#include <ostream>

class Bursa {
    int pret;
    int nr_luni;
    std::string denumire;
public:
    Bursa(int pret, int nrLuni, const std::string &denumire);
    Bursa();
    ~Bursa();

    friend std::ostream &operator<<(std::ostream &os, const Bursa &bursa);
    Bursa& operator+=(const Bursa bursa1);
    Bursa& operator=(const Bursa &copie);
};
class factory_bursa{
public:
    static Bursa merit() { return Bursa(400, 4, "Bursa de merit");}
    static Bursa studiu() { return Bursa(200, 4, "Bursa de studiu");}
    static Bursa performanta() { return Bursa (500, 5, "Bursa de performanta");}
    static Bursa transport() {return Bursa (200, 5, "Bursa de transport");}
    static Bursa sociala() {return Bursa (300, 6, "Bursa de ajutor social");}
};

#endif //PROIECT_POO_BURSA_H