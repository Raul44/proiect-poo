//
// Created by User on 18.01.2022.
//

#ifndef PROIECT_POO_BURSA_H
#define PROIECT_POO_BURSA_H


#include <string>
#include <ostream>

template<typename T>
class Bursa;

//template <typename T>
//ostream& operator<<(ostream& os, const magazin<T> &magazine);

template <typename T>
class Bursa {
    T pret;
    T nr_luni;
    std::string denumire;
public:
    Bursa(T pret, T nrLuni, const std::string &denumire);
    Bursa();
    ~Bursa();

    friend std::ostream &operator<<(std::ostream &os, const Bursa &bursa){
        os << "pret: " << bursa.pret << " nr_luni: " << bursa.nr_luni << " denumire: " << bursa.denumire << ' ';
        return os;
    };
    Bursa& operator+=(const Bursa bursa1);
    Bursa& operator=(const Bursa &copie);
};

template<typename T>
class factory_bursa{
public:
    static Bursa<int> merit() { return Bursa<int>(400, 4, "Bursa de merit");}
    static Bursa<int> studiu() { return Bursa<int>(200, 4, "Bursa de studiu");}
    static Bursa<int> performanta() { return Bursa<int> (500, 5, "Bursa de performanta");}
    static Bursa<int> transport() {return Bursa<int> (200, 5, "Bursa de transport");}
    static Bursa<int> sociala() {return Bursa<int> (300, 6, "Bursa de ajutor social");}
};

#endif //PROIECT_POO_BURSA_H