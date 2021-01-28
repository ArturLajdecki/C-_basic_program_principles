#include <iostream>
#include <fstream>
#include <Animal.h>
#include <Menu.h>
using namespace std;

int main()
{
    Menu test("zoo1.txt");
    test.LoadFromFile();
    test.Display();
    test.SaveFile();
    return 0;
}
