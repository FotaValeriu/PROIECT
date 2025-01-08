#include "SPECIALIZARE.h"
#include <iostream>
#include <string>

void SPECIALIZARE::AFISAREprofesori()
{
    std::cout << profesor[1] << "     " << profesor[2] << "     " << profesor[3] << "     " << profesor[4] << "     " << profesor[5];
}

void SPECIALIZARE::AFISAREmaterii()
{
    std::cout << materie[1] << "     " << materie[2] << "     " << materie[3] << "     " << materie[4] << "     " << materie[5];
}

void SPECIALIZARE::ADAUGAREmaterie(std::string x)
{
    if (materie[1] == " ")
    {
        materie[1] = x;
    }
    else
    {
        if (materie[2] == " ")
        {
            materie[2] = x;
        }
        else
        {
            if (materie[3] == " ")
            {
                materie[3] = x;
            }
            else
            {
                if (materie[4] == " ")
                {
                    materie[4] = x;
                }
                else
                {
                    if (materie[5] == " ")
                    {
                        materie[5] = x;
                    }
                }
            }
        }
    }

}

void SPECIALIZARE::STERGEREmaterie(std::string x)
{
    if (materie[1] == x)
    {
        materie[1] = " ";
    }
    if (materie[2] == x)
    {
        materie[2] = " ";
    }
    if (materie[3] == x)
    {
        materie[3] = " ";
    }
    if (materie[4] == x)
    {
        materie[4] = " ";
    }
    if (materie[5] == x)
    {
        materie[5] = " ";
    }

}
