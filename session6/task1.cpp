#include <iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }

    void setArtist(string a) {
        artist = a;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song s;

    s.setTitle("Shape of You");
    s.setArtist("Ed Sheeran");

    cout << "Old Title " << s.getTitle() << endl;

    s.setTitle("Perfect");

    cout << "Updated Title " << s.getTitle() << endl;
    cout << "Artist " << s.getArtist() << endl;

    return 0;
}