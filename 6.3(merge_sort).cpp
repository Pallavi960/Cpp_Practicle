#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter two integers: ";
    cin >> n >> m;

    // Dynamically allocate arrays of sizes n, m, and n + m
    int* arr1 = new int[n];
    int* arr2 = new int[m];
    int* arr = new int[n + m];

    // Input for first array
    cout << "Enter first " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input for second array
    cout << "Enter second " << m << " integers: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    // Merge both arrays into one (sorted merge)
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }
    // Copy remaining elements of arr1
    while (i < n) arr[k++] = arr1[i++];
    // Copy remaining elements of arr2
    while (j < m) arr[k++] = arr2[j++];

    // Sort the merged array using bubble sort
    for (int i = 0; i < n + m - 1; i++) {
        for (int j = i + 1; j < n + m; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output the sorted merged array
    cout << "Sorted array: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"24CE140";

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] arr;

    return 0;
}
