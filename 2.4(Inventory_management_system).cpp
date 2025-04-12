#include <iostream>
using namespace std;

class Item {

    int Item_id;
    string Item_name;
    float Item_price;
    int Item_quantity;

public:
    //  take item details from user
    void get_data() {
        cout << "Enter Item id: ";
        cin >> Item_id;

        cout << "Enter Item name: ";
        cin >> Item_name;

        cout << "Enter Item price: ";
        cin >> Item_price;

        cout << "Enter Item quantity: ";
        cin >> Item_quantity;
    }

    // Function to display item details
    void display_stock() {
        cout << "Item ID: " << Item_id << endl;
        cout << "Item Name: " << Item_name << endl;
        cout << "Item Price: " << Item_price << endl;
        cout << "Item Quantity: " << Item_quantity << endl;
    }

    //  add stock
    void Add_item(int add_quantity) {
        Item_quantity = Item_quantity + add_quantity;
        cout << add_quantity << " units added to item ID " << Item_id <<endl;
    }

    //  sell stock
    void sell_Item(int sell_quantity) {
        if (Item_quantity < sell_quantity) {
            cout << "Not enough stock for item ID " << Item_id << "!\n";
        } else {
            Item_quantity = Item_quantity - sell_quantity;
            cout << sell_quantity << " units sold from item ID " << Item_id << ".\n";
        }
    }

    // Function to get item ID (used for searching)
    int get_id() {
        return Item_id;
    }
};

int main() {
    int id, quantity, choice;
    Item s[2];

    // Take input for 5 items
    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        s[i].get_data();
    }

    while (true) {
        cout <<endl<< "Product Management System"<<endl;
        cout << "1. Add Stock\n";
        cout << "2. Sell Item\n";
        cout << "3. Display Inventory\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Program Exiting... Thank you!"<<endl;
            break;
        }

        switch (choice) {
        case 1:
            cout << "Enter Item ID to add stock: ";
            cin >> id;
            cout << "Enter quantity to add: ";
            cin >> quantity;
            for (int i = 0; i < 2; i++) {
                if (s[i].get_id() == id) {
                    s[i].Add_item(quantity);
                    break;
                }
            }
            break;

        case 2:
            cout << "Enter Item ID to sell: ";
            cin >> id;
            cout << "Enter quantity to sell: ";
            cin >> quantity;
            for (int i = 0; i < 2; i++) {
                if (s[i].get_id() == id) {
                    s[i].sell_Item(quantity);
                    break;
                }
            }
            break;

        case 3:
            cout <<endl<< "Inventory Details:"<<endl;
            for (int i = 0; i < 2; i++) {
                cout << "-----------------------------"<<endl;
                s[i].display_stock();
            }
            break;

        default:
            cout << "Invalid choice! Please try again."<<endl;
        }
    }

    return 0;
}
