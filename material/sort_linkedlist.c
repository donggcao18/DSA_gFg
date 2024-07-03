//using mergesort
//ascending order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100001
typedef struct Candidate {
    int score;
    char code[10];
} Candidate;
int n;
Candidate* a[N];

void input() {
    char code[11];
    n = 0;
    while (1) {
        scanf("%s", code);
        if (strcmp(code, "#") == 0) break;
        int score;
        scanf("%d", &score);
        n++;
        a[n] = (Candidate*)malloc(sizeof(Candidate));
        a[n]->score = score;
        strcpy(a[n]->code, code);
    }
}

void merge(Candidate* arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    Candidate* L[n1 + 1];
    Candidate* R[n2 + 1];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i]->score <= R[j]->score) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Candidate* arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void print() {
    for (int i = 1; i <= n; i++) {
        printf("%s %d\n", a[i]->code, a[i]->score);
    }
}

int main() {
    input();
    mergeSort(a, 1, n);
    print();
    return 0;
}
