#include <iostream>
#include <vector>
#include "Elev.h"
#include "Elev_special.h"


int main()
{
    Elev e1 (17, "Anastasia", "Elena", "60456546812350",factory_bursa::merit(),4.5f,"Bucuresti");
    std::cout<<e1;
    Elev_special es1 (16, "Radu", "Hera", "5049646546145", {}, 8, "Bucuresti", Situatie_parentala::un_parinte, Stare_de_sanatate::sanatos);
    std::cout<<es1;
}
