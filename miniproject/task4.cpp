#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;
};

int main() {

    vector<Content> list;

    ifstream file("content_list.txt");

    string line;

    while (getline(file, line)) {
        stringstream ss(line);

        Content c;
        string views;

        getline(ss, c.title, '|');
        getline(ss, c.platform, '|');
        getline(ss, views, '|');
        getline(ss, c.status, '|');

        c.views = stoi(views);

        list.push_back(c);
    }

    file.close();

    for (int i = 0; i < list.size(); i++) {
        cout << i + 1 << ". "
             << list[i].title << " - "
             << list[i].platform << " - "
             << list[i].status << endl;
    }

    int number;
    cout << "Enter content number to update: ";
    cin >> number;
    cin.ignore();

    if (number >= 1 && number <= list.size()) {

        cout << "Enter new status: ";
        getline(cin, list[number - 1].status);

        ofstream out("content_list.txt");

        for (Content c : list) {
            out << c.title << "|"
                << c.platform << "|"
                << c.views << "|"
                << c.status << endl;
        }

        out.close();

        cout << "Status updated successfully." << endl;
    }
    else {
        cout << "Invalid number." << endl;
    }

    return 0;
}