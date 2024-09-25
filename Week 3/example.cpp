#include <iostream>

using namespace std;


int main() {
    int* arr = new int[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1;
    }
    cout << arr[1];
    delete[] arr;
    return 0;
}