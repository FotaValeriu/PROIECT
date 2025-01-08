#include <string>

class SPECIALIZARE
{
private:
    std::string profesor[6], materie[6];
public:
    std::string nume;
    void AFISAREprofesori();
    void AFISAREmaterii();
    void ADAUGAREmaterie(std::string x);
    void STERGEREmaterie(std::string x);
    SPECIALIZARE(std::string n, std::string p1, std::string p2, std::string p3, std::string p4, std::string p5, std::string m1, std::string m2, std::string m3, std::string m4, std::string m5)
    {
        nume = n;
        profesor[1] = p1;
        profesor[2] = p2;
        profesor[3] = p3;
        profesor[4] = p4;
        profesor[5] = p5;
        materie[1] = m1;
        materie[2] = m2;
        materie[3] = m3;
        materie[4] = m4;
        materie[5] = m5;
    }
};
