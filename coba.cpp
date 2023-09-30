#include <iostream>
using namespace std;

int main() {
    // Main Program
    int num; // Variabel
    num = 5; // Assign nilai ke variabel t
    int arr[5] = {1, 2, 3, 4, 5}; // Array satu dimensi

    for (int i = 0; i < num; i++) { // For loop
        if (arr[i] % 2 == 0) { // If statement
            cout << arr[i] << " adalah angka genap." << endl; // Output
        }
        else {
            cout << arr[i] << " adalah angka ganjil." << endl;
        }
    }

    int twoDimArray[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Array multidimensi

    int j = 0;
    while (j < 2) { // While loop
        int k = 0;
        do { // Do-while loop
            cout << twoDimArray[j][k] << " ";
            k++;
        } while (k < 3);
        cout << endl;
        j++;
    }

    return 0;
}
