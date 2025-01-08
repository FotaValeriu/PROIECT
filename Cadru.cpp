#include "CADRU.h"
#include <iostream>
#include <string>


void CADRU::AfisareCURS()
{
    std::cout << CURS[1] << "       " << CURS[2];
}

void CADRU::AdaugareCurs(std::string x)
{
    if (CURS[1] == " ")
    {
        CURS[1] = x;
    }
    else
    {
        if (CURS[2] == " ")
        {
            CURS[2] = x;
        }
    }
}

void CADRU::StergereCurs(std::string x)
{
    if (CURS[1] == x)
    {
        CURS[1] = " ";
    }
    else
    {
        if (CURS[2] == x)
        {
            CURS[2] = " ";
        }
    }
}


