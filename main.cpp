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
    cout << file << std::endl;

    std::ifstream inputFile(file);

    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    std::string line; // define a string to store each line in

    int spaceCounter = 0;

    while (std::getline(inputFile, line)) // getline reads entire line of text from an input
    {
        Student student;
        while (std::getline(inputFile, line)) // getline reads entire line of text from an input
        {
            individualInfo.push_back(line);
        }
    }

    for (string item : individualInfo)
    {
        std::cout << item << std::endl;
    }
}