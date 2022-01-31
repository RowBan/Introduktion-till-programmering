#include "merge.h"

void merge(std::string &filename1, std::string &filename2, std::ifstream &inFile1, std::ifstream &inFile2, std::fstream& outFile)
{
    std::cout << "Do you want to merge the two? Y/N." << std::endl;         //Ask user if they want to merge
    std::string y;                                                          //Variable for storing answer
    std::cin >> y;                                                          //Ask for answer
    if(y == "Y" || y == "y")                                                //If yes, run merge, else terminate
    {
        inFile1.open(filename1), inFile2.open(filename2), outFile.open("Merged");
        if(inFile1.is_open() && inFile2.is_open() && outFile.is_open())
        {
            std::cout << "I/O filestreams opened successfully.." << std::endl;
        }
        else
            std::cout << "I/O filestream did not open successfully.." << std::endl;

        int a, b;
        inFile1 >> a;
        inFile2 >> b;
        while(!inFile1.eof() && !inFile2.eof())
        {
            if(a < b)
            {
                outFile << a << " ";
                inFile1 >> a;
            }
            else
            {
                outFile << b << " ";
                inFile2 >> b;
            }
        }
        while(!inFile1.eof())
        {
            outFile << a << " ";
            inFile1 >> a;
        }
        while(!inFile2.eof())
        {
            outFile << b << " ";
            inFile2 >> b;
        }
        inFile1.close(), inFile2.close(), outFile.close();
        std::cout << "Merge done successfully.. \n \n" << std::endl;

        std::cout << "Do you want to check if the new file is sorted? Y/N" << std::endl << "If no error message is presented the file is sorted." << std::endl;
        std::cin >> y;
        if(y == "y" || y == "Y")
        {
            outFile.open("Merged");
            if(outFile.is_open())
            {
                int oFile1, oFile2;
                outFile >> oFile1;

                while(!outFile.eof())
                {
                    outFile >> oFile2;
                    if(oFile1 > oFile2)
                    {
                        std::cout << "Error! Merged file is not sorted." << std::endl;
                    }
                    else
                        oFile1 = oFile2;
                }
            }
            else
                std::cout << "Failed to open merged file." << std::endl;
        }
        else
            std::cout << "Terminating" << std::endl;
    }
    else
        std::cout << "Terminating" << std::endl;
return;
}