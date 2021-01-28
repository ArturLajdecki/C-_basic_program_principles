#include "Menu.h"
#include <fstream>
#include <iostream>

Menu::Menu()
{
    std::cout << "Insert file_name" << std::endl;
    std::cin >> file_name;
    ter_arr = new Terrestrial [0];
    aqu_arr = new Aquatic [0];
    aer_arr = new Aerial [0];
    Nter = 0;
    Naqu = 0;
    Naer = 0;
}

Menu::Menu(string file_n)
{
    file_name = file_n;
    ter_arr = new Terrestrial [0];
    aqu_arr = new Aquatic [0];
    aer_arr = new Aerial [0];
    Nter = 0;
    Naqu = 0;
    Naer = 0;
}

bool Menu::Display()
{
    int choice = -1;

    std::cout << "ZOO MANAGER" << std::endl;
    std::cout << "1. Display list of animals" << std::endl;
    std::cout << "2. Add a new animal" << std::endl;
    std::cout << "3. Delete animal from the list" << std::endl;
    std::cout << "4. Exit" << std::endl;

    while(choice != 4)
    {
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                {
                    DisplayAnimal();
                    break;
                }

            case 2:
                {
                    AddAnimal();
                    break;
                }

            case 3:
                {
                    DeleteAnimal();
                    break;
                }

            case 4:
                {
                    std::cout<<"You have exited the program."<<std::endl;
                    break;
                }

            default:
                {
                    std::cout << "Incorrect choice. Choose between 1 - 4." << std::endl;
                }

        }
    }
}

void Menu::AddAnimal()
{
    int number;
    bool exit ;



    while( exit != true )
    {
        std::cout << "---ADDING CHOICE---" << std::endl;
        std::cout << "1. Add terrestrial." << std::endl;
        std::cout << "2. Add aquatic." << std::endl;
        std::cout << "3. Add aerial." << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin >> number;

        switch(number)
        {
            case 1:
                {
                    std::cout << "Fill the data of Terrestrial." << std::endl;

                    string name;
                    string nickname;
                    int diet;
                    double weight;
                    int age;
                    int run;
                    int run_type;

                    std::cout << "Name: ";
                    std::cin >> name;


                    std::cout << "Nickname: ";
                    std::cin >> nickname;


                    std::cout << "Diet: ";
                    std::cin >> diet;

                    std::cout << "Weight: ";
                    std::cin >> weight;


                    std::cout << "Age: ";
                    std::cin >> age;

                    std::cout << "Run: ";
                    std::cin >> run;

                    std::cout << "Type of run: ";
                    std::cin >> run_type;

                    AddTerrestrial(name, nickname, diet, weight, age, run, run_type);
                    std::cout<<std::endl;
                    break;
                }

            case 2:
                {
                    std::cout << "Fill the data of Aquatic." << std::endl;

                    string name;
                    string nickname;
                    int diet;
                    double weight;
                    int age;
                    int aquarium;
                    int water;

                    std::cout << "Name: ";
                    std::cin >> name;


                    std::cout << "Nickname: ";
                    std::cin >> nickname;


                    std::cout << "Diet: ";
                    std::cin >> diet;

                    std::cout << "Weight: ";
                    std::cin >> weight;


                    std::cout << "Age: ";
                    std::cin >> age;

                    std::cout << "Run: ";
                    std::cin >> aquarium;

                    std::cout << "Type of run: ";
                    std::cin >> water;

                    AddAquatic(name, nickname, diet, weight, age, aquarium, water);
                    std::cout<<std::endl;
                    break;
                }

            case 3:
                {
                    std::cout << "Fill the data of Aerial." << std::endl;

                    string name;
                    string nickname;
                    int diet;
                    double weight;
                    int age;
                    int cage;
                    int cage_type;

                    std::cout << "Name: ";
                    std::cin >> name;


                    std::cout << "Nickname: ";
                    std::cin >> nickname;


                    std::cout << "Diet: ";
                    std::cin >> diet;

                    std::cout << "Weight: ";
                    std::cin >> weight;


                    std::cout << "Age: ";
                    std::cin >> age;

                    std::cout << "Run: ";
                    std::cin >> cage;

                    std::cout << "Type of run: ";
                    std::cin >> cage_type;

                    AddAerial(name, nickname, diet, weight, age, cage, cage_type);
                    std::cout<<std::endl;
                    break;
                }

            case 4:
                {
                    std::cout << "You have exited the ADDING CHOICE." << std::endl;
                    std::cout<<std::endl;
                    std::cout << "ZOO MANAGER" << std::endl;
                    std::cout << "1. Display list of animals" << std::endl;
                    std::cout << "2. Add a new animal" << std::endl;
                    std::cout << "3. Delete animal from the list" << std::endl;
                    std::cout << "4. Exit" << std::endl;
                    std::cout<<std::endl;
                    exit = true;
                    break;
                }

            default:
                {
                    std::cout << "Incorrect choice. Choose between 1 - 4" << std::endl;
                    break;
                }
        }
    }

}

