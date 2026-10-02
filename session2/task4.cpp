#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string date, bool pub) {
        name = n;
        createdOn = date;
        isPublic = pub;
        songs = {};
    }

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    void displaySongs() {
        cout << "Songs List:" << endl;

        for (string song : songs) {
            cout << song << endl;
        }
    }
};

int main() {
    Playlist p("My Playlist", "22-09-2026", true);

    p.addSong("Tum Hi Ho");
    p.addSong("Kesariya");
    p.addSong("Apna Bana Le");

    p.displaySongs();

    return 0;
}