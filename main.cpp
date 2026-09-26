#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

    struct Student
    {
        int id = 0;
        string name = "";
        float gpa = 0;
    };

    string file = "";
    std::vector<Student> studentInfo;
    std::vector<string> individualInfo;

    cout << "What is the name of the file? ";
    cin >> file;
    cout << file;

    std::ifstream inputFile(file);

    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    std::string line; // define a string to store each line in
    // while so it keeps going
    // int counter = -1;
    // while (std::getline(inputFile, line)) // getline reads entire line of text from an input
    // {
    //     std::cout << line << std::endl; // character out is the line
    //     counter++;
    // }
    // std::cout << counter << std::endl;

    // vector<string> studentInfo(counter);
    int spaceCounter = 0;

    while (std::getline(inputFile, line)) // getline reads entire line of text from an input
    {
        Student student;
        while (std::getline(inputFile, line)) // getline reads entire line of text from an input
        {
            individualInfo.push_back(line);
        }

        //     std::cout << line << std::endl;

        // for (const char ch : line)
        // {
        //     // std::cout << spaceCounter << ((spaceCounter % 3) == 0) << std::endl;
        //     if (ch == ' ')
        //     {
        //         spaceCounter++;
        //         std::cout << "space detected!" << std::endl;
        //         if (((spaceCounter % 3) == 0) == 1)
        //         {
        //             studentInfo.push_back('|');
        //             studentInfo.push_back('\n');
        //         }
        //     }
        // }
    }
    // for (char ch : studentInfo)
    // {
    //     std::cout << ch;
    // }
    // std::cout << std::endl;
}