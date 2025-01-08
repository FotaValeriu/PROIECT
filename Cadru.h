#include <string>

class CADRU
{
private:
    std::string CURS[3], NUME;
public:
    void AfisareCURS();
    void AdaugareCurs(std::string x);
    void StergereCurs(std::string x);
    CADRU(std::string n, std::string c1, std::string c2)
    {
        NUME = n;
        CURS[1] = c1;
        CURS[2] = c2;
    }
};