void Menu::DeleteAnimal()
{
    int number = 1;
    bool exit = false;


    while( exit != true )
    {
        std::cout << "---DELETING CHOICE---" << std::endl;
        std::cout << "1. Terrestrial list." << std::endl;
        std::cout << "2. Aquatic list." << std::endl;
        std::cout << "3. Aerial list." << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin >> number;

        switch(number)
        {
            case 1:
                {
                    std::cout << " -------LIST OF TERRESTRIAL ANIMALS------- " << std::endl;
                    DisplayTerrestrial();
                    DeleteTerrestrial();
                    std::cout<<std::endl;
                    break;
                }

            case 2:
                {
                    std::cout << " -------LIST OF AQUATIC ANIMALS------- " << std::endl;
                    DisplayAquatic();
                    DeleteAquatic();
                    std::cout<<std::endl;
                    break;
                }

            case 3:
                {
                    std::cout << " -------LIST OF AERIAL ANIMALS------- " << std::endl;
                    DisplayAerial();
                    DeleteAerial();
                    std::cout<<std::endl;
                    break;
                }

            case 4:
                {
                    std::cout << "You have exited the LIST CHOICE." << std::endl;
                    std::cout<<std::endl;
                    std::cout << "ZOO MANAGER" << std::endl;
                    std::cout << "1. Display list of animals" << std::endl;
                    std::cout << "2. Add a new animal" << std::endl;
                    std::cout << "3. Delete animal from the list" << std::endl;
                    std::cout << "4. Exit" << std::endl;
                    std::cout<<std::endl;
                    exit = true;
                    break;
                }

            default:
                {
                    std::cout << "Incorrect choice. Choose between 1 - 4" << std::endl;
                    break;
                }
        }
    }
}

void Menu::AddTerrestrial(string name, string nickname, int diet, double weight, int age, int run, int run_type)
{
    Terrestrial new_ter( name, nickname, diet, weight, age, run, run_type );
    if(Nter > 0)
    {
        if(Nter == 1)
        {
            Nter++;
            Terrestrial * new_arr = new Terrestrial[Nter];
            new_arr[0] = ter_arr[0];
            delete [] ter_arr;

            ter_arr = new Terrestrial[Nter];
            ter_arr[0] = new_arr[0];
            delete [] new_arr;
            ter_arr[Nter-1] = new_ter;
        }
        else
        {
            Nter++;
            Terrestrial * new_arr = new Terrestrial[Nter];
            for(int i = 0; i < Nter - 1; i++)
                new_arr[i] = ter_arr[i];
            delete [] ter_arr;

            ter_arr = new Terrestrial[Nter];
            for(int i = 0; i < Nter - 1; i++)
                ter_arr[i] = new_arr[i];
            delete [] new_arr;
            ter_arr[Nter-1] = new_ter;
        }

    }
    else
    {
        delete [] ter_arr;
        Nter++;
        ter_arr = new Terrestrial[Nter];
        ter_arr[Nter-1] = new_ter;
    }
}

