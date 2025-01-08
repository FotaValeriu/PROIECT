#include "CURS.h"
#include <iostream>
#include <string>

void CURS::ReducereOre(int x)
{
    nr_ore -= x;
}

void CURS::AdaugareOre(int x)
{
    nr_ore += x;
}

void CURS::StergereSala()
{
    sala = " ";
}

void CURS::AdaugareSala(std::string x)
{
    sala = x;
}

void CURS::Informatii()
{
    std::cout << nume << "     " << "PROFESOR: " << profesor << "      " << "SALA: " << sala << "      " << "NUMAR ORE: " << nr_ore << "      " << "NUMAR CREDITE: " << nr_credite << "      " << "ORAR: " << zi << " " << ora_inceput << "-" << ora_sfarsit;
}

void CURS::AdaugareOrar(std::string x, int y, int z)
{
    zi = x;
    ora_inceput = y;
    ora_sfarsit = z;
}

void CURS::StergereOrar()
{
    zi = " ";
    ora_inceput = 0;
    ora_sfarsit = 0;
}

