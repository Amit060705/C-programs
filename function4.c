#include<stdio.h>

int n1, n2, n3, sum; // Declare these variables globally

void line() {
    printf("\n_______\n");
}

void input() {
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
}

int calculateTotal() {
    sum = n1 + n2 + n3;
    return sum;
}

void output() {
    printf("Total is %d and average is %d", sum, sum / 3);
}

int main() {
    input();
    line();

    calculateTotal(); // Call the function to calculate total
    line();

    output();
    return 0;
}
