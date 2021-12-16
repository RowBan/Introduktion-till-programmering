//#include "issorted.h"
#include <iostream>
#include <fstream>

//bool is_sorted(std::string, std::string, std::ifstream&, std::ifstream&);
void merge(std::string, std::string, std::ifstream&, std::ifstream&, std::ofstream&);

int main()
{
    std::ifstream inFile1, inFile2;
    std::ofstream outFile;
    std::string filename1, filename2;
    merge(filename1, filename2, inFile1, inFile2, outFile);
    //bool issorted;
    //issorted = is_sorted(filename1, filename2, inFile1, inFile2);
    
    /*if(issorted == true)
    {
        std::cout << "File is sorted." << std::endl;
        merge(filename1, filename2, inFile1, inFile2, outFile);
    }
    else
        std::cout << "File is not sorted." << std::endl;
    return(0);*/
}

/*bool is_sorted(std::string chksortfile1, std::string chksortfile2, std::ifstream& inFileRef1, std::ifstream& inFileRef2)
{
    std::cout << "Choose two files to check if they're sorted: " << std::endl;
    std::cin >> chksortfile1 >> chksortfile2;
    inFileRef1.open(chksortfile1), inFileRef2.open(chksortfile2);
    if(inFileRef1.is_open() && inFileRef2.is_open())
    {
        std::cout << "Files opened\n" << std::endl;
        int a, b, c, d;
        inFileRef1 >> a;
        inFileRef2 >> c;

        while(!inFileRef1.eof())
        {
            inFileRef1 >> b;
            if(a > b)
            {
                return false;
            }
            else
                a = b;
        }
        while(!inFileRef2.eof())
        {
            inFileRef2 >> d;
            if(c > d)
            {
                return false;
            }
            else
                c = d;
        }
        inFileRef1.close(), inFileRef2.close();
    }
    else
        std::cout << "File couldn't open\n" << std::endl;
return true;
}*/

void merge(std::string filenameRef1, std::string filenameRef2, std::ifstream& inFileRef1, std::ifstream& inFileRef2, std::ofstream& outFileRef)
{
    std::cout << "Choose two files to merge: " << std::endl;
    std::cin >> filenameRef1 >> filenameRef2;
    inFileRef1.open(filenameRef1), inFileRef2.open(filenameRef2), outFileRef.open("Merged");
    int a, b;
    inFileRef1 >> a;
    inFileRef2 >> b;
    if(inFileRef1.is_open() && inFileRef2.is_open() && outFileRef.is_open())
    {
        std::cout << "Output filestream opened correctly." << std::endl;
    }
    else
        std::cout << "Output filestream did not open correctly." << std::endl;
    /*while(!inFileRef1.eof() && !inFileRef2.eof())
    {
        if(a < b)
        {
            outFileRef << a << std::endl;
            inFileRef1 >> a;
        }
        else
            outFileRef << b << std::endl;
            inFileRef2 >> b;
    }*/
    while(!inFileRef1.eof())
    {
        outFileRef << a << std::endl;
        inFileRef1 >> a;
    }
    while(!inFileRef2.eof())
    {
        outFileRef << b << std::endl;
        inFileRef2 >> b;
    }
return;
}