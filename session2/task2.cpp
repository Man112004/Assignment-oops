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

    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p("Aaj Ki Raat", "22-09-2026", true);

    cout << "Initial " << (p.isPublic ? "true" : "false") << endl;

    p.togglePublic();
    cout << "After first toggle " << (p.isPublic ? "true" : "false") << endl;

    p.togglePublic();
    cout << "After second toggle " << (p.isPublic ? "true" : "false") << endl;

    return 0;
}