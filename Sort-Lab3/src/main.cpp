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
    bool issorted;
    //issorted = is_sorted(filename1, filename2, inFile1, inFile2);
    
    /*if(issorted == true)
    {
        std::cout << "File is sorted." << std::endl;
    }
    else
        std::cout << "File is not sorted." << std::endl;*/
    merge(filename1, filename2, inFile1, inFile2, outFile);
    return(0);
}

void merge(std::string filename1Ref, std::string filename2Ref, std::ifstream& inFile1Ref, std::ifstream& inFile2Ref, std::ofstream& outFileRef)
{
    std::cout << "Choose two sorted files to merge: " << std::endl;
    std::cin >> filename1Ref >> filename2Ref;
    inFile1Ref.open(filename2Ref), inFile2Ref.open(filename2Ref), outFileRef.open("Merged");
    int a, b;
    inFile1Ref >> a;
    inFile2Ref >> b;
    while(!inFile1Ref.eof() && !inFile2Ref.eof())
    {
        if(a < b)
        {
            outFileRef << a << std::endl;
            inFile1Ref >> a;
        }
        else
            outFileRef << b << std::endl;
            inFile2Ref >> b;
    }
    while(!inFile1Ref.eof())
    {
        outFileRef << a << std::endl;
        inFile1Ref >> a;
    }
    while(!inFile2Ref.eof())
    {
        outFileRef << b;
        inFile2Ref >> b;
    }
return;
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