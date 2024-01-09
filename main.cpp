#include <iostream>
#include "Item.h"
#include "Stock.h"
#include "Customer.h"
#include "Order.h"

using namespace std;

int main() {
    
    Item item1(1, "Item1", 10.0);
    Item item2(2, "Item2", 15.0);

    Stock stock;
    stock.addItem(item1, 50);
    stock.addItem(item2, 30);

    Customer customer1(101, "George", "12 Green St");
    Customer customer2(102, "Peter", "45 Blue St");

    Order order1(1, customer1);
    order1.addItem(item1, 5);
    order1.addItem(item2, 3);

    Order order2(2, customer2);
    order2.addItem(item1, 2);
    order2.addItem(item2, 4);

    if (stock.sellItem(item1.getId(), 7) && stock.sellItem(item2.getId(), 7)) {
        order1.shipOrder();
        order2.deliverOrder();

        order1.displayOrderDetails();
        order2.displayOrderDetails();
        stock.displayStock();
    } else {
        cout << "Insufficient stock for the orders." << endl;
    }

    return 0;
}
