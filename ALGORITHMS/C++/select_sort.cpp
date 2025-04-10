#include <iostream>
using namespace std;

void selectSort(int* tab, int size){

    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (tab[j] < tab[min_index]) {
                min_index = j;
            }
        }
        
        int temp = tab[i];
        tab[i] = tab[min_index];
        tab[min_index] = temp;
    }
}

void showTab(int* tab, int size) {
    for (int i = 0; i < size; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}


int main() {
    int tab[] = {21, 75, 32, 2, 6, 2, 19,333};
    int size = sizeof(tab) / sizeof(tab[0]);

    cout << "Before: " << endl;
    showTab(tab, size);


    selectSort(tab, size);

    cout << "After: " << endl;
    showTab(tab, size);

    return 0;
}
