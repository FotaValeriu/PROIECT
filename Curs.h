#include <string>

class CURS
{
private:
    std::string nume, sala, profesor, zi;
    int nr_ore, nr_credite, ora_inceput, ora_sfarsit;
public:
    void ReducereOre(int x);
    void AdaugareOre(int x);
    void StergereSala();
    void AdaugareSala(std::string x);
    void Informatii();
    void AdaugareOrar(std::string x, int y, int z);
    void StergereOrar();
    CURS(std::string n, int x, int y, int z, std::string s, std::string p, std::string Z)
    {
        nume = n;
        nr_ore = x;
        nr_credite = y;
        ora_inceput = z;
        ora_sfarsit = ora_inceput + nr_ore;
        sala = s;
        profesor = p;
        zi = Z;
    }
};