void Menu::AddAquatic(string name, string nickname, int diet, double weight, int age, int aquarium, int water)
{
    Aquatic new_aqu( name, nickname, diet, weight, age, aquarium, water);
    if(Naqu > 0)
    {
        if(Naqu == 1)
        {
            Naqu++;
            Aquatic * new_arr = new Aquatic[Naqu];
            new_arr[0] = aqu_arr[0];
            delete [] aqu_arr;

            aqu_arr = new Aquatic[Naqu];
            aqu_arr[0] = new_arr[0];
            delete [] new_arr;
            aqu_arr[Naqu-1] = new_aqu;
        }
        else
        {
            Naqu++;
            Aquatic * new_arr = new Aquatic[Naqu];
            for(int i = 0; i < Naqu - 1; i++)
                new_arr[i] = aqu_arr[i];
            delete [] aqu_arr;

            aqu_arr = new Aquatic[Naqu];
            for(int i = 0; i < Naqu - 1; i++)
                aqu_arr[i] = new_arr[i];
            delete [] new_arr;
            aqu_arr[Naqu-1] = new_aqu;
        }

    }
    else
    {
        delete [] aqu_arr;
        Naqu++;
        aqu_arr = new Aquatic[Naqu];
        aqu_arr[Naqu-1] = new_aqu;
    }
}

void Menu::AddAerial(string name, string nickname, int diet, double weight, int age, int cage, int cage_type)
{
    Aerial new_aer( name, nickname, diet, weight, age, cage, cage_type);
    if(Naer > 0)
    {
        if(Naer == 1)
        {
            Naer++;
            Aerial * new_arr = new Aerial[Naer];
            new_arr[0] = aer_arr[0];
            delete [] aer_arr;

            aer_arr = new Aerial[Naer];
            aer_arr[0] = new_arr[0];
            delete [] new_arr;
            aer_arr[Naer-1] = new_aer;
        }
        else
        {
            Naer++;
            Aerial * new_arr = new Aerial[Naer];
            for(int i = 0; i < Naer - 1; i++)
                new_arr[i] = aer_arr[i];
            delete [] aer_arr;

            aer_arr = new Aerial[Naer];
            for(int i = 0; i < Naer - 1; i++)
                aer_arr[i] = new_arr[i];
            delete [] new_arr;
            aer_arr[Naer-1] = new_aer;
        }

    }
    else
    {
        delete [] aer_arr;
        Naer++;
        aer_arr = new Aerial[Naer];
        aer_arr[Naer-1] = new_aer;
    }
}


bool Menu::SaveFile()
{
        SaveToFileT();
        SaveToFileQ();
        SaveToFileA();
}

