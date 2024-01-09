#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

class Customer {
    public:
        Customer(int id, string name, string adress);

    int getID() const;
    string getName() const;
    string getAdress() const;

    private:
        int id;
        string name;
        string adress;
};

#endif 
