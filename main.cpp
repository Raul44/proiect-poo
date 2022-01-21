#include <iostream>
#include <vector>
#include "Elev.h"


int main()
{
    Elev e1 (17, "Anastasia", "Elena", "60456546812350", Ocupatie::elev,{},4.5f,"Bucuresti","Sanatos",Situatie_parentala::ambii_parinti);
    std::cout<<e1;
}
