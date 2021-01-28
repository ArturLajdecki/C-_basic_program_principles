#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal()
{
    name = "---";
    nickname = "---";
    diet = LACK_OF_DATA;
    weight = 0;
    age = 0;
}
Animal::Animal(string name1, string nickname1, int diet1, double weight1, int age1)
{
    name = name1;
    nickname = nickname1;
    switch(diet1)
    {
        case 0:
            diet = CARNIVOROUS;
            break;
        case 1:
            diet = HERBIVOROUS;
            break;
        case 2:
            diet = OMNIVOROUS;
            break;
        case 3:
            diet = INSECTIVOROUS;
            break;
        default:
            diet = LACK_OF_DATA;
    }
    weight = weight1;
    age = age1;
}

Terrestrial::Terrestrial()
{
    run = 0;
    run_type = LACK_OF_DATA;
}

Aquatic::Aquatic()
{
    aquarium = 0;
    water = LACK_OF_DATA;
}

Aerial::Aerial()
{
    cage = 0;
    cage_type = LACK_OF_DATA;

}

Animal::~Animal()
{
    //dtor
}

Terrestrial::~Terrestrial()
{
    //dtor
}

Aquatic::~Aquatic()
{
    //dtor
}

Aerial::~Aerial()
{
    //dtor
}
