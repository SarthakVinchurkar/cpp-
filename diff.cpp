#include <iostream>
using namespace std;

void findDifference(int setA[], int sizeA, int setB[], int sizeB, int difference[], int& sizeDifference) {
    sizeDifference = 0;

    for (int i = 0; i < sizeA; i++) {
        bool found = false;
        for (int j = 0; j < sizeB; j++) {
            if (setA[i] == setB[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            difference[sizeDifference] = setA[i];
            sizeDifference++;
        }
    }
}

int main() {
    const int maxSize = 100;
    int setA[maxSize];
    int setB[maxSize];
    int difference[maxSize];
    int sizeA, sizeB, sizeDifference;

    // Read the elements of set A
    cout << "Enter the number of elements in set A: ";
    cin >> sizeA;
    cout << "Enter the elements of set A: ";
    for (int i = 0; i < sizeA; i++) {
        cin >> setA[i];
    }

    // Read the elements of set B
    cout << "Enter the number of elements in set B: ";
    cin >> sizeB;
    cout << "Enter the elements of set B: ";
    for (int i = 0; i < sizeB; i++) {
        cin >> setB[i];
    }

    // Find the difference between set A and set B
    findDifference(setA, sizeA, setB, sizeB, difference, sizeDifference);

    // Display the difference
    cout << "The difference between set A and set B is: ";
    for (int i = 0; i < sizeDifference; i++) {
        cout << difference[i] << " ";
    }
    cout << endl;

    return 0;
}
