#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;
};

void displayContent() {
    ifstream file("content_list.txt");

    string line;
    int number = 1;

    while (getline(file, line)) {
        stringstream ss(line);

        Content c;
        string views;

        getline(ss, c.title, '|');
        getline(ss, c.platform, '|');
        getline(ss, views, '|');
        getline(ss, c.status, '|');

        c.views = stoi(views);

        cout << number << ". "
             << c.title << " - "
             << c.platform << endl;

        number++;
    }

    file.close();
}

int main() {
    displayContent();

    return 0;
}