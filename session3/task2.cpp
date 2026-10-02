#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    double price;
    float rating;

    Product(string name, double p, float r) {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name " << productName << endl;
        cout << "Price " << price << endl;
        cout << "Rating " << rating << endl;
    }
};

int main() {
    Product p("Smartphone", 15000, 4.5);

    p.displayInfo();

    return 0;
}