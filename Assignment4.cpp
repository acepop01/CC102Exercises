#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream colorFile("color.txt");
    if (!colorFile) {
        cout << "Error creating color.txt" << endl;
        return 1;
    }

    colorFile << "Red" << endl;
    colorFile << "Blue" << endl;
    colorFile << "Green" << endl;
    colorFile << "Yellow" << endl;
    colorFile << "Purple" << endl;
    colorFile.close();

    ifstream inFile("color.txt");
    if (!inFile) {
        cout << "Error opening color.txt" << endl;
        return 1;
    }

    ofstream copyFile("color_copy.txt");
    if (!copyFile) {
        cout << "Error creating color_copy.txt" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        copyFile << line << endl;
    }

    inFile.close();
    copyFile.close();

    cout << "Done! color.txt created and copied to color_copy.txt." << endl;
    return 0;
}
