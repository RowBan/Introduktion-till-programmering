/* 
Robert Eriksson (roer2001)
2021-12-01
Laboration 2
Introduktion programmering 7,5hp 
*/
#include <iostream>
#include <fstream>

int main()
{

    std::ifstream personer;                     //Variabel för data från names.txt
    personer.open("namestest.txt");             //Öppnad names.txt
    if(personer.is_open())                      //Verifiera att names.txt öppnats
    {
        std::cout << "Filen öppnades korrekt" << std::endl;
        /*while(personer.is_open())
            {
                std::cout << x << std::endl;
            }*/
        personer.close();                       //Stäng filen, frigör resurser
        std::cout << "Filen stängd." << std::endl;
    }
    else
        std::cout << "Filen kunde inte öppnas" << std::endl;
    

return(0);
}