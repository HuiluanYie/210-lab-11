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
    Order* orders = new Order[NR_ORDER];

    for (int i = 0; i < NR_ORDER; i++)
    {
        input_order(&orders[i]);
    }
    

    return 0;
}


//Function definition
void input_order(Order* o)
{
    cout << "\nPlease enter customer name: ";
    getline(cin, o->customer);

    cout << "Please enter the number of items in this order: ";
    int size;
    cin >> size;
    while (size < 1) // input validate
    {
        cout << "Invalid number of items (at least 1 item in the order);\n";
        cout << "Please enter the correct number of items: ";
        cin >> size;
    }
    cin.ignore(); // handle extra \n
    o->nr_item = size;

    o->items = new string [size];
    cout << "Please enter the items in this order: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Item #" << i + 1 << ": ";
        getline(cin, o->items[i]);
    }
}

void display_order(Order* o)
{
    cout << "Hi " << o->customer << ", here's your list of items in your order: \n";
    for (int i = 0; i < o->nr_item; i++)
    {
        cout << "Item #" << i + 1 << ": ";
    }
}