bool Menu::SaveToFileT()
{
    using namespace std;
    ofstream file;
    file.open("zoo1.txt", ios_base::app);
    char control = 'T';

    for(int i = 0; i < Nter; i++)
    {
        string name = ter_arr[i].getName();
        string nickname = ter_arr[i].getNickname();
        int diet = ter_arr[i].getDiet();
        double weight = ter_arr[i].getWeight();
        int age = ter_arr[i].getAge();
        int run = ter_arr[i].getRun();
        int run_type = ter_arr[i].getRun_type();

        file << control << ' ' << name << ' ' << nickname << ' ' << diet << ' ' << weight << ' ' << age << ' ' << run << ' ' << run_type << endl;
    }

    file.close();
}
bool Menu::SaveToFileQ()
{
    using namespace std;
    ofstream file;
    file.open("zoo1.txt", ios_base::app);
    char control = 'Q';

    for(int i = 0; i < Naqu; i++)
    {
        string name = aqu_arr[i].getName();
        string nickname = aqu_arr[i].getNickname();
        int diet = aqu_arr[i].getDiet();
        double weight = aqu_arr[i].getWeight();
        int age = aqu_arr[i].getAge();
        int aquarium = aqu_arr[i].getAquarium();
        int water = aqu_arr[i].getWater();

        file << control << ' ' << name << ' ' << nickname << ' ' << diet << ' ' << weight << ' ' << age << ' ' << aquarium << ' ' << water << endl;
    }
    file.close();
}
bool Menu::SaveToFileA()
{
    using namespace std;
    ofstream file;
    file.open("zoo1.txt", ios_base::app);
    char control = 'A';

    for(int i = 0; i < Naer; i++)
    {
        string name = aer_arr[i].getName();
        string nickname = aer_arr[i].getNickname();
        int diet = aer_arr[i].getDiet();
        double weight = aer_arr[i].getWeight();
        int age = aer_arr[i].getAge();
        int cage = aer_arr[i].getCage();
        int cage_type = aer_arr[i].getCage_type();

        file << control << ' ' << name << ' ' << nickname << ' ' << diet << ' ' << weight << ' ' << age << ' ' << cage << ' ' << cage_type << endl;
    }

    file.close();
}

void Menu::DisplayTerrestrial()
{
    std::fstream file;
    string f_name = file_name;
    file.open("zoo1.txt");

     for(int i=0; i<Nter; i++)
    {
        std::cout << ter_arr[i].getName() << ' ' << ter_arr[i].getNickname() << ' ' << ter_arr[i].getDiet() << ' ' << ter_arr[i].getWeight() << ' ' << ter_arr[i].getAge() << ' ' << ter_arr[i].getRun() << ' ' << ter_arr[i].getRun_type() << std::endl;
    }

     file.close();
}

void Menu::DisplayAquatic()
{
    std::fstream file;
    file.open("zoo1.txt");

     for(int i=0; i<Naqu; i++)
    {
        std::cout << aqu_arr[i].getName() << ' ' << aqu_arr[i].getNickname() << ' ' << aqu_arr[i].getDiet() << ' ' << aqu_arr[i].getWeight() << ' ' << aqu_arr[i].getAge() << ' ' << aqu_arr[i].getAquarium() << ' ' << aqu_arr[i].getWater() << std::endl;
    }

     file.close();
}

void Menu::DisplayAerial()
{
    std::fstream file;
    file.open("zoo1.txt");

     for(int i=0; i<Naer; i++)
    {
        std::cout << aer_arr[i].getName() << ' ' << aer_arr[i].getNickname() << ' ' << aer_arr[i].getDiet() << ' ' << aer_arr[i].getWeight() << ' ' << aer_arr[i].getAge() << ' ' << aer_arr[i].getCage() << ' ' << aer_arr[i].getCage_type() << std::endl;
    }

     file.close();
}

bool Menu::LoadFromFile()
{
    using namespace std;
    ifstream file;
    int rows = RowsInFile();
    file.open("zoo1.txt");

    int run;
    int run_type;
    int aquarium;
    int water;
    int cage;
    int cage_type;
    string name;
    string nickname;
    int diet;
    double weight;
    int age;
    char control;

    while(rows > 0)
    {
        file >> control;
        switch(control)
        {
            case 'T':
                file >> name >> nickname >> diet >> weight >> age >> run >> run_type;
                AddTerrestrial(name, nickname, diet, weight, age, run, run_type);
                break;
            case 'Q':
                file >> name >> nickname >> diet >> weight >> age >> aquarium >> water;
                AddAquatic(name, nickname, diet, weight, age, aquarium, water);
                break;
            case 'A':
                file >> name >> nickname >> diet >> weight >> age >> cage >> cage_type;
                AddAerial(name, nickname, diet, weight, age, cage, cage_type);
                break;
        }
       rows--;
    }
    file.close();
}
int Menu::RowsInFile()
{
    using namespace std;
    ifstream file;
    file.open("zoo1.txt");
    int end_line = 0;
    char character;
    character = file.get();
    while(character != EOF)
    {
        character = file.get();
        if(character == '\n')
            end_line++;
    }
    file.close();
    return end_line;
}

