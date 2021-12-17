//#include "issorted.h"
#include <iostream>
#include <fstream>

bool is_sorted(std::string&, std::string&, std::ifstream&, std::ifstream&);
void merge(std::string&, std::string&, std::ifstream&, std::ifstream&, std::ofstream&);

int main()
{
    std::ifstream inFile1, inFile2;
    std::ofstream outFile;
    std::string filename1, filename2;
    std::cout << "Choose two files to check if they're sorted: " << std::endl;
    std::cin >> filename1 >> filename2;
    bool issorted;
    issorted = is_sorted(filename1, filename2, inFile1, inFile2);
    
    if(issorted == true)
    {
        std::cout << "Files are sorted." << std::endl;
        merge(filename1, filename2, inFile1, inFile2, outFile);
    }
    else
        std::cout << "Files are not sorted." << std::endl;
    return(0);
}

bool is_sorted(std::string &filename1, std::string &filename2, std::ifstream &inFile1, std::ifstream &inFile2)
{
    inFile1.open(filename1), inFile2.open(filename2);
    if(inFile1.is_open() && inFile2.is_open())
    {
        std::cout << "Files opened\n" << std::endl;
        int a, b, c, d;
        inFile1 >> a;
        inFile2 >> c;

        while(!inFile1.eof())
        {
            inFile1 >> b;
            if(a > b)
            {
                return false;
            }
            else
                a = b;
        }
        while(!inFile2.eof())
        {
            inFile2 >> d;
            if(c > d)
            {
                return false;
            }
            else
                c = d;
        }
        inFile1.close(), inFile2.close();
        return true;
    }
    else
        std::cout << "File couldn't open\n" << std::endl;
return false;
}

void merge(std::string &filename1, std::string &filename2, std::ifstream &inFile1, std::ifstream &inFile2, std::ofstream& outFile)
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
        inFile1.close(), inFile2.close();
        std::cout << "Merge done successfully.." << std::endl;
    }
    else
        std::cout << "Terminating" << std::endl;
return;
}