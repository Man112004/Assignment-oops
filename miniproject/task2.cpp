#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void display() {
        cout << title << " | "
             << platform << " | "
             << views << " | "
             << status << endl;
    }
};

int main() {
    Content c;

    cout << "Enter title: ";
    getline(cin, c.title);

    cout << "Enter platform: ";
    getline(cin, c.platform);

    cout << "Enter views: ";
    cin >> c.views;
    cin.ignore();

    cout << "Enter status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    file << c.title << "|"
         << c.platform << "|"
         << c.views << "|"
         << c.status << endl;

    file.close();

    cout << "Content saved successfully." << endl;

    return 0;
}