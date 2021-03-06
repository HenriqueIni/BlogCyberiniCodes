//Code by Henrique Felipe (GitHub: HenriqueIni)
#include <stdio.h>
#include <stdlib.h>

//NORMAL VERSION WITHOUT OPTIMIZATIONS
//O(n²) in all cases.
void bubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
//VERSION WITH OPTIMIZATIONS
//Best case: O(n)
//Average and worst case: O(n²)
void bubbleSortOpt(int a[], int n) {
    int flag = 1;
    int i, j;
    for (i = 0; i < n - 1 && flag == 1; i++) {
        flag = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
}
//Aux. function
void printArray(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}
//Test function
int main() {
    int c[10] = {10, 8, -7, 210, -1, 0, 30, 9, 6, -300};
    bubbleSort(c, 10);
    printArray(c, 10);
    int d[10] = {10, 8, -7, 210, -1, 0, 30, 9, 6, -300};
    bubbleSort(d, 10);
    printArray(d, 10);
    return 0;
}
