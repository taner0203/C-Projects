#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Item.h"
#include "Customer.h"

class Order{

public:

Order(int orderId, const Customer& customer);

void addItem(const Item& item, int quantity);
double calculateTotal() const;
void shipOrder();
void deliveryOrder();
void displayOrderDetails() const;

private:
    int orderID;
    const Customer& customer;
    vector<pair<Item, int>> items;
    ShipmentStatus shipmentStatus;
};
#endif