//Experiment No. 27
//Polynomial Addition
//Created by Joel Lijo
#include <stdio.h>

struct Term {
    int coeff;
    int exp;
};

void read_poly(struct Term p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent of term %d:\n", i + 1);
        scanf("%d %d", &p[i].coeff, &p[i].exp);
    }
}

int add_poly(struct Term p1[], int n1, struct Term p2[], int n2, struct Term result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (p1[i].exp == p2[j].exp) {
            result[k].coeff = p1[i].coeff + p2[j].coeff;
            result[k].exp = p1[i].exp;
            i++; j++;
        } else if (p1[i].exp > p2[j].exp) {
            result[k] = p1[i];
            i++;
        } else {
            result[k] = p2[j];
            j++;
        }
        k++;
    }

    while (i < n1) result[k++] = p1[i++];
    while (j < n2) result[k++] = p2[j++];
    return k;  // number of terms in result
}

void display_poly(struct Term p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%dx^%d", p[i].coeff, p[i].exp);
        if (i != n - 1) printf(" + ");
    }
    printf("\n");
}

int main() {
    struct Term p1[10], p2[10], result[20];
    int n1, n2, n3;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n1);
    read_poly(p1, n1);

    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n2);
    read_poly(p2, n2);

    n3 = add_poly(p1, n1, p2, n2, result);

    printf("First Polynomial: ");
    display_poly(p1, n1);
    printf("Second Polynomial: ");
    display_poly(p2, n2);
    printf("Sum: ");
    display_poly(result, n3);

    return 0;
}
