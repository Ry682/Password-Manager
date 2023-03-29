#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, pw, myText;

    ofstream MyFile("pass.txt", ios::app);
    ifstream MyReadFile("pass.txt");

    cout << "Insert the name of the password: \n";
    cin >> name;

    if (name == "list") {

        ifstream ReadFile("pass.txt");

        while (getline(ReadFile, myText)) {
            cout << myText << endl;
        }
        ReadFile.close();
    }
    else {
        cout << "Insert the password: \n";
        cin >> pw;
        MyFile << "Name: " << name << " " << "Password: " << pw << endl;
        MyFile.close();
    }

    return 0;
}
