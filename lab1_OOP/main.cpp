#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Func.h"
using namespace std;

int main()
{
    ifstream pfile("C:/Users/w1nzeen/Desktop/CLion proj/OOP_labs/lab1_OOP/prices.txt");
    if (!pfile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    struct money summ {0, 0};

    while (getline(pfile, line)) {
        cout << line << endl;

        string tokens[3];
        stringstream ss(line);
        string token;
        int i = 0;

        while (getline(ss, token, ',') && i < 3) {
            tokens[i++] = token;
        }

        if (i < 3) continue;

        struct money a { stoi(tokens[0]), stoi(tokens[1]) };
        int multiplayer = stoi(tokens[2]);

        summ = sum(mult(a, multiplayer), summ);
    }

    cout << endl << "General sum: ";
    to_string(summ);
    cout << "Need to pay: ";
    to_string(roundToNationalBank(summ));

    pfile.close();
}
