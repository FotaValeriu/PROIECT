#include "CURS.h"
#include "CADRU.h"
#include "SPECIALIZARE.h"
#include "functie.h"
#include <iostream>
#include <string>

using namespace std;

void Selectare(std::string x, CURS c1, CURS c2, CURS c3, CURS c4, CURS c5, CURS c6, CURS c7, CURS c8, CURS c9, CURS c10, CURS c11, CURS c12, CURS c13, CURS c14, CURS c15, CURS c16, CURS c17)
{
    if (x == "STRUCTURI_DE_DATE")
    {
        c1.Informatii();
    }
    else
    {
        if (x == "TEORIA_SISTEMELOR")
        {
            c2.Informatii();
        }
        else
        {
            if (x == "ELECTRONICA_ANALOGICA")
            {
                c3.Informatii();
            }
            else
            {
                if (x == "PROGRAMARE_OBIECTE")
                {
                    c4.Informatii();
                }
                else
                {
                    if (x == "ARHITECTURA_SISTEME")
                    {
                        c5.Informatii();
                    }
                    else
                    {
                        if (x == "SEMNALE_SI_SISTEME")
                        {
                            c6.Informatii();
                        }
                        else
                        {
                            if (x == "MICROUNDE")
                            {
                                c7.Informatii();
                            }
                            else
                            {
                                if (x == "MARKETING")
                                {
                                    c8.Informatii();
                                }
                                else
                                {
                                    if (x == "DISPOZITIVE_ELECTRONICE")
                                    {
                                        c9.Informatii();
                                    }
                                    else
                                    {
                                        if (x == "ELECTRONICA")
                                        {
                                            c10.Informatii();
                                        }
                                        else
                                        {
                                            if (x == "ECONOMIE")
                                            {
                                                c11.Informatii();
                                            }
                                            else
                                            {
                                                if (x == "INFO_APLICATA")
                                                {
                                                    c12.Informatii();
                                                }
                                                else
                                                {
                                                    if (x == "DISPOZITIVE_NUMERICE")
                                                    {
                                                        c13.Informatii();
                                                    }
                                                    else
                                                    {
                                                        if (x == "SPORT")
                                                        {
                                                            c14.Informatii();
                                                        }
                                                        else
                                                        {
                                                            if (x == "ENGLEZA")
                                                            {
                                                                c15.Informatii();
                                                            }
                                                            else
                                                            {
                                                                if (x == "BAZE_DE_DATE")
                                                                {
                                                                    c16.Informatii();
                                                                }
                                                                else
                                                                {
                                                                    if (x == "CIRCUITE_ELECTRONICE")
                                                                    {
                                                                        c17.Informatii();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void start()
{
    int x;
    string denumire;

    CADRU PROFESOR1("Popescu", "STRUCTURI_DE_DATE", " ");
    CADRU PROFESOR2("Enache", "TEORIA_SISTEMELOR", "ELECTRONICA");
    CADRU PROFESOR3("Bancu", "ELECTRONICA_ANALOGICA", "INFO_APLICATA");
    CADRU PROFESOR4("Curelea", "PROGRAMARE_OBIECTE", "BAZE_DE_DATE");
    CADRU PROFESOR5("Matei", "ARHITECTURA_SISTEME", "DISPOZITIVE_ELECTRONICE");
    CADRU PROFESOR6("Ionescu", "SEMNALE_SI_SISTEME", " ");
    CADRU PROFESOR7("Stanciu", "MICROUNDE", " ");
    CADRU PROFESOR8("Dumitrescu", "MARKETING", " ");
    CADRU PROFESOR9("Petrescu", "ECONOMIE", " ");
    CADRU PROFESOR10("Cristea", "SPORT", " ");
    CADRU PROFESOR11("Toma", "DISPOZITIVE_NUMERICE", " ");
    CADRU PROFESOR12("Munteanu", "ENGLEZA", " ");
    CADRU PROFESOR13("Iancu", "CIRCUITE_ELECTRONICE", " ");

    CURS curs1("STRUCTURI_DE_DATE", 2, 4, 8, "SP1", "Popescu", "LUNI");
    CURS curs2("TEORIA_SISTEMELOR", 2, 4, 10, "SP2", "Enache", "LUNI");
    CURS curs3("ELECTRONICA_ANALOGICA", 2, 4, 12, "SP3", "Bancu", "LUNI");
    CURS curs4("PROGRAMARE_OBIECTE", 2, 4, 8, "SP4", "Curelea", "MARTI");
    CURS curs5("ARHITECTURA_SISTEME", 3, 5, 10, "SP5", "Matei", "MARTI");
    CURS curs6("SEMNALE_SI_SISTEME", 2, 5, 14, "301", "Ionescu", "MARTI");
    CURS curs7("MICROUNDE", 2, 3, 16, "302", "Stanciu", "MARTI");
    CURS curs8("MARKETING", 2, 5, 18, "304", "Dumitrescu", "MARTI");
    CURS curs9("DISPOZITIVE_ELECTRONICE", 2, 5, 8, "305", "Matei", "MIERCURI");
    CURS curs10("ELECTRONICA", 2, 2, 10, "AGR1", "Enache", "MIERCURI");
    CURS curs11("ECONOMIE", 2, 5, 12, "AGR2", "Petrescu", "MIERCURI");
    CURS curs12("INFO_APLICATA", 2, 3, 14, "AGR3", "Bancu", "MIERCURI");
    CURS curs13("DISPOZITIVE_NUMERICE", 2, 5, 16, "AGR4", "Toma", "JOI");
    CURS curs14("SPORT", 2, 4, 8, "0.1", "Cristea", "JOI");
    CURS curs15("ENGLEZA", 2, 5, 10, "0.2", "Munteanu", "JOI");
    CURS curs16("BAZE_DE_DATE", 2, 5, 12, "0.3", "Curelea", "JOI");
    CURS curs17("CIRCUITE_ELECTRONICE", 2, 3, 10, "0.4", "Iancu", "VINERI");


    SPECIALIZARE specializare1("CALCULATOARE", "Popescu", "Enache", "Bancu", "Curelea", "Matei", "STRUCTURI_DE_DATE", "TEORIA_SISTEMELOR", "ELECTRONICA_ANALOGICA", "PROGRAMARE_OBIECTE", "ARHITECTURA_SISTEME");
    SPECIALIZARE specializare2("ELECTRONICA_APLICATA", "Ionescu", "Stanciu", "Dumitrescu", "Matei", " ", "SEMNALE_SI_SISTEME", "MICROUNDE", "MARKETING", "DISPOZITIVE_ELECTRONICE", " ");
    SPECIALIZARE specializare3("MECATRONICA", "Enache", "Petrescu", "Bancu", "Toma", " ", "ELECTRONICA", "ECONOMIE", "INFO_APLICATA", "DISPOZITIVE_NUMERICE", " ");
    SPECIALIZARE specializare4("ROBOTICA", "Cristea", "Munteanu", "Curelea", "Iancu", " ", "SPORT", "ENGLEZA", "BAZE_DE_DATE", "CIRCUITE_ELECTRONICE", " ");

    cout << "4 SPECIALIZARI DISPONIBILE: \nI." << specializare1.nume << "\nII." << specializare2.nume << "\nIII." << specializare3.nume << "\nIV." << specializare4.nume << "\n\nINTRODUCETI NUMARUL DE ORDINE AL SPECIALIZARII PENTRU A VEDEA MAI MULTE INFORMATII: ";
    while (cin >> x)
    {
        cout << endl;
        if (x == 1)
        {
            cout << "ATI ALES SPECIALIZAREA -" << specializare1.nume << "-. CURSURI DISPONIBILE:\n";
            specializare1.AFISAREmaterii();
            cout << endl;
            cout << endl;
            cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            while (cin >> denumire)
            {
                Selectare(denumire, curs1, curs2, curs3, curs4, curs5, curs6, curs7, curs8, curs9, curs10, curs11, curs12, curs13, curs14, curs15, curs16, curs17);
                if (denumire == "stop")
                {
                    break;
                }
                cout << endl;
                cout << endl;
                cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            }
        }

        if (x == 2)
        {
            cout << "ATI ALES SPECIALIZAREA -" << specializare2.nume << "-. CURSURI DISPONIBILE:\n";
            specializare2.AFISAREmaterii();
            cout << endl;
            cout << endl;
            cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            while (cin >> denumire)
            {
                Selectare(denumire, curs1, curs2, curs3, curs4, curs5, curs6, curs7, curs8, curs9, curs10, curs11, curs12, curs13, curs14, curs15, curs16, curs17);
                if (denumire == "stop")
                {
                    break;
                }
                cout << endl;
                cout << endl;
                cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            }
        }

        if (x == 3)
        {
            cout << "ATI ALES SPECIALIZAREA -" << specializare3.nume << "-. CURSURI DISPONIBILE:\n";
            specializare3.AFISAREmaterii();
            cout << endl;
            cout << endl;
            cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            while (cin >> denumire)
            {
                Selectare(denumire, curs1, curs2, curs3, curs4, curs5, curs6, curs7, curs8, curs9, curs10, curs11, curs12, curs13, curs14, curs15, curs16, curs17);
                if (denumire == "stop")
                {
                    break;
                }
                cout << endl;
                cout << endl;
                cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            }
        }

        if (x == 4)
        {
            cout << "ATI ALES SPECIALIZAREA -" << specializare4.nume << "-. CURSURI DISPONIBILE:\n";
            specializare4.AFISAREmaterii();
            cout << endl;
            cout << endl;
            cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            while (cin >> denumire)
            {
                Selectare(denumire, curs1, curs2, curs3, curs4, curs5, curs6, curs7, curs8, curs9, curs10, curs11, curs12, curs13, curs14, curs15, curs16, curs17);
                if (denumire == "stop")
                {
                    break;
                }
                cout << endl;
                cout << endl;
                cout << "SCRIETI NUMELE CURSULUI PENTRU A VEDEA MAI MULTE INFORMATII: ";
            }
        }

        if (x == 0)
        {
            break;
        }

        cout << "4 SPECIALIZARI DISPONIBILE: \nI.CALCULATOARE \nII.ELECTRONICA APLICATA \nIII.MECATRONICA \nIV.ROBOTICA \n\nINTRODUCETI NUMARUL DE ORDINE AL SPECIALIZARII PENTRU A VEDEA MAI MULTE INFORMATII: ";
        cout << endl;
    }

}

