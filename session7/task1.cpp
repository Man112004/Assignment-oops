#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Kesariya" << endl;
    file << "Tum Hi Ho" << endl;
    file << "Apna Bana Le" << endl;
    file << "Chaleya" << endl;
    file << "Heeriye" << endl;

    file.close();

    cout << "Songs saved successfully.";
    return 0;
}