#include <iostream>
#include <string>
using namespace std;

struct FoodOrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(FoodOrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void display() {
        cout << "Order ID " << orderId << endl;
        cout << "Restaurant " << restaurantName << endl;
        cout << "Delivered " << (isDelivered ? "true" : "false") << endl;
    }
};

int main() {
    FoodOrderData data = {101, "Pizza Hut", false};

    FoodOrder order(data);

    order.display();

    return 0;
}