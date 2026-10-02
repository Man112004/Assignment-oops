#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool pub) {
        name = n;
        createdOn = date;
        isPublic = pub;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Is Public: " << (isPublic ? "true" : "false") << endl;
    }
};

int main() {
    Playlist p("Aaj Ki Raat", "22-09-2025", true);

    p.display();

    return 0;
}