#define STOCK_H
#ifndef STOCK_H

#include <string>

using namespace std;

class Stock {
    public:
        void addItem(const Item& item, int quantity);
        bool sellItem(int ItemId, int quantity)
        void displayStock() const;

private:
    map<int, int> stock; 
}

#endif 