#include <bits/stdc++.h>

using namespace std;

void sortAscending(float array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[i]) swap(array[i], array[j]);
        }
    }
}

void reverseArray(float array[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        swap(array[i], array[j]);
        i++;
        j--;
    }
}

void sort(float array[], int size, bool isAscending) {
    sortAscending(array, size);
    if (isAscending == false) {
        reverseArray(array, size);
    }
}
