#ifndef ITEM_H
#define ITEM_H

#include string

    class Item{
        public:
        Item(int id, string name, double price)

        int getID() const;
        string getName() const;
        double getPrice() const;

        private:
            int id;
            string name;
            double price;
 };

 #endif