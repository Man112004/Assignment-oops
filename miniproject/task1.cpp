#include <iostream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void display() {
        cout << "Title " << title << endl;
        cout << "Platform " << platform << endl;
        cout << "Views " << views << endl;
        cout << "Status " << status << endl;
    }
};

int main() {
    Content c;

    c.title = "C++ Tutorial";
    c.platform = "YouTube";
    c.views = 1000;
    c.status = "Published";

    c.display();

    return 0;
}