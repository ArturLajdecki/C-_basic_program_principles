#ifndef MENU_H
#define MENU_H
#include "Animal.h"

class Menu
{
    public:

        Menu();
        Menu(string file_n);

        virtual ~Menu();

         //Getters
        int getNter()               { return Nter; };
        int getNaqu()               { return Naqu; };
        int getNaer()               { return Naer; };
        Terrestrial* getTerArr()    { return ter_arr; };
        Aquatic* getAquArr()        { return aqu_arr; };
        Aerial* getAerArr()         { return aer_arr; };

        //Setters
        void setNter( int Nter1 )               { Nter = Nter1; };
        void setNaqu( int Naqu1 )                { Naqu = Naqu1; };
        void setNaer( int Naer1 )                { Naer = Naer1; };
        void setTerArr( Terrestrial* ter_arr1 ) { ter_arr = ter_arr1; };
        void setAquArr( Aquatic* aqu_arr1 )     { aqu_arr = aqu_arr1; };
        void setAerArr( Aerial* aer_arr1 )      { aer_arr = aer_arr1; };

        bool Display();

        void DisplayAnimal();
        void AddAnimal();
        void DeleteAnimal();

        void DeleteTerrestrial();
        void DeleteAquatic();
        void DeleteAerial();

        void DisplayTerrestrial();
        void DisplayAquatic();
        void DisplayAerial();

        void AddTerrestrial(string name, string nickname, int diet, double weight, int age, int run, int run_type);
        void AddAquatic(string name, string nickname, int diet, double weight, int age, int aquarium, int water);
        void AddAerial(string name, string nickname, int diet, double weight, int age, int cage, int cage_type);

        bool SaveToFileT();
        bool SaveToFileQ();
        bool SaveToFileA();

        bool SaveFile();
        bool LoadFromFile();
        int RowsInFile();



    protected:

    private:
        string file_name;
        Terrestrial * ter_arr;
        Aquatic * aqu_arr;
        Aerial * aer_arr;
        int Nter;
        int Naqu;
        int Naer;
};

#endif // MENU_H
