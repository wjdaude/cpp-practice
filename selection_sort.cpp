#include<iostream>
using namespace std;

void my_sort(int list[], int n) {
    int i, j, min, t;

    for (i = 0; i < n - 1; i++) {
        min = i;                        
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[min])
                min = j;                
        }

        t = list[i];
        list[i] = list[min];
        list[min] = t;
    }
}

int main() {
    int list[10] = {23,11,15,8,17,33,7,14,19,21};

    my_sort(list, 10);

    for (int i = 0; i < 10; i++) {
        cout << list[i] << "\n";
    }

    return 0;
}