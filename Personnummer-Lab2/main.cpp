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

    std::ifstream person;                                                                       //ifstream variable for reading from file
    std::ofstream personNew;                                                                    //ofstream variable for output to new file
    person.open("names.txt");                                                                   //Open names.txt for instream
    std::string firstName, surName, nID, Adr, gender;                                           //Variable string for holding data from names.txt

    if(person.is_open())                                                                        //Verify file open
    {
        std::cout << "File open.\n" << std::endl;
        personNew.open("newnames.txt");                                                         //Open newnames.txt for outstream
        
        
        while(!person.eof())
        {
            getline(person, firstName, ' ');
            getline(person, surName);
            getline(person, nID);
            getline(person, Adr);
            //if((nID[8] - '0') % 2 == 0)                                                       //Metod 1 för modulus av personnummer på index 8
            if(static_cast<int>((nID.at(8) - 48)) % 2 == 0)                                     //Metod 2 för modulus av personnummer på index 8
            {
                gender = " [F]";
            }
            else
            {
                gender = " [M]";
            }
            //std::cout << static_cast<int>((nID.at(8) - 48) % 2 == 0) << std::endl;
            std::cout << surName << ", " << firstName << gender << std::endl << Adr << std::endl;
            personNew << surName << ", " << firstName << gender << std::endl << Adr << std::endl;
        }
        personNew.close();
        person.close();                                                                         //Close file
        std::cout << "\nFile closed." << std::endl;
    }
    else
        std::cout << "File could not open." << std::endl;
    

return(0);
}