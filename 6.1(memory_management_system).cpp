#include<iostream>
using namespace std;

class Dynamic_memory {
    int size;
    int capacity;
    int* data;

    void resize() {
        cout << "Resizing array..." << endl;
        capacity *= 2; // Double the capacity
        int* newData = new int[capacity];

        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }

        delete[] data; // Free old memory
        data = newData; // Assign new array
    }

public:
    Dynamic_memory(int val = 4) {
        capacity = val;
        data = new int[capacity];
        size = 0; // Initialize correctly
    }

    ~Dynamic_memory() {
        delete[] data;
    }

    void insert(int val) {
        if (size == capacity) {
            resize();
        }
        data[size++] = val;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
       
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    void printarray() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void get_index_val(int index) const {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        cout << "Value at index " << index << ": " << data[index] << endl;
    }
};

int main() {
    Dynamic_memory arr;
    arr.insert(10);
    arr.insert(5);
    arr.insert(13);
    arr.insert(78);
    arr.printarray();

    arr.insert(78);
    arr.insert(67);
    arr.insert(89);
    arr.printarray();
   
    arr.get_index_val(3);
    arr.remove(2);
    arr.printarray();

    return 0;
}
