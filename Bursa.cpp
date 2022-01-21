//
// Created by User on 18.01.2022.
//

#include "Bursa.h"


template<typename T>
Bursa<T>::Bursa() : pret(0), nr_luni(0), denumire("Fara bursa"){

}
template<typename T>
Bursa<T>::Bursa(T pret, T nrLuni, const std::string &denumire) : pret(pret), nr_luni(nrLuni), denumire(denumire) {}

template<typename T>
Bursa<T>::~Bursa(){
}

template<typename T>
Bursa<T> &Bursa<T>::operator=(const Bursa &copie){
    pret = copie.pret;
    nr_luni = copie.nr_luni;
    denumire = copie.denumire;
    return *this;
}

template<typename T>
Bursa<T> &Bursa<T>::operator+=(const Bursa bursa) {
    this->pret += bursa.pret;
    this->nr_luni = (bursa.nr_luni > this->nr_luni ? bursa.nr_luni : this->nr_luni);
    this->denumire = (this->denumire == "Fara bursa" ? bursa.denumire :
                      this->denumire + "/" + bursa.denumire);

    return *this;
}

template class Bursa<int>;
template class Bursa<float>;
template class factory_bursa<int>;
template class factory_bursa<float>;