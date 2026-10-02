#include <iostream>
using namespace std;

class Movie {
public:
    string name;
    int year;

    Movie(string n, int y) {
        name = n;
        year = y;
    }

    Movie(const Movie &m) {
        name = m.name;
        year = m.year;
    }

    void display() {
        cout << "Movie Name " << name << endl;
        cout << "Year " << year << endl;
    }
};

int main() {
    Movie original("Avengers", 2019);

    Movie copied(original);

    cout << "Original Movie " << endl;
    original.display();

    cout << "\nCopied Movie " << endl;
    copied.display();

    return 0;
}