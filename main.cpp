// COMSC-210 | Lab 11 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

const int NR_ORDER = 3;

struct Order
{
    // an order includes a customer, the number of items in it, and an array of items
    string customer;
    int nr_item;
    string* items;

    ~Order()
    {
        if (items)
        {
            delete [] items;
        }
        items = nullptr;
    }
};

//Function prototype
void input_order(Order*);
void display_order(Order*);

int main() {
    // declarations

    return 0;
}


//Function definition
void input_order(Order* o)
{
    cout << "Please enter customer name: ";
    cin >> o -> customer;
    cout << "Please enter the number of items in this order: ";
    cin >> o -> nr_item;

    int size = o -> nr_item;
    o -> items = new string [size];

    cout << "Please enter the items in this order: ";
    for (int i = 0; i < size; i++)
    {
        
    }
    
    cout << "Please enter the number of items in this order: ";
    cin >> o->nr_item;
}

void display_order(Order* o)
{

}