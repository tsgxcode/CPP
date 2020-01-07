#include <iostream>
#include <fstream>

using namespace std;

 main()
{
    //Ask for the user's info

    ofstream outputFile;
    outputFile.open("program3data.txt");
    cout << "Please enter your first name, address, phone and age :\n" << endl;
    string first_name;
    string address;
    string phone;
    int age;

    cin >> first_name;
    outputFile << first_name << endl;
    cin >> address;
    outputFile << address << endl;
    cin >> phone;
    outputFile << phone << endl;
    cin >> age;
    outputFile << age << endl;
    //Puts all info on one line
    cout <<"Hi, "<<first_name<<" (age "<<age<<") (address "<<address<<") (phone "<<phone<<")\n";

}

