#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

struct Item {
    string name;
    int quantity;
    float price;
};

// Load items from file into memory
void loadInventory(vector<Item>& inventory, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) return;

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Item item;
        ss >> item.name >> item.quantity >> item.price;
        inventory.push_back(item);
    }
    file.close();
}

// Append new item to file
void addItemToFile(const Item& item, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << item.name << " " << item.quantity << " " << item.price << endl;
        file.close();
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}

// Display all items
void displayInventory(const vector<Item>& inventory) {
    cout << "Inventory:\n";
    for (const auto& item : inventory) {
        cout << "Name: " << item.name
             << ", Quantity: " << item.quantity
             << ", Price: " << item.price << endl;
    }
}

// Search for item by name
void searchItem(const vector<Item>& inventory, const string& name) {
    for (const auto& item : inventory) {
        if (item.name == name) {
            cout << "Found: " << item.name
                 << " | Quantity: " << item.quantity
                 << " | Price: " << item.price << endl;
            return;
        }
    }
    cout << "Item not found.\n";
}

int main() {
    const string filename = "inventory.txt";
    vector<Item> inventory;
    loadInventory(inventory, filename);

    int choice;
    do {
        cout << "\n1. Add Item\n2. View Inventory\n3. Search Item\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Item newItem;
            cout << "Enter item name, quantity and price: ";
            cin >> newItem.name >> newItem.quantity >> newItem.price;
            inventory.push_back(newItem);
            addItemToFile(newItem, filename);
        } else if (choice == 2) {
            displayInventory(inventory);
        } else if (choice == 3) {
            string searchName;
            cout << "Enter item name to search: ";
            cin >> searchName;
            searchItem(inventory, searchName);
        }

    } while (choice != 4);

    return 0;
}
