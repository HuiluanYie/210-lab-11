// COMSC-210 | Lab 11 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

struct Order
{
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
    cout << ""
}

void display_order(Order* o)
{

}