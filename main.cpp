#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // hianyzik egy _ hibas valtozo
    std::cout << '1-100 ertekek duplazasa'   //pontosvesszo vegere, dupla ""
    for (int i = 0;) // hiányoznak a for ciklus paraméterei
    {
        b[i] = i * 2; //masodik i az +1
    }
    for (int i = 0; i; i++)  //felesleges for ciklus, rossz hatarertek
    {
        std::cout << "Ertek:" //hianyzik pontosvesszo, nincs megadva az ertek sem, +std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //atlagnak kezdoerteket kell adni, int helyett double javasoltabb
    for (int i = 0; i < N_ELEMENTS, i++) //vesszo helyett pontosvesszo
    {
        atlag += b[i] //hianyzik pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
    
}