void Menu::DeleteTerrestrial()
{
    int position = 0;

    std::cout<<"Enter position of the value you would like to delete."<<std::endl;
    std::cin>>position;

    Terrestrial* temp = new Terrestrial [Nter-1];

    for (int i = 0; i < position; i++)
    {
        temp[i] = ter_arr[i];
    }

    for (int i = position; i < Nter-1; i++)
    {
        temp[i] = ter_arr[i+1];
    }


    Nter = Nter-1;

    *ter_arr = *temp;

    delete[] temp;
}

void Menu::DeleteAquatic()
{
    int position = 0;

    std::cout<<"Enter position of the value you would like to delete."<<std::endl;
    std::cin>>position;

    Aquatic* temp = new Aquatic [Naqu-1];

    for (int i = 0; i < position; i++)
    {
        temp[i] = aqu_arr[i];
    }

    for (int i = position; i < Naqu-1; i++)
    {
        temp[i] = aqu_arr[i+1];
    }


    Naqu = Naqu-1;

    *aqu_arr = *temp;

    delete[] temp;
}

void Menu::DeleteAerial()
{
    int position = 0;

    std::cout<<"Enter position of the value you would like to delete."<<std::endl;
    std::cin>>position;

    Aerial* temp = new Aerial [Naer-1];

    for (int i = 0; i < position; i++)
    {
        temp[i] = aer_arr[i];
    }

    for (int i = position; i < Naer-1; i++)
    {
        temp[i] = aer_arr[i+1];
    }


    Naer = Naer-1;

    *aer_arr = *temp;

    delete[] temp;
}

void Menu::DisplayAnimal()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int number = -1;
    bool exit = false;

    while( exit != true )
    {
        std::cout << "---LIST CHOICE---" << std::endl;
        std::cout << "1. Terrestrial list." << std::endl;
        std::cout << "2. Aquatic list." << std::endl;
        std::cout << "3. Aerial list." << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> number;

        switch(number)
        {
            case 1:
                {
                    cout << endl;
                    cout << "------------------------LIST OF TERRESTRIAL ANIMALS-----------------------" << endl << endl;
                    cout << "No.";
                    cout.width(9);
                    cout << "Name";
                    cout.width(10);
                    cout << "Nickname";
                    cout.width(15);
                    cout << "Diet";
                    cout.width(7);
                    cout << "Weight";
                    cout.width(5);
                    cout << "Age";
                    cout.width(10);
                    cout << "Run";
                    cout.width(15);
                    cout << "Type of run" << endl;
                    DisplayTerrestrial();
                    cout << endl;
                    break;
                }
            case 2:
                {
                    std::cout << " -------LIST OF AQUATIC ANIMALS------- " << std::endl;
                    DisplayAquatic();
                    std::cout<<std::endl;
                    break;
                }
            case 3:
                {
                    std::cout << " -------LIST OF AERIAL ANIMALS------- " << std::endl;
                    DisplayAerial();
                    std::cout<<std::endl;
                    break;
                }
            case 4:
                {
                    std::cout << "You have exited the LIST CHOICE." << std::endl;
                    std::cout<<std::endl;
                    std::cout << "ZOO MANAGER" << std::endl;
                    std::cout << "1. Display list of animals" << std::endl;
                    std::cout << "2. Add a new animal" << std::endl;
                    std::cout << "3. Delete animal from the list" << std::endl;
                    std::cout << "4. Exit" << std::endl;
                    std::cout<<std::endl;
                    exit = true;
                    break;
                }
            default:
                {
                    std::cout << "Incorrect choice. Choose between 1 - 4" << std::endl;
                    break;
                }
        }
    }
}

Menu::~Menu()
{
    delete [] ter_arr;
    delete [] aqu_arr;
    delete [] aer_arr;
}
