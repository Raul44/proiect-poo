#include <iostream>
#include "Elev_special.h"
#include "Liceu.h"


int main()
{
    auto x = Liceu::get_liceu();

    Bursa merit = factory_bursa::merit();
    Elev e1 (17, "Anastasia", "Elena", "60456546812350", 4.5f,"Bucuresti");
    std::cout<<e1;
    Elev_special es1 (16, "Radu", "Hera", "5049646546145",  8, "Bucuresti", Situatie_parentala::un_parinte, Stare_de_sanatate::sanatos);
    std::cout<<es1;
    std::cout<<"\n\n\n";
    Clasa a9a;
    a9a.adauga_elev(std::make_shared<Elev_special>(20, "Mihai", "Virgil", "100110101",  4, "Slobozia", Situatie_parentala::orfan, Stare_de_sanatate::nesanatos));
    a9a.adauga_elev(es1.clone());
    a9a.adauga_elev(e1.clone());
//    std::cout<<a9a;
    std::cout<<"\n\n\n";
    Profesor p1 ( 49, "Antonescu","David", "1059265959665", Ocupatie::profesor, 1, "Matematica", 25);
    x->adaugare_prof(p1.clone());
    x->adaugare_clasa(a9a);
    std::cout<<*x;



}