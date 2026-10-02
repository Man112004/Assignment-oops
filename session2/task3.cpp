#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string restaurant, bool delivered) {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered." << endl;
    }
};

int main() {
    FoodOrder order(101, "Pizza Hut", false);

    order.markDelivered();

    return 0;
}