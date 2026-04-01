#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

void saveAndLoad() {

    //making an object
    Student s1; 
    
    // Getting the Scores
    cout << "What's your student's name?" << endl;
    cin >> s1.name;

    cout << "What's your student's score?" << endl;
    cin >> s1.score;

    
    //Writing to the file
    ofstream outFile("student.txt");
    //Write the name and score to the file
    outFile << s1.name << " " << s1.score << endl;
    // Close the File
    outfile.close();

    //Open the ifstream
    ifstream inFile("student.txt");
    Student s2;

    inFile >> s2.name >> s2.score
    cout << s2.name << " scored " << s2.score << endl;
    inFile.close();

    }
    
    
    // TODO 1: Ask the user for the student's name and score (use cin) to initialize struct members

    // TODO 2: Open an ofstream to "student.txt"
    // TODO 3: Write the name and score to the file
    // TODO 4: Close the output file

    // TODO 5: Open an ifstream to read from "student.txt"
    // TODO 6: Read the data back into a new Student object and print it
}

int main() {
    saveAndLoad();
    return 0;
}




