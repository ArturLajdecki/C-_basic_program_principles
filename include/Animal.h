#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using std::string;

class Animal
{
    public:
        enum eating_habits { CARNIVOROUS, HERBIVOROUS, OMNIVOROUS, INSECTIVOROUS, LACK_OF_DATA };
        Animal();
        Animal( string name1, string nickname1, int diet1, double weight1, int age1 );
        virtual ~Animal();

        string getName() const          { return name; };
        string getNickname() const      { return nickname; };
        eating_habits getDiet() const   { return diet; };
        double getWeight() const        { return weight; };
        int getAge() const              { return age; };

        void setName( string name1 )          { name = name1; };
        void setNickname( string nickname1 )  { nickname = nickname1; };
        void setDiet( eating_habits diet1 )   { diet = diet1; };
        void setWeight( double weight1 )      { weight = weight1; };
        void setAge( int age1 )               { age = age1; };

    private:
        string name;
        string nickname;
        eating_habits diet;
        double weight;
        int age;
};

class Terrestrial : public Animal
{
    public:
        enum type_of_run { FORESTAL, DESERTIC, SWAMPY, TEMPERATE, LACK_OF_DATA  };
        Terrestrial();
        Terrestrial( string name1, string nickname1, int diet1, double weight1, int age1, int run1, int run_type1 ):Animal( name1, nickname1, diet1, weight1, age1 ), run(run1)
        {
            switch(run_type1)
                {
                    case 0:
                        run_type = FORESTAL;
                        break;
                    case 1:
                        run_type = DESERTIC;
                        break;
                    case 2:
                        run_type = SWAMPY;
                        break;
                    case 3:
                        run_type = TEMPERATE;
                        break;
                    default:
                        run_type = LACK_OF_DATA;
                }
        }
          virtual~Terrestrial();

        int getRun() const                { return run; };
        type_of_run getRun_type() const   { return run_type; };

        void setRun( int run1 )                     { run = run1; };
        void setRun_type( type_of_run run_type1)    { run_type = run_type1; };

    private:
        int run;
        type_of_run run_type;
};

class Aquatic : public Animal
{
    public:
        enum type_of_water {FRESHWATER, SALTWATER, LACK_OF_DATA};
        Aquatic();
        Aquatic( string name1, string nickname1, int diet1, double weight1, int age1, int aquarium1, int water1 ):Animal( name1, nickname1, diet1, weight1, age1 ),aquarium(aquarium1)
        {
            switch(water1)
            {
                case 0:
                    water = FRESHWATER;
                    break;
                case 1:
                    water = SALTWATER;
                    break;
                default:
                    water = LACK_OF_DATA;
            }
        }
        virtual~Aquatic();

        int getAquarium()  const         { return aquarium; };
        type_of_water getWater() const   { return water; };

        void setAquarium( int aquarium1 )       { aquarium = aquarium1; };
        void setWater( type_of_water water1 )   { water = water1; };

    private:
        int aquarium;
        type_of_water water;
};

class Aerial : public Animal
{
      public:
        enum type_of_cage {FORESTAL, TROPICAL, TEMPERATE, LACK_OF_DATA };
        Aerial();
        Aerial( string name1, string nickname1, int diet1, double weight1, int age1, int cage1, int cage_type1 ):Animal( name1, nickname1, diet1, weight1, age1 ),cage(cage1)
        {
            switch(cage_type1)
            {
                case 0:
                    cage_type = FORESTAL;
                    break;
                case 1:
                    cage_type = TROPICAL;
                    break;
                case 2:
                    cage_type = TEMPERATE;
                    break;
                default:
                    cage_type = LACK_OF_DATA;
            }
        }
        virtual~Aerial();

        int getCage() const                 { return cage; };
        type_of_cage getCage_type() const   { return cage_type; };

        void setCage( int cage1 )                       { cage = cage1; };
        void setCage_type( type_of_cage cage_type1 )    { cage_type = cage_type1; };

      private:
        int cage;
        type_of_cage cage_type;
};

#endif // ANIMAL_H
